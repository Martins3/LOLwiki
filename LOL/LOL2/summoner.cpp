#include <QDebug>
#include <QSqlQuery>
#include <QVariantList>
#include <iostream>
#include <string>
#include "summoner.h"
#include "summonerSpell.h"
#include "itemdata.h"
#include "baserune.h"
#include "rune.h"
#include "objectWraper.h"
#include "champion.h"
#include "championtag.h"
#include "matchlist.h"
#include "championStat.h"
#include "championInfo.h"

int Summoner::userId = 0;

Summoner::Summoner()
{
    QSqlQuery query;
    query.prepare("select distinct tag from ItemTags;");
    query.exec();
    while(query.next()) {
        QString tag = query.value(0).toString();
        dataList2.append(new ObjectWraper(tag));
    }

    query.prepare("select distinct tag from ChampionTag;");
    query.exec();
    while(query.next()) {
        QString tag = query.value(0).toString();
        dataList3.append(new ObjectWraper(tag));
    }

}

QVariant Summoner::getListModel()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM SummonerSpell");
    query.exec();
    dataList.clear();
    while(query.next()) {
        int key = query.value(0).toInt();
        QString id = query.value(1).toString();
        QString image = query.value(4).toString();
        QString des = query.value(3).toString();
        int cooldown = query.value(2).toInt();
        dataList.append(new SummonerSpell(key, id, image, des, cooldown));
    }
    return QVariant::fromValue(dataList);
}

QVariant Summoner::getItemListModel()
{
    QSqlQuery query;
    QString select;
    for(auto i = itemTag.begin(); i != itemTag.end(); i ++){
        if(i == itemTag.begin()){
            select = select +  "'" + *i + "'";
        }else{
            select = select +  ", " + "'" + *i + "'";
        }
    }
    QString  s;
    if(select.size()){
        s = "select * from Item where not exists( select * from ItemTags it where tag in (" + select + ") and not exists( select * from ItemTags it2 where Item._key = it2._key and it.tag = it2.tag ) );";
    }else{
        s = "select * from Item";
    }
    qDebug() << s;
    qDebug() << query.exec(s);
    dataList.clear();
    while(query.next()) {
        int key = query.value(0).toInt();
        QString id = query.value(2).toString();
        QString image = query.value(1).toString();
        QString des = query.value(3).toString();
        dataList.append(new ItemData(key, image, id, des));
    }
    return QVariant::fromValue(dataList);
}

QVariant Summoner::getBaseRuneListModel()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM BaseRune");
    query.exec();
    dataList.clear();
    while(query.next()) {
        int id = query.value(0).toInt();
        QString name = query.value(2).toString();
        QString image = query.value(3).toString();
        dataList.append(new BaseRune(id, name, image));
    }
    return QVariant::fromValue(dataList);
}

QVariant Summoner::getItemTagModel()
{
    return QVariant::fromValue(dataList2);
}

void Summoner::summonerSpellhandler(const int key, const QString &new_id, const int cooldown,
                                    const QString & description, const QString & image,
                                    const bool remove = false)
{
    QSqlQuery query;
    qDebug() << "key" << key;
    qDebug() << "new_id" << new_id;

    if(remove){
        query.prepare("delete from SummonerSpell where spell_key = :key");
        query.bindValue(":key", key);
        qDebug() << query.exec();
        return;
    }

    if(key != -1){
        query.prepare("update SummonerSpell set id = :new_id where spell_key = :key");
        query.bindValue(":key", key);
        query.bindValue(":new_id", new_id);
        qDebug() << query.exec();
    }else if(key == -1){
        int _key;
        query.prepare("select max(spell_key) from SummonerSpell;");
        qDebug() << query.exec();
        if(query.next())
            _key = query.value(0).toInt() + 1;
        else
            return;

        qDebug() << "allocated key " << _key;

        QString _image = "SummonerDot.png";
        query.prepare("insert into SummonerSpell values(:key, :id, :cooldown, :description, :image)");
        query.bindValue(":key", _key);
        query.bindValue(":id", new_id);
        query.bindValue(":cooldown", cooldown);
        query.bindValue(":description", description);
        query.bindValue(":image", _image);
        qDebug() << query.exec();
    }
}





void Summoner::itemHandler(const int key, const QString &image, const QString & name,
                           const QString & plaintext, bool remove)
{

    QSqlQuery query;
    qDebug() << key;
    qDebug() << name;

    if(remove){
        query.prepare("delete from Item where _key = :key");
        query.bindValue(":key", key);
        qDebug() << query.exec();
        return;
    }

    if(key != -1){
        query.prepare("update Item set name = :name where _key = :key");
        query.bindValue(":name", name);
        query.bindValue(":key", key);
        qDebug() << query.exec();
    }else if(key == -1){
        int _key;
        query.prepare("select max(_key) from Item;");
        qDebug() << query.exec();
        if(query.next())
            _key = query.value(0).toInt() + 1;
        else
            return;

        QString _image = "1001.png";
        query.prepare("insert into Item values(:key, :image, :name, :plaintext)");
        query.bindValue(":key", _key);
        query.bindValue(":image", _image);
        query.bindValue(":name", name);
        query.bindValue(":plaintext", plaintext);
        qDebug() << query.exec();
    }
}

void Summoner::itemSelect(const QString &tag, bool add)
{
    if(add){
       itemTag.append(tag);
    }else{
        itemTag.removeOne(tag);
    }
}

void Summoner::championSelect(const QString &tag, bool add)
{
    if(add){
       championTag.append(tag);
    }else{
       championTag.removeOne(tag);
    }
}

void Summoner::userLogin(const QString &name, const QString &password, const bool isLogin)
{

    QSqlQuery query;
    qDebug() << name;
    qDebug() << password;

    bool found = false;
    int id;
    query.prepare("SELECT id FROM Summoner where name = :name and password = :password");
    query.bindValue(":name", name);
    query.bindValue(":password", password);
    qDebug() << "login query : " << query.exec();
    if(query.next()){
        found = true;
        id = query.value(0).toInt();
    }

    if(isLogin){
        if(found){
            userId = id;
            qDebug() << "change the id to " << userId;
            emit listModelChanged();
        }else{
            qDebug() << "nobody or mismatch";
        }
    }else{
        emit listModelChanged();
        return;
        if(!found){
            int id;
            query.prepare("select max(id) from Summoner;");
            query.exec();
            if(query.next())
                id = query.value(0).toInt() + 1;
            else
                qDebug() << "----------- impossible -----";

            query.prepare("insert into Summoner values(:id, :name, :password)");
            query.bindValue(":id", id);
            query.bindValue(":name", name);
            query.bindValue(":password", password);
            qDebug() << "insert a new user : " << query.exec();
            userId = id;
            emit listModelChanged();
        }
    }
}

QVariant Summoner::getRune(const int parent_id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Rune where parent_id = :id");
    query.bindValue(":id", parent_id);
    query.exec();
    dataList.clear();
    while(query.next()) {
        QString name = query.value(3).toString();
        QString image = query.value(4).toString();
        dataList.append(new Rune(name, image));
    }
    return QVariant::fromValue(dataList);
}


QVariant Summoner::getChampionListModel()
{
    QSqlQuery query;
    QString select;
    for(auto i = championTag.begin(); i != championTag.end(); i ++){
        if(i == championTag.begin()){
            select = select +  "'" + *i + "'";
        }else{
            select = select +  ", " + "'" + *i + "'";
        }
    }
    QString  s;
    if(select.size()){
        s = "select * from Champion where not exists( select * from ChampionTag it where tag in (" + select + ") and not exists( select * from ChampionTag it2 where Champion.champion_key = it2.champion_key and it.tag = it2.tag ) );";
    }else{
        s = "select * from Champion";
    }
    query.prepare(s);
    query.exec();
    dataList.clear();
    while(query.next()) {
        QString blurb = query.value(0).toString();
        QString image = query.value(1).toString();
        int champion_key = query.value(2).toInt();
        QString name = query.value(3).toString();
        QString title = query.value(4).toString();
        dataList.append(new Champion(blurb, image, champion_key, name, title));
    }
    return QVariant::fromValue(dataList);
}


QVariant Summoner::getChampionTagListModel()
{
    return QVariant::fromValue(dataList3);
}

QString Summoner::getChampion(int champion_key, bool isTitle){
    QSqlQuery query;
    QString s;
    if(isTitle){
        s = "SELECT title FROM Champion where champion_key = :champion_key;";
    }else{
        s = "SELECT image FROM Champion where champion_key = :champion_key;";
    }
    query.prepare(s);
    query.bindValue(":champion_key", champion_key);
    query.exec();
    QString a;
    if(!isTitle)
        a = "champion/";
    if(query.next())
        return query.value(0).toString();
    qDebug() << "------------- Champion foriegn key voliate --------------";
    a = a + "Ashe.png";
    return a;
}

MatchList * Summoner::getNext(QSqlQuery & query, bool f){
        int match_id = query.value(0).toInt();
        qDebug() << match_id;
        bool red_win = query.value(1).toBool();
        int summoner_id_0 = query.value(2).toInt();
        QString champion_key_0 = getChampion(query.value(3).toInt(), f);
        int damage_0 = query.value(4).toInt();
        int received_damage_0 = query.value(5).toInt();
        int kill_num_0 = query.value(6).toInt();
        int death_num_0 = query.value(7).toInt();
        int assit_num_0 = query.value(8).toInt();
        int summoner_id_1 = query.value(9).toInt();
        QString champion_key_1 = getChampion(query.value(10).toInt(), f);
        int damage_1 = query.value(11).toInt();
        int received_damage_1 = query.value(12).toInt();
        int kill_num_1 = query.value(13).toInt();
        int death_num_1 = query.value(14).toInt();
        int assit_num_1 = query.value(15).toInt();
        int summoner_id_2 = query.value(16).toInt();
        QString champion_key_2 = getChampion(query.value(17).toInt(), f);
        int damage_2 = query.value(18).toInt();
        int received_damage_2 = query.value(19).toInt();
        int kill_num_2 = query.value(20).toInt();
        int death_num_2 = query.value(21).toInt();
        int assit_num_2 = query.value(22).toInt();
        int summoner_id_3 = query.value(23).toInt();
        QString champion_key_3 = getChampion(query.value(24).toInt(), f);
        int damage_3 = query.value(25).toInt();
        int received_damage_3 = query.value(26).toInt();
        int kill_num_3 = query.value(27).toInt();
        int death_num_3 = query.value(28).toInt();
        int assit_num_3 = query.value(29).toInt();
        int summoner_id_4 = query.value(30).toInt();
        QString champion_key_4 = getChampion(query.value(31).toInt(), f);
        int damage_4 = query.value(32).toInt();
        int received_damage_4 = query.value(33).toInt();
        int kill_num_4 = query.value(34).toInt();
        int death_num_4 = query.value(35).toInt();
        int assit_num_4 = query.value(36).toInt();
        int summoner_id_5 = query.value(37).toInt();
        QString champion_key_5 = getChampion(query.value(38).toInt(), f);
        int damage_5 = query.value(39).toInt();
        int received_damage_5 = query.value(40).toInt();
        int kill_num_5 = query.value(41).toInt();
        int death_num_5 = query.value(42).toInt();
        int assit_num_5 = query.value(43).toInt();
        int summoner_id_6 = query.value(44).toInt();
        QString champion_key_6 = getChampion(query.value(45).toInt(), f);
        int damage_6 = query.value(46).toInt();
        int received_damage_6 = query.value(47).toInt();
        int kill_num_6 = query.value(48).toInt();
        int death_num_6 = query.value(49).toInt();
        int assit_num_6 = query.value(50).toInt();
        int summoner_id_7 = query.value(51).toInt();
        QString champion_key_7 = getChampion(query.value(52).toInt(), f);
        int damage_7 = query.value(53).toInt();
        int received_damage_7 = query.value(54).toInt();
        int kill_num_7 = query.value(55).toInt();
        int death_num_7 = query.value(56).toInt();
        int assit_num_7 = query.value(57).toInt();
        int summoner_id_8 = query.value(58).toInt();
        QString champion_key_8 = getChampion(query.value(59).toInt(), f);
        int damage_8 = query.value(60).toInt();
        int received_damage_8 = query.value(61).toInt();
        int kill_num_8 = query.value(62).toInt();
        int death_num_8 = query.value(63).toInt();
        int assit_num_8 = query.value(64).toInt();
        int summoner_id_9 = query.value(65).toInt();
        QString champion_key_9 = getChampion(query.value(66).toInt(), f);
        int damage_9 = query.value(67).toInt();
        int received_damage_9 = query.value(68).toInt();
        int kill_num_9 = query.value(69).toInt();
        int death_num_9 = query.value(70).toInt();
        int assit_num_9 = query.value(71).toInt();
        MatchList * m = new MatchList(match_id, red_win, summoner_id_0, champion_key_0, damage_0, received_damage_0, kill_num_0, death_num_0, assit_num_0, summoner_id_1, champion_key_1, damage_1, received_damage_1, kill_num_1, death_num_1, assit_num_1, summoner_id_2, champion_key_2, damage_2, received_damage_2, kill_num_2, death_num_2, assit_num_2, summoner_id_3, champion_key_3, damage_3, received_damage_3, kill_num_3, death_num_3, assit_num_3, summoner_id_4, champion_key_4, damage_4, received_damage_4, kill_num_4, death_num_4, assit_num_4, summoner_id_5, champion_key_5, damage_5, received_damage_5, kill_num_5, death_num_5, assit_num_5, summoner_id_6, champion_key_6, damage_6, received_damage_6, kill_num_6, death_num_6, assit_num_6, summoner_id_7, champion_key_7, damage_7, received_damage_7, kill_num_7, death_num_7, assit_num_7, summoner_id_8, champion_key_8, damage_8, received_damage_8, kill_num_8, death_num_8, assit_num_8, summoner_id_9, champion_key_9, damage_9, received_damage_9, kill_num_9, death_num_9, assit_num_9);
        return m;
}


QVariantList Summoner::getMatchListModel()
{
    QSqlQuery query;

    QString s = "select * from MatchList where\
  :userID = summoner_id_0 or\
  :userID = summoner_id_1 or\
  :userID = summoner_id_2 or\
  :userID = summoner_id_3 or\
  :userID = summoner_id_4 or\
  :userID = summoner_id_5 or\
  :userID = summoner_id_6 or\
  :userID = summoner_id_7 or\
  :userID = summoner_id_8 or\
  :userID = summoner_id_9 order by match_id limit 15;";
    query.prepare(s);
    query.bindValue(":userID", userId);
    qDebug() << "query userId " << userId;
    query.exec();
    dataList.clear();
    QVariantList newList;
    while(query.next()) {
        MatchList * m = getNext(query, false);
        newList << QVariant::fromValue(m);
    }
    return newList;
}

QVariant Summoner::getMatchData(int match_id)
{
    QSqlQuery query;
    QString s = "select * from MatchList where match_id = :match_id;";
    query.prepare(s);
    query.bindValue(":match_id", match_id);
    qDebug() << "query match_id " << match_id;
    query.exec();

    if(query.next()) {
        MatchList * m = getNext(query, true);
        qDebug() << "the name of champion " << m->getChampion_key_0();
        return QVariant::fromValue(m);
    }
    qDebug() << "--------- impossible ----------------";
    return QVariant::fromValue(NULL);
}

QVariant Summoner::getChampionStat(int champion_key)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM ChampionStat where champion_key = :champion_key");
    query.bindValue(":champion_key", champion_key);
    query.exec();
    dataList.clear();
    if(query.next()) {
        int champion_key = query.value(0).toInt();
        double armor = query.value(1).toDouble();
        double armorperlevel = query.value(2).toDouble();
        double attackdamage = query.value(3).toDouble();
        double attackdamageperlevel = query.value(4).toDouble();
        int attackrange = query.value(5).toInt();
        double attackspeedoffset = query.value(6).toDouble();
        double attackspeedperlevel = query.value(7).toDouble();
        double crit = query.value(8).toDouble();
        double critperlevel = query.value(9).toDouble();
        int hp = query.value(10).toInt();
        int hpperlevel = query.value(11).toInt();
        double hpregen = query.value(12).toDouble();
        double hpregenperlevel = query.value(13).toDouble();
        int movespeed = query.value(14).toInt();
        int mp = query.value(15).toInt();
        int mpperlevel = query.value(16).toInt();
        int mpregen = query.value(17).toInt();
        int mpregenperlevel = query.value(18).toInt();
        double spellblock = query.value(19).toDouble();
        double spellblockperlevel = query.value(20).toDouble();
        return QVariant::fromValue(new ChampionStat(champion_key, armor, armorperlevel, attackdamage, attackdamageperlevel, attackrange, attackspeedoffset, attackspeedperlevel, crit, critperlevel, hp, hpperlevel, hpregen, hpregenperlevel, movespeed, mp, mpperlevel, mpregen, mpregenperlevel, spellblock, spellblockperlevel));
    }
    return QVariant::fromValue(NULL);
}

QVariant Summoner::getChampionInfo(int champion_key)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM ChampionInfo where champion_key = :champion_key");
    query.bindValue(":champion_key", champion_key);
    qDebug() << query.exec();
    if(query.next()) {
        int champion_key = query.value(0).toInt();
        qDebug() << "champion info champion key" << champion_key;
        int info_attack = query.value(1).toInt();
        int info_defense = query.value(2).toInt();
        int info_difficulty = query.value(3).toInt();
        int info_magic = query.value(4).toInt();
        return QVariant::fromValue(new ChampionInfo(champion_key, info_attack, info_defense, info_difficulty, info_magic));
    }

    qDebug() << "failed !!!!!!";
    return QVariant::fromValue(NULL);
}


void Summoner::championStathandler(const int champion_key ,const double armor ,const double armorperlevel ,const double attackdamage ,const double attackdamageperlevel ,const int attackrange ,const double attackspeedoffset ,const double attackspeedperlevel ,const double crit ,const double critperlevel ,const int hp ,const int hpperlevel ,const double hpregen ,const double hpregenperlevel ,const int movespeed ,const int mp ,const int mpperlevel ,const int mpregen ,const int mpregenperlevel ,const double spellblock ,const double spellblockperlevel ,const bool remove){
        QSqlQuery query;
        qDebug() << "stat handler : " << champion_key;
        if(remove){
            query.prepare("delete from ChampionStat where champion_key= :champion_key");
            query.bindValue(":champion_key", champion_key);
            qDebug() << query.exec();
            return;
        }
        if(champion_key != -1){
            query.prepare("update ChampionStat set armor = :armor,armorperlevel = :armorperlevel,attackdamage = :attackdamage,attackdamageperlevel = :attackdamageperlevel,attackrange = :attackrange,attackspeedoffset = :attackspeedoffset,attackspeedperlevel = :attackspeedperlevel,crit = :crit,critperlevel = :critperlevel,hp = :hp,hpperlevel = :hpperlevel,hpregen = :hpregen,hpregenperlevel = :hpregenperlevel,movespeed = :movespeed,mp = :mp,mpperlevel = :mpperlevel,mpregen = :mpregen,mpregenperlevel = :mpregenperlevel,spellblock = :spellblock,spellblockperlevel = :spellblockperlevel where champion_key = :champion_key");
            query.bindValue(":champion_key",champion_key);
            query.bindValue(":armor",armor);
            query.bindValue(":armorperlevel",armorperlevel);
            query.bindValue(":attackdamage",attackdamage);
            query.bindValue(":attackdamageperlevel",attackdamageperlevel);
            query.bindValue(":attackrange",attackrange);
            query.bindValue(":attackspeedoffset",attackspeedoffset);
            query.bindValue(":attackspeedperlevel",attackspeedperlevel);
            query.bindValue(":crit",crit);
            query.bindValue(":critperlevel",critperlevel);
            query.bindValue(":hp",hp);
            query.bindValue(":hpperlevel",hpperlevel);
            query.bindValue(":hpregen",hpregen);
            query.bindValue(":hpregenperlevel",hpregenperlevel);
            query.bindValue(":movespeed",movespeed);
            query.bindValue(":mp",mp);
            query.bindValue(":mpperlevel",mpperlevel);
            query.bindValue(":mpregen",mpregen);
            query.bindValue(":mpregenperlevel",mpregenperlevel);
            query.bindValue(":spellblock",spellblock);
            query.bindValue(":spellblockperlevel",spellblockperlevel);
            qDebug() << "update result" << query.exec();
        }else if(champion_key == -1){
            int _champion_key;
            query.prepare("select max(champion_key) from ChampionInfo;");
            qDebug() << query.exec();
            if(query.next())
                _champion_key = query.value(0).toInt() + 1;
            else
                return;
            query.prepare("insert into ChampionStat values(:champion_key, :armor, :armorperlevel, :attackdamage, :attackdamageperlevel, :attackrange, :attackspeedoffset, :attackspeedperlevel, :crit, :critperlevel, :hp, :hpperlevel, :hpregen, :hpregenperlevel, :movespeed, :mp, :mpperlevel, :mpregen, :mpregenperlevel, :spellblock, :spellblockperlevel)");
            query.bindValue(":champion_key",_champion_key);
            query.bindValue(":armor",armor);
            query.bindValue(":armorperlevel",armorperlevel);
            query.bindValue(":attackdamage",attackdamage);
            query.bindValue(":attackdamageperlevel",attackdamageperlevel);
            query.bindValue(":attackrange",attackrange);
            query.bindValue(":attackspeedoffset",attackspeedoffset);
            query.bindValue(":attackspeedperlevel",attackspeedperlevel);
            query.bindValue(":crit",crit);
            query.bindValue(":critperlevel",critperlevel);
            query.bindValue(":hp",hp);
            query.bindValue(":hpperlevel",hpperlevel);
            query.bindValue(":hpregen",hpregen);
            query.bindValue(":hpregenperlevel",hpregenperlevel);
            query.bindValue(":movespeed",movespeed);
            query.bindValue(":mp",mp);
            query.bindValue(":mpperlevel",mpperlevel);
            query.bindValue(":mpregen",mpregen);
            query.bindValue(":mpregenperlevel",mpregenperlevel);
            query.bindValue(":spellblock",spellblock);
            query.bindValue(":spellblockperlevel",spellblockperlevel);
            qDebug() << query.exec();
    }
}


void Summoner::championInfohandler(const int champion_key ,const int info_attack ,const int info_defense ,const int info_difficulty ,const int info_magic ,const bool remove){
        QSqlQuery query;
        if(remove){
            query.prepare("delete from ChampionInfo where champion_key= :champion_key");
            query.bindValue(":champion_key", champion_key);
            qDebug() << query.exec();
            return;
        }
        if(champion_key != -1){
            qDebug() << "values : -----";
            qDebug() << info_attack;
            qDebug() << info_defense;
            qDebug() << info_difficulty;
            qDebug() << info_magic;
            query.prepare("update ChampionInfo set info_attack = :info_attack,info_defense = :info_defense, info_difficulty = :info_difficulty, info_magic = :info_magic where champion_key = :champion_key");
            query.bindValue(":champion_key",champion_key);
            query.bindValue(":info_attack",info_attack);
            query.bindValue(":info_defense",info_defense);
            query.bindValue(":info_difficulty",info_difficulty);
            query.bindValue(":info_magic",info_magic);
            qDebug() << "update info " << query.exec();

        }else if(champion_key == -1){
            int _champion_key;
            query.prepare("select max(champion_key) from ChampionInfo;");
            qDebug() << query.exec();
            if(query.next())
                _champion_key = query.value(0).toInt() + 1;
            else
                return;
            query.prepare("insert into ChampionInfo values(:champion_key, :info_attack, :info_defense, :info_difficulty, :info_magic)");
            query.bindValue(":champion_key", _champion_key);
            query.bindValue(":info_attack",info_attack);
            query.bindValue(":info_defense",info_defense);
            query.bindValue(":info_difficulty",info_difficulty);
            query.bindValue(":info_magic",info_magic);

            qDebug() << query.exec();
    }
}


void Summoner::championhandler(const int champion_key ,const QString & blurb ,const QString & image ,const QString & name ,const QString & title ,const bool remove){
        QSqlQuery query;
        if(remove){
            query.prepare("delete from Champion where champion_key= :champion_key");
            query.bindValue(":champion_key", champion_key);
            qDebug() << query.exec();
            return;
        }
        if(champion_key != -1){
            qDebug() << "update image " << image;
            query.prepare("update Champion set blurb = :blurb, image = :image,name = :name,title = :title where champion_key = :champion_key");
            query.bindValue(":champion_key",champion_key);
            query.bindValue(":blurb",blurb);
            query.bindValue(":image",image);
            query.bindValue(":name",name);
            query.bindValue(":title",title);

            qDebug() << query.exec();

        }else if(champion_key == -1){
            int _champion_key;
            query.prepare("select max(champion_key) from Champion;");
            qDebug() << query.exec();
            if(query.next())
                _champion_key = query.value(0).toInt() + 1;
            else
                return;
            qDebug() << "allocated key " << _champion_key;
            qDebug() << "new image locaiton " << image;
            query.prepare("insert into Champion values( :blurb, :image, :champion_key, :name, :title)");
            query.bindValue(":champion_key",_champion_key);
            query.bindValue(":blurb",blurb);
            query.bindValue(":image",image);
            query.bindValue(":name",name);
            query.bindValue(":title",title);
            qDebug() << query.exec();
    }
}

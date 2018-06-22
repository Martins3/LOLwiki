#include <QDebug>
#include <QSqlQuery>
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


Summoner::Summoner():userId(0)
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
        QString image = QString::fromStdString(std::string("spell/")) + query.value(4).toString();
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
        QString image = QString::fromStdString(std::string("item/")) + query.value(1).toString();
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
        QString id = query.value(1).toString();
        QString image = "champion/" + query.value(2).toString();
        int champion_key = query.value(3).toInt();
        QString name = query.value(4).toString();
        QString title = query.value(5).toString();
        dataList.append(new Champion(blurb, id, image, champion_key, name, title));
    }
    return QVariant::fromValue(dataList);
}


QVariant Summoner::getChampionTagListModel()
{
    return QVariant::fromValue(dataList3);
}

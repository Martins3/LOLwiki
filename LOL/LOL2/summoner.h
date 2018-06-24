#ifndef SUMMONER_H
#define SUMMONER_H

#include <QObject>
#include <QString>
#include <QSqlQuery>
#include <QVariantList>
#include <iostream>
#include <string>
#include <QVariant>
#include "matchlist.h"

class Summoner : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant listModel READ getListModel NOTIFY listModelChanged);
    Q_PROPERTY(QVariant baseRuneListModel READ getBaseRuneListModel NOTIFY baseRuneListModelChanged);
    Q_PROPERTY(QVariant itemListModel READ getItemListModel NOTIFY itemListModelChanged);
    Q_PROPERTY(QVariant itemTagModel READ getItemTagModel NOTIFY itemTagModelChanged);

    Q_PROPERTY(QVariant championModel READ getChampionListModel NOTIFY onChampionListModelChanged);
    Q_PROPERTY(QVariant championTagModel READ getChampionTagListModel NOTIFY onChampionTagListModelChanged);

    Q_PROPERTY(QVariant matchListModel READ getMatchListModel NOTIFY onMatchListModelChanged);

//    Q_PROPERTY(QVariant matchData READ getMatchData NOTIFY onMatchDataChanged);


public:
    Summoner();
    QVariant getListModel();
    QVariant getItemListModel();
    QVariant getBaseRuneListModel();
    QVariant getItemTagModel();
    QVariant getChampionListModel();
    QVariant getChampionTagListModel();
    QVariantList getMatchListModel();

signals:
//    void onMatchDataChanged();
    void itemTagModelChanged();
    void listModelChanged();
    void itemListModelChanged();
    void baseRuneListModelChanged();
    void onChampionListModelChanged();
    void onChampionTagListModelChanged();
    void onMatchListModelChanged();


public slots:
    void summonerSpellhandler(const int key, const QString &new_id, const int cooldown,
                                    const QString & description, const QString & image, const bool remove);
    QVariant getRune(const int parent_id);
    void itemHandler(const int item_key, const QString &image, const QString & name,
                     const QString & plaintext, bool remove);
    void itemSelect(const QString & tag, bool add);
    void championSelect(const QString & tag, bool add);
    void userLogin(const QString & name, const QString & password, const bool isLogin);

    QVariant getMatchData(int match_id);
    QVariant getChampionStat(int champion_key);
    QVariant getChampionInfo(int champion_key);

    void championStathandler(const int champion_key, const double armor, const double armorperlevel, const double attackdamage, const double attackdamageperlevel, const int attackrange, const double attackspeedoffset, const double attackspeedperlevel, const double crit, const double critperlevel, const int hp, const int hpperlevel, const double hpregen, const double hpregenperlevel, const int movespeed, const int mp, const int mpperlevel, const int mpregen, const int mpregenperlevel, const double spellblock, const double spellblockperlevel, const bool remove);
    void championInfohandler(const int champion_key, const int info_attack, const int info_defense, const int info_difficulty, const int info_magic, const bool remove);
    void championhandler(const int champion_key, const QString &blurb, const QString &image, const QString &name, const QString &title, const bool remove);
private:
    QList<QObject*> dataList;

    QList<QObject*> dataList2;
    QList<QObject*> dataList3;

    QList<QString> itemTag;
    QList<QString> championTag;

    static int userId;

    QString getChampion(int championId, bool isName);
    MatchList *getNext(QSqlQuery &query, bool isTitle);
};

#endif // SUMMONER_H

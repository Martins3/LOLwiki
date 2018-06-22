#ifndef SUMMONER_H
#define SUMMONER_H

#include <QObject>
#include <QString>
#include <QVariant>

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

    Q_PROPERTY(QVariant matchData READ getMatchData NOTIFY onMatchDataChanged);


public:
    Summoner();
    QVariant getListModel();
    QVariant getItemListModel();
    QVariant getBaseRuneListModel();
    QVariant getItemTagModel();
    QVariant getChampionListModel();
    QVariant getChampionTagListModel();
    QVariantList getMatchListModel();
    QVariant getMatchData();


signals:
    void onMatchDataChanged();
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
private:
    QList<QObject*> dataList;

    QList<QObject*> dataList2;
    QList<QObject*> dataList3;

    QList<QString> itemTag;
    QList<QString> championTag;

    int userId;

    QString getChampion(int championId);
};

#endif // SUMMONER_H

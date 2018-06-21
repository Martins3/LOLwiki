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


public:
    Summoner();
    QVariant getListModel();
    QVariant getItemListModel();
    QVariant getBaseRuneListModel();
    QVariant getItemTagModel();
    QVariant getChampionListModel();
    QVariant getChampionTagListModel();

signals:
    void itemTagModelChanged();
    void listModelChanged();
    void itemListModelChanged();
    void baseRuneListModelChanged();
    void onChampionListModelChanged();
    void onChampionTagListModelChanged();

public slots:
    void summonerSpellhandler(const int key, const QString &new_id, const int cooldown,
                                    const QString & description, const QString & image, const bool remove);
    QVariant getRune(const int parent_id);
    void itemHandler(const int item_key, const QString &image, const QString & name,
                     const QString & plaintext, bool remove);
    void itemSelect(const QString & tag, bool add);
    void championSelect(const QString & tag, bool add);

private:
    QList<QObject*> dataList;

    QList<QObject*> dataList2;
    QList<QObject*> dataList3;

    QList<QString> itemTag;
    QList<QString> championTag;
};

#endif // SUMMONER_H

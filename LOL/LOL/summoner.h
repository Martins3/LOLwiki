#ifndef SUMMONER_H
#define SUMMONER_H

#include <QObject>
#include <QString>
#include <QVariant>

class Summoner : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant listModel READ getListModel NOTIFY listModelChanged);
    Q_PROPERTY(QVariant itemListModel READ getItemListModel NOTIFY itemListModelChanged);
    Q_PROPERTY(QVariant baseRuneListModel READ getBaseRuneListModel NOTIFY baseRuneListModelChanged);

public:
    QVariant getListModel();
    QVariant getItemListModel();
    QVariant getBaseRuneListModel();
signals:
    void listModelChanged();
    void itemListModelChanged();
    void baseRuneListModelChanged();

public slots:
    void handler(const QString & id, const QString & new_id);
    void itemHandler(const QString & id, const QString & new_id);
    // get Rune
    QVariant getRune(const int parent_id);
private:
    QList<QObject*> dataList;
};

#endif // SUMMONER_H

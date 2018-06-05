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

public:
    QVariant getListModel();
    QVariant getItemListModel();
signals:
    void listModelChanged();
    void itemListModelChanged();

public slots:
    void handler(const QString & id, const QString & new_id);
    void itemHandler(const QString & id, const QString & new_id);
private:
    QList<QObject*> dataList;
    QVariant m_listModel;
    QVariant m_ItemListModel;
};

#endif // SUMMONER_H

#ifndef SUMMONER_H
#define SUMMONER_H

#include <QObject>
#include <QString>
#include <QVariant>

/**
 * @brief The Summoner class
 * what we need to implement:
 * 	1. load the data from database to the page
 * 		1. can we avoid loading data every time step in
 * 	2. insert data to the frame ! => new window [ok]
 *
 * data : the whole json or ?
 *
 * handle one : set the class variable
 * handle all : use a for loop keep emiting signal to the mainframe !
 */

class Summoner : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ getID WRITE setID NOTIFY idChanged);
    Q_PROPERTY(int cooldown READ getCooldown NOTIFY cooldownChanged);
    Q_PROPERTY(QString description READ getDescription NOTIFY descriptionChanged);
    Q_PROPERTY(QString image READ getImage NOTIFY imageChanged);
    Q_PROPERTY(QVariant listModel READ getListModel NOTIFY listModelChanged);

public:
    Summoner();
    QString getID();
    int getCooldown();
    QString getDescription();
    QString getImage();
    QVariant getListModel();

    void setID(const QString &userName);
signals:
    void idChanged();
    void cooldownChanged();
    void descriptionChanged();
    void imageChanged();
    void listModelChanged();
public slots:
    void handler(const QString & id, const QString & new_id);
    void flushDb(const QVariant & listModel);
private:
    QString m_id;
    int m_cooldown;
    QString m_description;
    QString m_image;
    QList<QObject*> dataList;
    QVariant m_listModel;
};

#endif // SUMMONER_H

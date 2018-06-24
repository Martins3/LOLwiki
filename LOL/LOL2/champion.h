#ifndef CHAMPION_H
#define CHAMPION_H

#include <QObject>
class Champion: public QObject
{
public:
    Q_OBJECT

    Q_PROPERTY(QString blurb READ getBlurb NOTIFY blurbChanged)
    Q_PROPERTY(QString id READ getId NOTIFY idChanged)
    Q_PROPERTY(QString image READ getImage NOTIFY imageChanged)
    Q_PROPERTY(int champion_key READ getChampion_key NOTIFY champion_keyChanged)
    Q_PROPERTY(QString name READ getName NOTIFY nameChanged)
    Q_PROPERTY(QString title READ getTitle NOTIFY titleChanged)
private:

    QString blurb;
    QString id;
    QString image;
    int champion_key;
    QString name;
    QString title;
public:

    Champion (QString blurb, QString image, int champion_key, QString name, QString title);
    QString getBlurb();
    QString getId();
    QString getImage();
    int getChampion_key();
    QString getName();
    QString getTitle();
signals:

    void blurbChanged();
    void idChanged();
    void imageChanged();
    void champion_keyChanged();
    void nameChanged();
    void titleChanged();

};
#endif

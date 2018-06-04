#ifndef SUMMONERDATA_H
#define SUMMONERDATA_H
#include <QObject>

class SummonerData: public QObject
{
public:
    SummonerData();
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString image READ getImage NOTIFY imageChanged)
    Q_PROPERTY(QString description READ getDescription NOTIFY descriptionChanged)
    Q_PROPERTY(QString cooldown READ getCooldown NOTIFY cooldownChanged)

private:
    QString name;
    QString image;
    QString description;
    int cooldown;

public:
    SummonerData(QString name, QString image, QString description, int cooldown);
    QString getName();
    QString getImage();
    QString getDescription();
    QString getCooldown();
    void setName(const QString & name);


signals:
    void nameChanged();
    void imageChanged();
    void descriptionChanged();
    void cooldownChanged();

};

#endif // SUMMONERDATA_H
#ifndef CHAMPIONTAG_H
#define CHAMPIONTAG_H
#include <QObject>
class ChampionTag: public QObject
{
public:
    Q_OBJECT

    Q_PROPERTY(int champion_key READ getChampion_key NOTIFY champion_keyChanged)
    Q_PROPERTY(QString tag READ getTag NOTIFY tagChanged)
private:

    int champion_key;
    QString tag;
public:

    ChampionTag (int champion_key, QString tag);
    int getChampion_key();
    QString getTag();
signals:

    void champion_keyChanged();
    void tagChanged();

};
#endif // CHAMPIONTAG_H

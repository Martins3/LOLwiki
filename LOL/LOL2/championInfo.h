#ifndef CHAMPIONSTAT_H
#define CHAMPIONSTAT_H

#include <QObject>
class ChampionInfo: public QObject
{
public:
    Q_OBJECT

    Q_PROPERTY(int champion_key READ getChampion_key NOTIFY champion_keyChanged)
    Q_PROPERTY(int info_attack READ getInfo_attack NOTIFY info_attackChanged)
    Q_PROPERTY(int info_defense READ getInfo_defense NOTIFY info_defenseChanged)
    Q_PROPERTY(int info_difficulty READ getInfo_difficulty NOTIFY info_difficultyChanged)
    Q_PROPERTY(int info_magic READ getInfo_magic NOTIFY info_magicChanged)
private:

    int champion_key;
    int info_attack;
    int info_defense;
    int info_difficulty;
    int info_magic;
public:

    ChampionInfo (int champion_key, int info_attack, int info_defense, int info_difficulty, int info_magic);
    int getChampion_key();
    int getInfo_attack();
    int getInfo_defense();
    int getInfo_difficulty();
    int getInfo_magic();
signals:

    void champion_keyChanged();
    void info_attackChanged();
    void info_defenseChanged();
    void info_difficultyChanged();
    void info_magicChanged();

};
#endif

#ifndef CHAMPIONINFO_H
#define CHAMPIONINFO_H

#include <QObject>
class ChampionStat: public QObject
{
public:
    Q_OBJECT

    Q_PROPERTY(int champion_key READ getChampion_key NOTIFY champion_keyChanged)
    Q_PROPERTY(double armor READ getArmor NOTIFY armorChanged)
    Q_PROPERTY(double armorperlevel READ getArmorperlevel NOTIFY armorperlevelChanged)
    Q_PROPERTY(double attackdamage READ getAttackdamage NOTIFY attackdamageChanged)
    Q_PROPERTY(double attackdamageperlevel READ getAttackdamageperlevel NOTIFY attackdamageperlevelChanged)
    Q_PROPERTY(int attackrange READ getAttackrange NOTIFY attackrangeChanged)
    Q_PROPERTY(double attackspeedoffset READ getAttackspeedoffset NOTIFY attackspeedoffsetChanged)
    Q_PROPERTY(double attackspeedperlevel READ getAttackspeedperlevel NOTIFY attackspeedperlevelChanged)
    Q_PROPERTY(double crit READ getCrit NOTIFY critChanged)
    Q_PROPERTY(double critperlevel READ getCritperlevel NOTIFY critperlevelChanged)
    Q_PROPERTY(int hp READ getHp NOTIFY hpChanged)
    Q_PROPERTY(int hpperlevel READ getHpperlevel NOTIFY hpperlevelChanged)
    Q_PROPERTY(double hpregen READ getHpregen NOTIFY hpregenChanged)
    Q_PROPERTY(double hpregenperlevel READ getHpregenperlevel NOTIFY hpregenperlevelChanged)
    Q_PROPERTY(int movespeed READ getMovespeed NOTIFY movespeedChanged)
    Q_PROPERTY(int mp READ getMp NOTIFY mpChanged)
    Q_PROPERTY(int mpperlevel READ getMpperlevel NOTIFY mpperlevelChanged)
    Q_PROPERTY(int mpregen READ getMpregen NOTIFY mpregenChanged)
    Q_PROPERTY(int mpregenperlevel READ getMpregenperlevel NOTIFY mpregenperlevelChanged)
    Q_PROPERTY(double spellblock READ getSpellblock NOTIFY spellblockChanged)
    Q_PROPERTY(double spellblockperlevel READ getSpellblockperlevel NOTIFY spellblockperlevelChanged)
private:

    int champion_key;
    double armor;
    double armorperlevel;
    double attackdamage;
    double attackdamageperlevel;
    int attackrange;
    double attackspeedoffset;
    double attackspeedperlevel;
    double crit;
    double critperlevel;
    int hp;
    int hpperlevel;
    double hpregen;
    double hpregenperlevel;
    int movespeed;
    int mp;
    int mpperlevel;
    int mpregen;
    int mpregenperlevel;
    double spellblock;
    double spellblockperlevel;
public:

    ChampionStat (int champion_key, double armor, double armorperlevel, double attackdamage, double attackdamageperlevel, int attackrange, double attackspeedoffset, double attackspeedperlevel, double crit, double critperlevel, int hp, int hpperlevel, double hpregen, double hpregenperlevel, int movespeed, int mp, int mpperlevel, int mpregen, int mpregenperlevel, double spellblock, double spellblockperlevel);
    int getChampion_key();
    double getArmor();
    double getArmorperlevel();
    double getAttackdamage();
    double getAttackdamageperlevel();
    int getAttackrange();
    double getAttackspeedoffset();
    double getAttackspeedperlevel();
    double getCrit();
    double getCritperlevel();
    int getHp();
    int getHpperlevel();
    double getHpregen();
    double getHpregenperlevel();
    int getMovespeed();
    int getMp();
    int getMpperlevel();
    int getMpregen();
    int getMpregenperlevel();
    double getSpellblock();
    double getSpellblockperlevel();
signals:

    void champion_keyChanged();
    void armorChanged();
    void armorperlevelChanged();
    void attackdamageChanged();
    void attackdamageperlevelChanged();
    void attackrangeChanged();
    void attackspeedoffsetChanged();
    void attackspeedperlevelChanged();
    void critChanged();
    void critperlevelChanged();
    void hpChanged();
    void hpperlevelChanged();
    void hpregenChanged();
    void hpregenperlevelChanged();
    void movespeedChanged();
    void mpChanged();
    void mpperlevelChanged();
    void mpregenChanged();
    void mpregenperlevelChanged();
    void spellblockChanged();
    void spellblockperlevelChanged();

};
#endif

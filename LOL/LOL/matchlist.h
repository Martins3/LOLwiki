#ifndef MATCHLIST_H
#define MATCHLIST_H

#include <QObject>
class MatchList: public QObject
{
public:
    Q_OBJECT

    Q_PROPERTY(int match_id READ getMatch_id NOTIFY match_idChanged)
    Q_PROPERTY(bool red_win READ getRed_win NOTIFY red_winChanged)
    Q_PROPERTY(int summoner_id_0 READ getSummoner_id_0 NOTIFY summoner_id_0Changed)
    Q_PROPERTY(QString champion_key_0 READ getChampion_key_0 NOTIFY champion_key_0Changed)
    Q_PROPERTY(int damage_0 READ getDamage_0 NOTIFY damage_0Changed)
    Q_PROPERTY(int received_damage_0 READ getReceived_damage_0 NOTIFY received_damage_0Changed)
    Q_PROPERTY(int kill_num_0 READ getKill_num_0 NOTIFY kill_num_0Changed)
    Q_PROPERTY(int death_num_0 READ getDeath_num_0 NOTIFY death_num_0Changed)
    Q_PROPERTY(int assit_num_0 READ getAssit_num_0 NOTIFY assit_num_0Changed)
    Q_PROPERTY(int summoner_id_1 READ getSummoner_id_1 NOTIFY summoner_id_1Changed)
    Q_PROPERTY(QString champion_key_1 READ getChampion_key_1 NOTIFY champion_key_1Changed)
    Q_PROPERTY(int damage_1 READ getDamage_1 NOTIFY damage_1Changed)
    Q_PROPERTY(int received_damage_1 READ getReceived_damage_1 NOTIFY received_damage_1Changed)
    Q_PROPERTY(int kill_num_1 READ getKill_num_1 NOTIFY kill_num_1Changed)
    Q_PROPERTY(int death_num_1 READ getDeath_num_1 NOTIFY death_num_1Changed)
    Q_PROPERTY(int assit_num_1 READ getAssit_num_1 NOTIFY assit_num_1Changed)
    Q_PROPERTY(int summoner_id_2 READ getSummoner_id_2 NOTIFY summoner_id_2Changed)
    Q_PROPERTY(QString champion_key_2 READ getChampion_key_2 NOTIFY champion_key_2Changed)
    Q_PROPERTY(int damage_2 READ getDamage_2 NOTIFY damage_2Changed)
    Q_PROPERTY(int received_damage_2 READ getReceived_damage_2 NOTIFY received_damage_2Changed)
    Q_PROPERTY(int kill_num_2 READ getKill_num_2 NOTIFY kill_num_2Changed)
    Q_PROPERTY(int death_num_2 READ getDeath_num_2 NOTIFY death_num_2Changed)
    Q_PROPERTY(int assit_num_2 READ getAssit_num_2 NOTIFY assit_num_2Changed)
    Q_PROPERTY(int summoner_id_3 READ getSummoner_id_3 NOTIFY summoner_id_3Changed)
    Q_PROPERTY(QString champion_key_3 READ getChampion_key_3 NOTIFY champion_key_3Changed)
    Q_PROPERTY(int damage_3 READ getDamage_3 NOTIFY damage_3Changed)
    Q_PROPERTY(int received_damage_3 READ getReceived_damage_3 NOTIFY received_damage_3Changed)
    Q_PROPERTY(int kill_num_3 READ getKill_num_3 NOTIFY kill_num_3Changed)
    Q_PROPERTY(int death_num_3 READ getDeath_num_3 NOTIFY death_num_3Changed)
    Q_PROPERTY(int assit_num_3 READ getAssit_num_3 NOTIFY assit_num_3Changed)
    Q_PROPERTY(int summoner_id_4 READ getSummoner_id_4 NOTIFY summoner_id_4Changed)
    Q_PROPERTY(QString champion_key_4 READ getChampion_key_4 NOTIFY champion_key_4Changed)
    Q_PROPERTY(int damage_4 READ getDamage_4 NOTIFY damage_4Changed)
    Q_PROPERTY(int received_damage_4 READ getReceived_damage_4 NOTIFY received_damage_4Changed)
    Q_PROPERTY(int kill_num_4 READ getKill_num_4 NOTIFY kill_num_4Changed)
    Q_PROPERTY(int death_num_4 READ getDeath_num_4 NOTIFY death_num_4Changed)
    Q_PROPERTY(int assit_num_4 READ getAssit_num_4 NOTIFY assit_num_4Changed)
    Q_PROPERTY(int summoner_id_5 READ getSummoner_id_5 NOTIFY summoner_id_5Changed)
    Q_PROPERTY(QString champion_key_5 READ getChampion_key_5 NOTIFY champion_key_5Changed)
    Q_PROPERTY(int damage_5 READ getDamage_5 NOTIFY damage_5Changed)
    Q_PROPERTY(int received_damage_5 READ getReceived_damage_5 NOTIFY received_damage_5Changed)
    Q_PROPERTY(int kill_num_5 READ getKill_num_5 NOTIFY kill_num_5Changed)
    Q_PROPERTY(int death_num_5 READ getDeath_num_5 NOTIFY death_num_5Changed)
    Q_PROPERTY(int assit_num_5 READ getAssit_num_5 NOTIFY assit_num_5Changed)
    Q_PROPERTY(int summoner_id_6 READ getSummoner_id_6 NOTIFY summoner_id_6Changed)
    Q_PROPERTY(QString champion_key_6 READ getChampion_key_6 NOTIFY champion_key_6Changed)
    Q_PROPERTY(int damage_6 READ getDamage_6 NOTIFY damage_6Changed)
    Q_PROPERTY(int received_damage_6 READ getReceived_damage_6 NOTIFY received_damage_6Changed)
    Q_PROPERTY(int kill_num_6 READ getKill_num_6 NOTIFY kill_num_6Changed)
    Q_PROPERTY(int death_num_6 READ getDeath_num_6 NOTIFY death_num_6Changed)
    Q_PROPERTY(int assit_num_6 READ getAssit_num_6 NOTIFY assit_num_6Changed)
    Q_PROPERTY(int summoner_id_7 READ getSummoner_id_7 NOTIFY summoner_id_7Changed)
    Q_PROPERTY(QString champion_key_7 READ getChampion_key_7 NOTIFY champion_key_7Changed)
    Q_PROPERTY(int damage_7 READ getDamage_7 NOTIFY damage_7Changed)
    Q_PROPERTY(int received_damage_7 READ getReceived_damage_7 NOTIFY received_damage_7Changed)
    Q_PROPERTY(int kill_num_7 READ getKill_num_7 NOTIFY kill_num_7Changed)
    Q_PROPERTY(int death_num_7 READ getDeath_num_7 NOTIFY death_num_7Changed)
    Q_PROPERTY(int assit_num_7 READ getAssit_num_7 NOTIFY assit_num_7Changed)
    Q_PROPERTY(int summoner_id_8 READ getSummoner_id_8 NOTIFY summoner_id_8Changed)
    Q_PROPERTY(QString champion_key_8 READ getChampion_key_8 NOTIFY champion_key_8Changed)
    Q_PROPERTY(int damage_8 READ getDamage_8 NOTIFY damage_8Changed)
    Q_PROPERTY(int received_damage_8 READ getReceived_damage_8 NOTIFY received_damage_8Changed)
    Q_PROPERTY(int kill_num_8 READ getKill_num_8 NOTIFY kill_num_8Changed)
    Q_PROPERTY(int death_num_8 READ getDeath_num_8 NOTIFY death_num_8Changed)
    Q_PROPERTY(int assit_num_8 READ getAssit_num_8 NOTIFY assit_num_8Changed)
    Q_PROPERTY(int summoner_id_9 READ getSummoner_id_9 NOTIFY summoner_id_9Changed)
    Q_PROPERTY(QString champion_key_9 READ getChampion_key_9 NOTIFY champion_key_9Changed)
    Q_PROPERTY(int damage_9 READ getDamage_9 NOTIFY damage_9Changed)
    Q_PROPERTY(int received_damage_9 READ getReceived_damage_9 NOTIFY received_damage_9Changed)
    Q_PROPERTY(int kill_num_9 READ getKill_num_9 NOTIFY kill_num_9Changed)
    Q_PROPERTY(int death_num_9 READ getDeath_num_9 NOTIFY death_num_9Changed)
    Q_PROPERTY(int assit_num_9 READ getAssit_num_9 NOTIFY assit_num_9Changed)
private:

    int match_id;
    bool red_win;
    int summoner_id_0;
    QString champion_key_0;
    int damage_0;
    int received_damage_0;
    int kill_num_0;
    int death_num_0;
    int assit_num_0;
    int summoner_id_1;
    QString champion_key_1;
    int damage_1;
    int received_damage_1;
    int kill_num_1;
    int death_num_1;
    int assit_num_1;
    int summoner_id_2;
    QString champion_key_2;
    int damage_2;
    int received_damage_2;
    int kill_num_2;
    int death_num_2;
    int assit_num_2;
    int summoner_id_3;
    QString champion_key_3;
    int damage_3;
    int received_damage_3;
    int kill_num_3;
    int death_num_3;
    int assit_num_3;
    int summoner_id_4;
    QString champion_key_4;
    int damage_4;
    int received_damage_4;
    int kill_num_4;
    int death_num_4;
    int assit_num_4;
    int summoner_id_5;
    QString champion_key_5;
    int damage_5;
    int received_damage_5;
    int kill_num_5;
    int death_num_5;
    int assit_num_5;
    int summoner_id_6;
    QString champion_key_6;
    int damage_6;
    int received_damage_6;
    int kill_num_6;
    int death_num_6;
    int assit_num_6;
    int summoner_id_7;
    QString champion_key_7;
    int damage_7;
    int received_damage_7;
    int kill_num_7;
    int death_num_7;
    int assit_num_7;
    int summoner_id_8;
    QString champion_key_8;
    int damage_8;
    int received_damage_8;
    int kill_num_8;
    int death_num_8;
    int assit_num_8;
    int summoner_id_9;
    QString champion_key_9;
    int damage_9;
    int received_damage_9;
    int kill_num_9;
    int death_num_9;
    int assit_num_9;
public:

    MatchList (int match_id, bool red_win, int summoner_id_0, QString champion_key_0, int damage_0, int received_damage_0, int kill_num_0, int death_num_0, int assit_num_0, int summoner_id_1, QString champion_key_1, int damage_1, int received_damage_1, int kill_num_1, int death_num_1, int assit_num_1, int summoner_id_2, QString champion_key_2, int damage_2, int received_damage_2, int kill_num_2, int death_num_2, int assit_num_2, int summoner_id_3, QString champion_key_3, int damage_3, int received_damage_3, int kill_num_3, int death_num_3, int assit_num_3, int summoner_id_4, QString champion_key_4, int damage_4, int received_damage_4, int kill_num_4, int death_num_4, int assit_num_4, int summoner_id_5, QString champion_key_5, int damage_5, int received_damage_5, int kill_num_5, int death_num_5, int assit_num_5, int summoner_id_6, QString champion_key_6, int damage_6, int received_damage_6, int kill_num_6, int death_num_6, int assit_num_6, int summoner_id_7, QString champion_key_7, int damage_7, int received_damage_7, int kill_num_7, int death_num_7, int assit_num_7, int summoner_id_8, QString champion_key_8, int damage_8, int received_damage_8, int kill_num_8, int death_num_8, int assit_num_8, int summoner_id_9, QString champion_key_9, int damage_9, int received_damage_9, int kill_num_9, int death_num_9, int assit_num_9);
    int getMatch_id();
    bool getRed_win();
    int getSummoner_id_0();
    QString getChampion_key_0();
    int getDamage_0();
    int getReceived_damage_0();
    int getKill_num_0();
    int getDeath_num_0();
    int getAssit_num_0();
    int getSummoner_id_1();
    QString getChampion_key_1();
    int getDamage_1();
    int getReceived_damage_1();
    int getKill_num_1();
    int getDeath_num_1();
    int getAssit_num_1();
    int getSummoner_id_2();
    QString getChampion_key_2();
    int getDamage_2();
    int getReceived_damage_2();
    int getKill_num_2();
    int getDeath_num_2();
    int getAssit_num_2();
    int getSummoner_id_3();
    QString getChampion_key_3();
    int getDamage_3();
    int getReceived_damage_3();
    int getKill_num_3();
    int getDeath_num_3();
    int getAssit_num_3();
    int getSummoner_id_4();
    QString getChampion_key_4();
    int getDamage_4();
    int getReceived_damage_4();
    int getKill_num_4();
    int getDeath_num_4();
    int getAssit_num_4();
    int getSummoner_id_5();
    QString getChampion_key_5();
    int getDamage_5();
    int getReceived_damage_5();
    int getKill_num_5();
    int getDeath_num_5();
    int getAssit_num_5();
    int getSummoner_id_6();
    QString getChampion_key_6();
    int getDamage_6();
    int getReceived_damage_6();
    int getKill_num_6();
    int getDeath_num_6();
    int getAssit_num_6();
    int getSummoner_id_7();
    QString getChampion_key_7();
    int getDamage_7();
    int getReceived_damage_7();
    int getKill_num_7();
    int getDeath_num_7();
    int getAssit_num_7();
    int getSummoner_id_8();
    QString getChampion_key_8();
    int getDamage_8();
    int getReceived_damage_8();
    int getKill_num_8();
    int getDeath_num_8();
    int getAssit_num_8();
    int getSummoner_id_9();
    QString getChampion_key_9();
    int getDamage_9();
    int getReceived_damage_9();
    int getKill_num_9();
    int getDeath_num_9();
    int getAssit_num_9();
signals:

    void match_idChanged();
    void red_winChanged();
    void summoner_id_0Changed();
    void champion_key_0Changed();
    void damage_0Changed();
    void received_damage_0Changed();
    void kill_num_0Changed();
    void death_num_0Changed();
    void assit_num_0Changed();
    void summoner_id_1Changed();
    void champion_key_1Changed();
    void damage_1Changed();
    void received_damage_1Changed();
    void kill_num_1Changed();
    void death_num_1Changed();
    void assit_num_1Changed();
    void summoner_id_2Changed();
    void champion_key_2Changed();
    void damage_2Changed();
    void received_damage_2Changed();
    void kill_num_2Changed();
    void death_num_2Changed();
    void assit_num_2Changed();
    void summoner_id_3Changed();
    void champion_key_3Changed();
    void damage_3Changed();
    void received_damage_3Changed();
    void kill_num_3Changed();
    void death_num_3Changed();
    void assit_num_3Changed();
    void summoner_id_4Changed();
    void champion_key_4Changed();
    void damage_4Changed();
    void received_damage_4Changed();
    void kill_num_4Changed();
    void death_num_4Changed();
    void assit_num_4Changed();
    void summoner_id_5Changed();
    void champion_key_5Changed();
    void damage_5Changed();
    void received_damage_5Changed();
    void kill_num_5Changed();
    void death_num_5Changed();
    void assit_num_5Changed();
    void summoner_id_6Changed();
    void champion_key_6Changed();
    void damage_6Changed();
    void received_damage_6Changed();
    void kill_num_6Changed();
    void death_num_6Changed();
    void assit_num_6Changed();
    void summoner_id_7Changed();
    void champion_key_7Changed();
    void damage_7Changed();
    void received_damage_7Changed();
    void kill_num_7Changed();
    void death_num_7Changed();
    void assit_num_7Changed();
    void summoner_id_8Changed();
    void champion_key_8Changed();
    void damage_8Changed();
    void received_damage_8Changed();
    void kill_num_8Changed();
    void death_num_8Changed();
    void assit_num_8Changed();
    void summoner_id_9Changed();
    void champion_key_9Changed();
    void damage_9Changed();
    void received_damage_9Changed();
    void kill_num_9Changed();
    void death_num_9Changed();
    void assit_num_9Changed();
};
#endif

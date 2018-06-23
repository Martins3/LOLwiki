#include "matchlist.h"
#include <QDebug>
int MatchList::getMatch_id()
{
return match_id;
}
bool MatchList::getRed_win()
{
return red_win;
}
int MatchList::getSummoner_id_0()
{
return summoner_id_0;
}
QString MatchList::getChampion_key_0()
{
return champion_key_0;
}
int MatchList::getDamage_0()
{
return damage_0;
}
int MatchList::getReceived_damage_0()
{
return received_damage_0;
}
int MatchList::getKill_num_0()
{
return kill_num_0;
}
int MatchList::getDeath_num_0()
{
return death_num_0;
}
int MatchList::getAssit_num_0()
{
return assit_num_0;
}
int MatchList::getSummoner_id_1()
{
return summoner_id_1;
}
QString MatchList::getChampion_key_1()
{
return champion_key_1;
}
int MatchList::getDamage_1()
{
return damage_1;
}
int MatchList::getReceived_damage_1()
{
return received_damage_1;
}
int MatchList::getKill_num_1()
{
return kill_num_1;
}
int MatchList::getDeath_num_1()
{
return death_num_1;
}
int MatchList::getAssit_num_1()
{
return assit_num_1;
}
int MatchList::getSummoner_id_2()
{
return summoner_id_2;
}
QString MatchList::getChampion_key_2()
{
return champion_key_2;
}
int MatchList::getDamage_2()
{
return damage_2;
}
int MatchList::getReceived_damage_2()
{
return received_damage_2;
}
int MatchList::getKill_num_2()
{
return kill_num_2;
}
int MatchList::getDeath_num_2()
{
return death_num_2;
}
int MatchList::getAssit_num_2()
{
return assit_num_2;
}
int MatchList::getSummoner_id_3()
{
return summoner_id_3;
}
QString MatchList::getChampion_key_3()
{
return champion_key_3;
}
int MatchList::getDamage_3()
{
return damage_3;
}
int MatchList::getReceived_damage_3()
{
return received_damage_3;
}
int MatchList::getKill_num_3()
{
return kill_num_3;
}
int MatchList::getDeath_num_3()
{
return death_num_3;
}
int MatchList::getAssit_num_3()
{
return assit_num_3;
}
int MatchList::getSummoner_id_4()
{
return summoner_id_4;
}
QString MatchList::getChampion_key_4()
{
return champion_key_4;
}
int MatchList::getDamage_4()
{
return damage_4;
}
int MatchList::getReceived_damage_4()
{
return received_damage_4;
}
int MatchList::getKill_num_4()
{
return kill_num_4;
}
int MatchList::getDeath_num_4()
{
return death_num_4;
}
int MatchList::getAssit_num_4()
{
return assit_num_4;
}
int MatchList::getSummoner_id_5()
{
return summoner_id_5;
}
QString MatchList::getChampion_key_5()
{
return champion_key_5;
}
int MatchList::getDamage_5()
{
return damage_5;
}
int MatchList::getReceived_damage_5()
{
return received_damage_5;
}
int MatchList::getKill_num_5()
{
return kill_num_5;
}
int MatchList::getDeath_num_5()
{
return death_num_5;
}
int MatchList::getAssit_num_5()
{
return assit_num_5;
}
int MatchList::getSummoner_id_6()
{
return summoner_id_6;
}
QString MatchList::getChampion_key_6()
{
return champion_key_6;
}
int MatchList::getDamage_6()
{
return damage_6;
}
int MatchList::getReceived_damage_6()
{
return received_damage_6;
}
int MatchList::getKill_num_6()
{
return kill_num_6;
}
int MatchList::getDeath_num_6()
{
return death_num_6;
}
int MatchList::getAssit_num_6()
{
return assit_num_6;
}
int MatchList::getSummoner_id_7()
{
return summoner_id_7;
}
QString MatchList::getChampion_key_7()
{
return champion_key_7;
}
int MatchList::getDamage_7()
{
return damage_7;
}
int MatchList::getReceived_damage_7()
{
return received_damage_7;
}
int MatchList::getKill_num_7()
{
return kill_num_7;
}
int MatchList::getDeath_num_7()
{
return death_num_7;
}
int MatchList::getAssit_num_7()
{
return assit_num_7;
}
int MatchList::getSummoner_id_8()
{
return summoner_id_8;
}
QString MatchList::getChampion_key_8()
{
return champion_key_8;
}
int MatchList::getDamage_8()
{
return damage_8;
}
int MatchList::getReceived_damage_8()
{
return received_damage_8;
}
int MatchList::getKill_num_8()
{
return kill_num_8;
}
int MatchList::getDeath_num_8()
{
return death_num_8;
}
int MatchList::getAssit_num_8()
{
return assit_num_8;
}
int MatchList::getSummoner_id_9()
{
return summoner_id_9;
}
QString MatchList::getChampion_key_9()
{
return champion_key_9;
}
int MatchList::getDamage_9()
{
return damage_9;
}
int MatchList::getReceived_damage_9()
{
return received_damage_9;
}
int MatchList::getKill_num_9()
{
return kill_num_9;
}
int MatchList::getDeath_num_9()
{
return death_num_9;
}
int MatchList::getAssit_num_9()
{
    return assit_num_9;
}

int MatchList::rowCount(const QModelIndex &parent) const
{
    qDebug() << "query the row count";
    return 0;
}

QVariant MatchList::data(const QModelIndex &index, int role) const
{
    qDebug() << "query the data";
}

MatchList::MatchList(int match_id, bool red_win, int summoner_id_0, QString champion_key_0, int damage_0, int received_damage_0, int kill_num_0, int death_num_0, int assit_num_0, int summoner_id_1, QString champion_key_1, int damage_1, int received_damage_1, int kill_num_1, int death_num_1, int assit_num_1, int summoner_id_2, QString champion_key_2, int damage_2, int received_damage_2, int kill_num_2, int death_num_2, int assit_num_2, int summoner_id_3, QString champion_key_3, int damage_3, int received_damage_3, int kill_num_3, int death_num_3, int assit_num_3, int summoner_id_4, QString champion_key_4, int damage_4, int received_damage_4, int kill_num_4, int death_num_4, int assit_num_4, int summoner_id_5, QString champion_key_5, int damage_5, int received_damage_5, int kill_num_5, int death_num_5, int assit_num_5, int summoner_id_6, QString champion_key_6, int damage_6, int received_damage_6, int kill_num_6, int death_num_6, int assit_num_6, int summoner_id_7, QString champion_key_7, int damage_7, int received_damage_7, int kill_num_7, int death_num_7, int assit_num_7, int summoner_id_8, QString champion_key_8, int damage_8, int received_damage_8, int kill_num_8, int death_num_8, int assit_num_8, int summoner_id_9, QString champion_key_9, int damage_9, int received_damage_9, int kill_num_9, int death_num_9, int assit_num_9):
match_id(match_id),red_win(red_win),summoner_id_0(summoner_id_0),champion_key_0(champion_key_0),damage_0(damage_0),received_damage_0(received_damage_0),kill_num_0(kill_num_0),death_num_0(death_num_0),assit_num_0(assit_num_0),summoner_id_1(summoner_id_1),champion_key_1(champion_key_1),damage_1(damage_1),received_damage_1(received_damage_1),kill_num_1(kill_num_1),death_num_1(death_num_1),assit_num_1(assit_num_1),summoner_id_2(summoner_id_2),champion_key_2(champion_key_2),damage_2(damage_2),received_damage_2(received_damage_2),kill_num_2(kill_num_2),death_num_2(death_num_2),assit_num_2(assit_num_2),summoner_id_3(summoner_id_3),champion_key_3(champion_key_3),damage_3(damage_3),received_damage_3(received_damage_3),kill_num_3(kill_num_3),death_num_3(death_num_3),assit_num_3(assit_num_3),summoner_id_4(summoner_id_4),champion_key_4(champion_key_4),damage_4(damage_4),received_damage_4(received_damage_4),kill_num_4(kill_num_4),death_num_4(death_num_4),assit_num_4(assit_num_4),summoner_id_5(summoner_id_5),champion_key_5(champion_key_5),damage_5(damage_5),received_damage_5(received_damage_5),kill_num_5(kill_num_5),death_num_5(death_num_5),assit_num_5(assit_num_5),summoner_id_6(summoner_id_6),champion_key_6(champion_key_6),damage_6(damage_6),received_damage_6(received_damage_6),kill_num_6(kill_num_6),death_num_6(death_num_6),assit_num_6(assit_num_6),summoner_id_7(summoner_id_7),champion_key_7(champion_key_7),damage_7(damage_7),received_damage_7(received_damage_7),kill_num_7(kill_num_7),death_num_7(death_num_7),assit_num_7(assit_num_7),summoner_id_8(summoner_id_8),champion_key_8(champion_key_8),damage_8(damage_8),received_damage_8(received_damage_8),kill_num_8(kill_num_8),death_num_8(death_num_8),assit_num_8(assit_num_8),summoner_id_9(summoner_id_9),champion_key_9(champion_key_9),damage_9(damage_9),received_damage_9(received_damage_9),kill_num_9(kill_num_9),death_num_9(death_num_9),assit_num_9(assit_num_9){

}

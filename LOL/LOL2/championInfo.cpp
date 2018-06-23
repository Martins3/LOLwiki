#include "championInfo.h"

int ChampionInfo::getChampion_key()
{
return champion_key;
}
int ChampionInfo::getInfo_attack()
{
return info_attack;
}
int ChampionInfo::getInfo_defense()
{
return info_defense;
}
int ChampionInfo::getInfo_difficulty()
{
return info_difficulty;
}
int ChampionInfo::getInfo_magic()
{
return info_magic;
}
ChampionInfo::ChampionInfo(int champion_key, int info_attack, int info_defense, int info_difficulty, int info_magic):
champion_key(champion_key),info_attack(info_attack),info_defense(info_defense),info_difficulty(info_difficulty),info_magic(info_magic){

}

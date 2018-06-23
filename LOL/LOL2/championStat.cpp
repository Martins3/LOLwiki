#include "championStat.h"

int ChampionStat::getChampion_key()
{
return champion_key;
}
double ChampionStat::getArmor()
{
return armor;
}
double ChampionStat::getArmorperlevel()
{
return armorperlevel;
}
double ChampionStat::getAttackdamage()
{
return attackdamage;
}
double ChampionStat::getAttackdamageperlevel()
{
return attackdamageperlevel;
}
int ChampionStat::getAttackrange()
{
return attackrange;
}
double ChampionStat::getAttackspeedoffset()
{
return attackspeedoffset;
}
double ChampionStat::getAttackspeedperlevel()
{
return attackspeedperlevel;
}
double ChampionStat::getCrit()
{
return crit;
}
double ChampionStat::getCritperlevel()
{
return critperlevel;
}
int ChampionStat::getHp()
{
return hp;
}
int ChampionStat::getHpperlevel()
{
return hpperlevel;
}
double ChampionStat::getHpregen()
{
return hpregen;
}
double ChampionStat::getHpregenperlevel()
{
return hpregenperlevel;
}
int ChampionStat::getMovespeed()
{
return movespeed;
}
int ChampionStat::getMp()
{
return mp;
}
int ChampionStat::getMpperlevel()
{
return mpperlevel;
}
int ChampionStat::getMpregen()
{
return mpregen;
}
int ChampionStat::getMpregenperlevel()
{
return mpregenperlevel;
}
double ChampionStat::getSpellblock()
{
return spellblock;
}
double ChampionStat::getSpellblockperlevel()
{
return spellblockperlevel;
}
ChampionStat::ChampionStat(int champion_key, double armor, double armorperlevel, double attackdamage, double attackdamageperlevel, int attackrange, double attackspeedoffset, double attackspeedperlevel, double crit, double critperlevel, int hp, int hpperlevel, double hpregen, double hpregenperlevel, int movespeed, int mp, int mpperlevel, int mpregen, int mpregenperlevel, double spellblock, double spellblockperlevel):
champion_key(champion_key),armor(armor),armorperlevel(armorperlevel),attackdamage(attackdamage),attackdamageperlevel(attackdamageperlevel),attackrange(attackrange),attackspeedoffset(attackspeedoffset),attackspeedperlevel(attackspeedperlevel),crit(crit),critperlevel(critperlevel),hp(hp),hpperlevel(hpperlevel),hpregen(hpregen),hpregenperlevel(hpregenperlevel),movespeed(movespeed),mp(mp),mpperlevel(mpperlevel),mpregen(mpregen),mpregenperlevel(mpregenperlevel),spellblock(spellblock),spellblockperlevel(spellblockperlevel){

}

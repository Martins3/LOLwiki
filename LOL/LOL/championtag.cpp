#include "championtag.h"


int ChampionTag::getChampion_key()
{
return champion_key;
}
QString ChampionTag::getTag()
{
return tag;
}
ChampionTag::ChampionTag(int champion_key, QString tag):
champion_key(champion_key),tag(tag){

}

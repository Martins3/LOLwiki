#include "summonerSpell.h"
#include <QDebug>


SummonerSpell::SummonerSpell(int spellKey, QString name, QString image, QString description, int cooldown):
    spellKey(spellKey), name(name), image(image), description(description), cooldown(cooldown)
{

}

int SummonerSpell::getSpellKey()
{
    return spellKey;
}

QString SummonerSpell::getName()
{
    return name;
}

QString SummonerSpell::getImage()
{
    return image;
}

QString SummonerSpell::getDescription()
{
    return description;
}

int SummonerSpell::getCooldown()
{
    return cooldown;
}

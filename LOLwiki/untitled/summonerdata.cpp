#include "summonerdata.h"
#include <QDebug>

SummonerData::SummonerData()
{

}

SummonerData::SummonerData(QString name, QString image, QString description, int cooldown):
    name(name), image(image), description(description), cooldown(cooldown)
{

}

QString SummonerData::getName()
{
    return name;
}

QString SummonerData::getImage()
{
    return image;
}

QString SummonerData::getDescription()
{
    return description;
}

QString SummonerData::getCooldown()
{
    return QString::number(cooldown);
}

void SummonerData::setName(const QString &name)
{
   qDebug() << "change the name seems useless !";
   if(this->name == name) return;
}

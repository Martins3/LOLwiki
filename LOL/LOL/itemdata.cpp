#include "itemdata.h"


ItemData::ItemData(QString name, QString image, QString description):
    name(name), image(image), description(description)
{

}

QString ItemData::getName()
{
    return name;
}

QString ItemData::getImage()
{
    return image;
}

QString ItemData::getDescription()
{
    return description;
}

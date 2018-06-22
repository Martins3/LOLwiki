#include "itemdata.h"


ItemData::ItemData(int key, QString image, QString name, QString description):
   key(key), image(image), name(name) , description(description)
{

}

int ItemData::getKey()
{
    return key;
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

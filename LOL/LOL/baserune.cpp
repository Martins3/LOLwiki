#include "baserune.h"


BaseRune::BaseRune(int id, QString name, QString image): id(id), name(name), image(image)
{

}

QString BaseRune::getName()
{
    return name;
}

QString BaseRune::getImage()
{
    return image;
}

int BaseRune::getID()
{
    return id;
}

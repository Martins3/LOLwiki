#include "rune.h"


Rune::Rune(QString name, QString image): name(name), image(image)
{

}

QString Rune::getName()
{
    return name;
}

QString Rune::getImage()
{
    return image;
}

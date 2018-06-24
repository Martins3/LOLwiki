#include "champion.h"
QString Champion::getBlurb()
{
return blurb;
}
QString Champion::getId()
{
return id;
}
QString Champion::getImage()
{
return image;
}
int Champion::getChampion_key()
{
return champion_key;
}
QString Champion::getName()
{
return name;
}
QString Champion::getTitle()
{
return title;
}

Champion::Champion(QString blurb,  QString image, int champion_key, QString name, QString title):
blurb(blurb),image(image),champion_key(champion_key),name(name),title(title){

}

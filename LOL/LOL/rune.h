#ifndef RUNE_H
#define RUNE_H

#include <QObject>
class Rune: public QObject
{
public:
    Q_OBJECT
    Q_PROPERTY(QString name READ getName NOTIFY nameChanged)
    Q_PROPERTY(QString image READ getImage NOTIFY imageChanged)
//    Q_PROPERTY(QString description READ getDescription NOTIFY descriptionChanged)

private:
    QString name;
    QString image;
//    QString description;

public:
//    ItemData(QString name, QString image, QString description);
    Rune(QString name, QString image);
    QString getName();
    QString getImage();
//    QString getDescription();

signals:
    void nameChanged();
    void imageChanged();
//    void descriptionChanged();
};

#endif // RUNE_H

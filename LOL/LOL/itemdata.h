#ifndef ITEMDATA_H
#define ITEMDATA_H
#include <QObject>

class ItemData: public QObject
{
public:
    Q_OBJECT
    Q_PROPERTY(int key READ getKey NOTIFY keyChanged)
    Q_PROPERTY(QString image READ getImage NOTIFY imageChanged)
    Q_PROPERTY(QString name READ getName NOTIFY nameChanged)
    Q_PROPERTY(QString description READ getDescription NOTIFY descriptionChanged)

private:
    int key;
    QString image;
    QString name;
    QString description;

public:
    ItemData(int key, QString image, QString name, QString description);
    int getKey();
    QString getName();
    QString getImage();
    QString getDescription();

signals:
    void keyChanged();
    void nameChanged();
    void imageChanged();
    void descriptionChanged();
};

#endif // ITEMDATA_H

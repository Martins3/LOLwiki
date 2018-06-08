#ifndef BASERUNE_H
#define BASERUNE_H


#include <QObject>
class BaseRune: public QObject
{
public:
    Q_OBJECT
    Q_PROPERTY(QString name READ getName NOTIFY nameChanged)
    Q_PROPERTY(QString image READ getImage NOTIFY imageChanged)
    Q_PROPERTY(int id READ getID NOTIFY idChanged)
//    Q_PROPERTY(QString description READ getDescription NOTIFY descriptionChanged)

private:
    int id;
    QString name;
    QString image;
//    QString description;

public:
//    ItemData(QString name, QString image, QString description);
    BaseRune(int id, QString name, QString image);
    QString getName();
    QString getImage();
    int getID();
//  QString getDescription();

signals:
    void nameChanged();
    void imageChanged();
    void idChanged();
//    void descriptionChanged();
};

#endif // BASERUNE_H

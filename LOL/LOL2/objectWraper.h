#ifndef OBJECTWRAPER_H
#define OBJECTWRAPER_H
#include <QObject>

class ObjectWraper:public QObject
{
public:
    Q_OBJECT
    Q_PROPERTY(QString name READ getName NOTIFY nameChanged)

private:
    QString name;

public:
    ObjectWraper(QString name);
    QString getName();

signals:
    void nameChanged();
};

#endif // OBJECTWRAPER_H

#include "backend.h"
#include <QDebug>
#include <QSqlQuery>

BackEnd::BackEnd(QObject *parent) :
    QObject(parent)
{
}

QString BackEnd::userName()
{
    return m_userName;
}

void BackEnd::setUserName(const QString &userName)
{
    qDebug() << "changed to " << userName;

//    QSqlQuery query("SELECT * FROM Summoner");
//    while (query.next()) {
//        QString country = query.value(1).toString();
//        qDebug() << country;
//    }
    m_userName = userName;
    emit userNameChanged();
}

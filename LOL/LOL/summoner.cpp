#include "summoner.h"

#include <QDebug>
#include <QSqlQuery>
#include <QJsonObject>
#include <iostream>
#include <string>
#include "summonerdata.h"

Summoner::Summoner()
{
    // not a good practice
}

void Summoner::setID(const QString &id)
{
    // useless function
    if(id == m_id)
        return;
    m_id = id;

    QSqlQuery query;
    query.prepare("SELECT * FROM SummonerSpell where id = :id");
    query.bindValue(":id", id);
    query.exec();
    if(query.next()) {
        m_id = query.value(0).toString();
        m_cooldown = query.value(1).toInt();
        m_description = query.value(2).toString();
        m_image = QString("spell/") + query.value(3).toJsonObject().begin().value().toString();
    }else{
       qDebug() << "nothing find in table Summoner" << endl;
    }

}

QString Summoner::getID()
{
   return m_id;
}

int Summoner::getCooldown()
{
   qDebug() << "get_cooldown" << m_cooldown << endl;
   return m_cooldown;
}

QString Summoner::getDescription()
{
   return m_description;
}

QString Summoner::getImage()
{
    return m_image;
}

QVariant Summoner::getListModel()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM SummonerSpell");
    query.exec();
    dataList.clear();
    while(query.next()) {
        QString id = query.value(0).toString();
        QString image = QString::fromStdString(std::string("spell/")) + query.value(3).toString();
        QString des = query.value(2).toString();
        int cooldown = query.value(1).toInt();
        dataList.append(new SummonerData(id, image, des, cooldown));
    }
    return QVariant::fromValue(dataList);
}

// handler can solve everything, it should be complex !
void Summoner::handler(const QString &id, const QString &new_id)
{
    qDebug() << "call the handler to access the database";
    qDebug() << id;
    qDebug() << new_id;

    QSqlQuery query;
    query.prepare("update Summoner set id = :new_id where id = :id");
    query.bindValue(":id", id);
    query.bindValue(":new_id", new_id);
    query.exec();
}

void Summoner::flushDb(const QVariant &listModel)
{
    qDebug() << "not implemented !" << endl;
}

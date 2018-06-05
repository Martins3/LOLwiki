#include <QDebug>
#include <QSqlQuery>
#include <QJsonObject>
#include <iostream>
#include <string>
#include "summoner.h"
#include "summonerdata.h"

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

QVariant Summoner::getItemListModel()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Item");
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

void Summoner::itemHandler(const QString &id, const QString &new_id)
{
    // not implemented yet !
}

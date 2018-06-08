#include <QDebug>
#include <QSqlQuery>
#include <iostream>
#include <string>
#include "summoner.h"
#include "summonerdata.h"
#include "itemdata.h"
#include "baserune.h"
#include "rune.h"

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
        QString id = query.value(2).toString();
        QString image = QString::fromStdString(std::string("item/")) + query.value(1).toString();
        QString des = query.value(3).toString();
        dataList.append(new ItemData(id, image, des));
    }
    return QVariant::fromValue(dataList);
}

QVariant Summoner::getBaseRuneListModel()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM BaseRune");
    query.exec();
    dataList.clear();
    while(query.next()) {
        int id = query.value(0).toInt();
        QString name = query.value(2).toString();
        QString image = query.value(3).toString();
        dataList.append(new BaseRune(id, name, image));
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
    qDebug() << id;
    qDebug() << new_id;
}

QVariant Summoner::getRune(const int parent_id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Rune where parent_id = :id");
    query.bindValue(":id", parent_id);
    query.exec();
    dataList.clear();
    while(query.next()) {
        QString name = query.value(3).toString();
        QString image = query.value(4).toString();
        dataList.append(new Rune(name, image));
    }
    return QVariant::fromValue(dataList);
}

#include <QApplication>
#include <QQmlApplicationEngine>
#include <QSqlDatabase>
#include <QDebug>
#include <QIcon>

#include "backend.h"
#include "summoner.h"
void db();

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    qmlRegisterType<Summoner>("show.summoner", 1, 0, "Summoner");

    db();
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    app.setWindowIcon(QIcon("/home/martin/X-Brain/DbLab/LOL/LOL2/sticker/poro-angry.png"));
    return app.exec();
}

void db(){
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("LOL");
    db.setUserName("root");
    db.setPassword("123456");
    if (!db.open()) {
        qDebug() << "connect to datebase failed";
    }
}

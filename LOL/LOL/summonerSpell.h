#ifndef SUMMONERSPELL_H
#define SUMMONESPELL_H
#include <QObject>

class SummonerSpell: public QObject
{
public:
    Q_OBJECT
    Q_PROPERTY(int spellKey READ getSpellKey NOTIFY spellKeyChanged)
    Q_PROPERTY(QString name READ getName NOTIFY nameChanged)
    Q_PROPERTY(QString image READ getImage NOTIFY imageChanged)
    Q_PROPERTY(QString description READ getDescription NOTIFY descriptionChanged)
    Q_PROPERTY(QString cooldown READ getCooldown NOTIFY cooldownChanged)

private:
    int spellKey;
    QString name;
    QString image;
    QString description;
    int cooldown;
public:
    SummonerSpell(int spellKey, QString name, QString image, QString description, int cooldown);
    int getSpellKey();
    QString getName();
    QString getImage();
    QString getDescription();
    int getCooldown();
signals:
    void spellKeyChanged();
    void nameChanged();
    void imageChanged();
    void descriptionChanged();
    void cooldownChanged();
};

#endif // SUMMONERDATA_H

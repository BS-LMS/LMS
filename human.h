#ifndef HUMAN_H
#define HUMAN_H


#include<QString>

#include"date.h"

class human
{
protected:
    QString name;
    QString family;
    date birth_date;
public:
    human();
    human(QString _name ,QString _family,date _birth_date);
    human(const human &);

    QString getName();
    void setName(QString s);

    QString getFamily();
    void setFamily(QString s);

    date getBirth();
    void setBirth(date s);
};
#endif // HUMAN_H

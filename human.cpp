#include "human.h"

human::human()
{
    name="";
    family="";
}

human::human(QString _name, QString _family,date _birth_date)
{
    name=_name;
    family=_family;
    this->birth_date=_birth_date;
}

human::human(const human & x)
{
    this->name=x.name;
    this->family=x.family;
    this->birth_date=x.birth_date;
}

QString human::getName()
{
    return name;
}


void human::setName(QString s)
{
    this->name=s;
}

QString human::getFamily()
{
    return family;
}

void human::setFamily(QString s)
{
    family=s;
}


date human::getBirth()
{
    return  birth_date;
}

void human::setBirth(date s)
{
    birth_date=s;
}


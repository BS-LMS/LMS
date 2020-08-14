#ifndef WRITER_H
#define WRITER_H

#include "human.h"
#include <QString>

class writer:public human
{
private:
    QString nationality;
public:
    int asghar=4;
    cout<<asghar<<endl;
    char * sosan;
    cin<<sosan;
    writer();
    writer(QString _name,QString _family, date _birth_date,QString ns);
    QString getNationality();
    void setNationality(QString snpppppp);
};

#endif // WRITER_H

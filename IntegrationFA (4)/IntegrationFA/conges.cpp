#include "conges.h"
#include "employe.h"
#include <QSqlQuery>
#include<QtDebug>
#include<QObject>
#include <QSqlQuery>

Conges::Conges()
{
    int CIN = 0;
    int ID_C = 0;
    int Nombre_Jours = 0;
    QString Type = "";

}

Conges::Conges(int cin , int id_c , int nombre_jours , QString type)
{
    this->CIN = cin;
    this->ID_C = id_c ;
    this->Nombre_Jours = nombre_jours;
    this->Type = type ;
}

void Conges::setcin(int cin){this->CIN = cin;}
void Conges::setid_c(int id_c){this->ID_C = id_c ;}
void Conges::setnj(int nombre_jours){this->Nombre_Jours = nombre_jours;}
void Conges::settype(QString type){this->Type = type ;}

int Conges::getcin(){return CIN;}
int Conges::getid_c(){return ID_C;}
int Conges::getnj(){return Nombre_Jours;}
QString Conges::gettype(){return Type;}

bool Conges::ajouter()
{
    QSqlQuery query;

    QString CIN_string = QString::number(CIN);
    QString ID_string = QString::number(ID_C);
    QString NJ_string = QString::number(Nombre_Jours);

    query.prepare("INSERT INTO CONGES (CIN_E, ID_C ,NOMBRE_JOURS, TYPE_C)"
                  "VALUES (:CIN_E, :ID_C, :NOMBRE_JOURS, :TYPE_C)");
    query.bindValue(":CIN_E",CIN_string);
    query.bindValue(":ID_C",ID_string);
    query.bindValue(":NOMBRE_JOURS",NJ_string);
    query.bindValue(":TYPE_C",Type);

    return query.exec();

}


QSqlQueryModel* Conges::rechercher(int cin)
{

      QSqlQuery query;
     QString  CIN_string = QString::number(cin);

      query.prepare("SELECT CIN_E, ID_C ,NOMBRE_JOURS, TYPE_C FROM CONGES where CIN_E= :cin");
      query.bindValue(":cin",CIN_string);
      query.exec();
      QSqlQueryModel *model= new QSqlQueryModel;

     model->setQuery(query);
     return model;

}

QSqlQueryModel* Conges::conges(int cin)
{
    QSqlQuery query;
    QString CIN_string = QString::number(cin);

    query.prepare("SELECT CIN_E, SUM (NOMBRE_JOURS) FROM CONGES GROUP BY CIN_E HAVING CIN_E= :cin");
    query.bindValue(":cin",CIN_string);
    query.exec();

    QSqlQueryModel *model= new QSqlQueryModel;
    model->setQuery(query);
    return model;
}

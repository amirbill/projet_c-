#ifndef AVOCATT_H
#define AVOCATT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include"connection.h"
class avocatt
{
public:



    void setcin(QString c);
    void setprenom(QString p);
    void setnom(QString n);
    void setage(QString a);
    void setnumerotele(QString nu);
    void setspecialite(QString s);
    void setadr(QString ad);
    void setanneeex(QString an);

    QString get_cin();
    QString get_prenom();
    QString get_nom();
    QString get_age();
    QString get_numerotele();
    QString get_specialite();
    QString get_adr();
    QString get_anneeex();

    avocatt();
    avocatt(QString,QString,QString,QString,QString,QString,QString,QString);
    bool ajouter() ;
    QSqlQueryModel * afficher() ;
     bool supprimer(QString) ;
     bool modify(QString);
     bool tri() ;
private:
    QString cin,nom,prenom,specialite,adr,age, numerotele,anneeex ;

};

#endif // AVOCATT_H

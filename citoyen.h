#ifndef CITOYEN_H
#define CITOYEN_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
class Citoyen
{
public:
     Citoyen();
     Citoyen(int,int,int,QString,QString,QString);

     int getcin() ;
    int getage() ;
     int gettel();
  QString getnom() ;
  QString getprenom() ;
  QString getadress() ;
     void setcin(int) ;
     void setage(int) ;
     void settel(int) ;
     void setnom(QString) ;
     void setprenom (QString) ;
     void setadress( QString) ;
        void setadate( QString) ;
       bool recherchercitoyen(int cin) ;
     bool ajouter() ;
     bool supprimer(int);
   bool modifier();

     QSqlQueryModel  * afficher() ;
      QSqlQueryModel  * afficherC() ;
      //QSqlQueryModel* rechercheC(int cin, int tel,int age ,QString nom, QString prenom, QString adresse) ;
      //QSqlQueryModel* trierC(Citoyen) ;
private:
     int cin,tel,age;
     QString nom,prenom,adress;
     
     
};

#endif // CITOYEN_H

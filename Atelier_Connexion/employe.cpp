#include "employe.h"
#include <QSqlQuery>
#include<QtDebug>
#include<QObject>

employe::employe()
{
 QString Nom = " " ;
 QString Prenom =" " ;
 QString Date_n  =" " ;
 QString Addresse =" " ;
 QString Role = " " ;
 QString Date_e = " " ;
 int CIN = 0;
 int Telephone = 0 ;
 int Salaire = 0 ;
 int Note = 0 ;
 int J_d_c = 0;
 int Prime = 0;
}

employe::employe(QString nom ,QString prenom , QString date_n , QString addresse ,QString role ,QString date_e  ,int cin , int telephone , int salaire , int note , int j_d_c)

{
    this->Nom = nom;
    this->Prenom =prenom;
    this->Date_n =date_n;
    this->Addresse =addresse;
    this->Role = role ;
    this->Date_e = date_e ;
    this->CIN = cin;
    this->Telephone = telephone;
    this->Salaire = salaire;
    this->Note = note;
    this->J_d_c = j_d_c;

}
void employe::setcin(int cin ){this->CIN = cin;}
void employe::setnom (QString nom){this->Nom = nom;}
void employe::setprenom (QString prenom){this->Prenom =prenom;}
void employe::setdate_n (QString date_n){this->Date_n =date_n;}
void employe::setaddresse (QString addresse){this->Addresse =addresse;}
void employe::settelephone (int telephone){this->Telephone = telephone;}
void employe::setrole (QString role){ this->Role = role ;}
void employe::setdate_e (QString date_e){this->Date_e = date_e ;}
void employe::setsalaire (int salaire){this->Salaire = salaire;}
void employe::setnote (int note){this->Note = note;}
void employe::setj_d_c (int j_d_c){this->J_d_c = j_d_c;}



int employe::getcin(){return CIN;}
QString employe::getnom (){return Nom ;}
QString employe::getprenom (){return Prenom;}
QString employe::getdate_n (){return Date_n;}
QString employe::getaddresse (){return Addresse;}
int employe::gettelephone (){return Telephone;}
QString employe::getrole (){return Role;}
QString employe::getdate_e (){return Date_e;}
int employe::getsalaire (){return Salaire;}
int employe::getnote (){return Note;}
int employe::getj_d_c (){return J_d_c;}


bool employe::ajouter(){
QSqlQuery query;

QString CIN_string = QString::number(CIN);
QString telephone_string = QString::number(Telephone);
QString salaire_string = QString::number(Salaire);
QString note_string = QString::number(Note);
QString jdc_string = QString::number(J_d_c);

query.prepare("INSERT INTO employe (CIN, NOM, PRENOM, DATE_N, ADDRESSE, TELEPHONE, ROLE_E, DATE_E, SALAIRE, NOTE, J_D_C)"
              "VALUES (:CIN, :NOM, :PRENOM, :DATE_N, :ADDRESSE, :TELEPHONE, :ROLE_E, :DATE_E, :SALAIRE, :NOTE, :J_D_C)");
query.bindValue(":CIN",CIN_string);
query.bindValue(":NOM",Nom);
query.bindValue(":PRENOM",Prenom);
query.bindValue(":DATE_N",Date_n);
query.bindValue(":ADDRESSE",Addresse);
query.bindValue(":TELEPHONE",telephone_string);
query.bindValue(":ROLE_E",Role);
query.bindValue(":DATE_E",Date_e);
query.bindValue(":SALAIRE",salaire_string);
query.bindValue(":NOTE",note_string);
query.bindValue(":J_D_C",jdc_string);

return query.exec();

}


   QSqlQueryModel* employe::afficher()
   {
       QSqlQueryModel* model=new QSqlQueryModel();


             model->setQuery("SELECT CIN,NOM,PRENOM,DATE_N,ADDRESSE,TELEPHONE,ROLE_E,DATE_E,SALAIRE,NOTE,J_D_C FROM employe");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date de Naissace"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("Addresse"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Telephone"));
             model->setHeaderData(6, Qt::Horizontal, QObject::tr("Role"));
             model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date d'Emboche"));
             model->setHeaderData(8, Qt::Horizontal, QObject::tr("Salaire"));
             model->setHeaderData(9, Qt::Horizontal, QObject::tr("Note"));
             model->setHeaderData(10, Qt::Horizontal, QObject::tr("Jours de Congés Permis"));


             return model;
   }

 bool employe::modifier(int cin)
{   QSqlQuery query ;
    QString cin_String = QString::number(cin) ;
    QString telephone_string = QString::number(Telephone);
    QString salaire_string = QString::number(Salaire);
    QString note_string = QString::number(Note);
    QString jdc_string = QString::number(J_d_c);

    query.prepare("UPDATE EMPLOYE SET  nom='"+Nom+"', prenom='"+Prenom+"', date_n='"+Date_n+"', addresse='"+Addresse+"', telephone='"+telephone_string+"', role_e='"+Role+"', date_e='"+Date_e+"', salaire='"+salaire_string+"', note='"+note_string+"', j_d_c='"+jdc_string+"' WHERE CIN= '"+cin_String+"'");
    bool res = query.exec() ;
    return res;
}

   bool employe::supprimer(int cin)
   {
       bool test = false;
       QSqlQuery query;
       QString  CIN_string = QString::number(cin);
       query.bindValue(":cin",CIN_string);
       query.prepare("Delete from EMPLOYE where CIN= '"+CIN_string+"'");


       test = query.exec();
       return test;
   }


   QSqlQueryModel* employe::rechercher(int cin)
   {

         QSqlQuery query;
         QString  CIN_string = QString::number(cin);
         query.prepare("SELECT CIN,NOM,PRENOM,DATE_N,ADDRESSE,TELEPHONE,ROLE_E,DATE_E,SALAIRE,NOTE,J_D_C FROM employe where CIN= :cin");
         query.bindValue(":cin",CIN_string);
         query.exec();
         QSqlQueryModel *model= new QSqlQueryModel;

        model->setQuery(query);
        return model;

   }
 QSqlQueryModel* employe::tri(){

       QSqlQueryModel* model=new QSqlQueryModel();

             model->setQuery("SELECT* FROM employe ORDER BY Nom");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date de Naissace"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("Addresse"));
             model->setHeaderData(5, Qt::Horizontal, QObject::tr("Telephone"));
             model->setHeaderData(6, Qt::Horizontal, QObject::tr("Role"));
             model->setHeaderData(7, Qt::Horizontal, QObject::tr("Date d'Emboche"));
             model->setHeaderData(8, Qt::Horizontal, QObject::tr("Salaire"));
             model->setHeaderData(9, Qt::Horizontal, QObject::tr("Note"));
             model->setHeaderData(10, Qt::Horizontal, QObject::tr("Jours de Congés Permis"));


       return model;
     }

 QSqlQueryModel* employe::afficher_prime()
 {
     //Prime = Salaire * (Note/20);
     QSqlQueryModel* model=new QSqlQueryModel();


           model->setQuery("SELECT CIN,NOM,PRENOM,SALAIRE*(NOTE/20)As PRIME FROM employe");

           model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
           model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prenom"));
           model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prime"));


           return model;
 }


 QSqlQueryModel* employe::rechercher2(int cin)
 {

       QSqlQuery query;
       QString  CIN_string = QString::number(cin);
       query.prepare("SELECT CIN,NOM,PRENOM,J_D_C FROM employe where CIN= :cin");
       query.bindValue(":cin",CIN_string);
       query.exec();

       QSqlQueryModel *model= new QSqlQueryModel;
       model->setQuery(query);
       return model;

 }

  QSqlQueryModel* employe::recherche_prime(int cin)
  {
      QSqlQuery query;
      QString  CIN_string = QString::number(cin);
      query.prepare("SELECT CIN,NOM,PRENOM,PRIME FROM employe where CIN= :cin");
      query.bindValue(":cin",CIN_string);
      query.exec();

      QSqlQueryModel *model= new QSqlQueryModel;
      model->setQuery(query);
      return model;
  }




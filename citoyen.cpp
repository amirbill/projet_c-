#include "citoyen.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Citoyen::Citoyen()
{
cin=0 ; tel=0 ; age=0 ;nom=" " ; prenom=" " ,adress=" " ;
}

Citoyen::Citoyen(int CIN,int TEL,int AGE, QString NOM,QString PRENOM,QString ADRESS)
{ this->cin=CIN ;
    this->tel=TEL ;
   this->age=AGE;
    this->nom=NOM ;
    //   this->date=DATE ;
    this->prenom=PRENOM;
    this->adress=ADRESS;
} 
bool Citoyen::recherchercitoyen(int cin)
{
    QString refer=QString::number(cin);
    QSqlQuery q("select * from CITOYEN where CIN="+refer);
    while(q.next())
    {
        return true;
    }
    return false;
}

bool Citoyen::ajouter() 
{
  QSqlQuery query;
  QString cin_string= QString::number(cin);
  QString age_string= QString::number(age);
  QString tel_string= QString::number(tel);

        query.prepare("INSERT INTO CITOYEN (CIN,TEL, NOM, PRENOM,ADRESS,AGE) "
                      "VALUES (:CIN ,:TEL,:NOM, :PRENOM,:ADRESS,:AGE)");
        query.bindValue(":CIN", cin_string);
          query.bindValue(":AGE", age_string);
           query.bindValue(":TEL", tel_string);
        query.bindValue(":NOM", nom);
        query.bindValue(":PRENOM", prenom);
       query.bindValue(":ADRESS", adress);


       return query.exec();

}
QSqlQueryModel * Citoyen::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
          model->setQuery("SELECT* FROM CITOYEN");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));
          return model ;

}
QSqlQueryModel * Citoyen::afficherC()
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
          model->setQuery("SELECT* FROM CITOYEN");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));
          return model ;

}
bool Citoyen::supprimer(int cin)
{
    QSqlQuery query;
   // QString res=QString::number(cin) ;
    query.prepare("Delete from CITOYEN where CIN= :CIN");
    query.bindValue(0 ,cin) ;
      return query.exec();
    
}
bool Citoyen::modifier()
{
    QSqlQuery query;
  //  QString res= QString(cin);
    QString CIN_STRING=QString::number(cin);
    QString TEL_STRING= QString::number(tel);
   QString AGE_STRING= QString::number(age);
    query.prepare("UPDATE CITOYEN SET CIN='"+CIN_STRING+"',TEL='"+TEL_STRING+"',AGE='"+AGE_STRING+"',NOM='"+nom+"',ADRESS='"+adress+"',PRENOM='"+prenom+"' WHERE CIN='"+CIN_STRING+"'");

     query.bindValue(0,CIN_STRING);
       query.bindValue(1,TEL_STRING);
       query.bindValue(2, nom );
      query.bindValue(3, prenom);
      query.bindValue(4, adress );
    query.bindValue(5,AGE_STRING);

      return query.exec();
    //recherchercitoyen(cin) ;
}



/*QSqlQueryModel* Citoyen::rechercheC(int cin, int tel,int age ,QString nom, QString prenom, QString adresse)

 {

     QSqlQueryModel * model= new QSqlQueryModel();
     QSqlQuery query;
     query.prepare("select * from CITOYEN where cin like :CIN ")
     query.bindValue(0,CIN);// ID VARIABLE LOCAL BA3D BCH NA3MALOU APPEL BIL getID()
     query.bindValue(0,cin);
       query.bindValue(1,tel);
       query.bindValue(2, nom );
      query.bindValue(3, prenom);
      query.bindValue(4, adress );
    query.bindValue(5,age);
     model->setQuery(query);
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));
     return model;

}
QSqlQueryModel* Citoyen::trierC(Citoyen)
{
    QSqlQueryModel* model = new QSqlQueryModel();

        model->setQuery("select *FROM CITOYEN ORDER BY CIN ASC");

          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));


    return model;
}



*/


int Citoyen:: getcin() {return cin;}
int Citoyen:: getage()  {return age;}
int Citoyen::gettel() {return tel;}
QString Citoyen::getnom() {return nom;}
QString Citoyen::getprenom()  {return prenom;}
QString Citoyen::getadress()  {return adress;}

void  Citoyen:: setcin(int cin) {this->cin=cin;}
void  Citoyen:: setage(int age) {this->age=age;}
void  Citoyen::settel(int tel) {this->tel=tel;}
void  Citoyen::setnom(QString nom) { this->nom=nom;}
void Citoyen:: setprenom ( QString prenom) { this->prenom=prenom;}
void Citoyen:: setadress( QString adress) {this->adress=adress;}


#include "huissier.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QString>
#include <QObject>
#include <QPdfWriter>
#include <QPainter>
#include <QDesktopServices>
//#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>


huissier::huissier()
{
id="" ;lieu="";salle="" ; citoyen="" ; prenom="" ;  }

huissier::huissier(QString id ,QString lieu, QString salle,QString citoyen,QString prenom, QDate date_session,QString un,QString mdp, QString type)
{
    this->id=id;
    this->lieu=lieu;
    this->salle=salle;
    this->citoyen=citoyen;
    this->prenom=prenom;
    this->date_session=date_session;
    this->username = un ;
    this->password = mdp ;
   this->type = type ;

}
QString huissier::getid()
{   return id;  }
QString huissier::getlieu()
{   return lieu;  }
QString huissier::getsalle()
{   return salle; }
QString huissier::getcitoyen()
{   return citoyen; }
QString huissier::getprenom()
{   return prenom;  }

/*QString huissier::getimage()
{   return image;  }*/
void huissier::setid(QString id){ this->id=id; }
void huissier::setlieu(QString lieu){this->lieu=lieu; }
void huissier::setsalle(QString  salle){this->salle=salle; }
void huissier::setcitoyen(QString citoyen){this->citoyen=citoyen; }
void huissier::setprenom(QString prenom){this->prenom=prenom; }
//void huissier::setimage(QString image){this->image=image; }

bool huissier::ajouter()
{
    //QString date = date_session.toString();
   QSqlQuery query;

          query.prepare("INSERT INTO huissierS (ID,lieu,salle ,citoyen,PRENOM,DATE_session,username,password,type) "
                        "VALUES (:id,:lieu, :salle,:citoyen, :prenom,:date_session,:username,:password,:type )");
          query.bindValue(0, id);
          query.bindValue(1, lieu);
          query.bindValue(2, salle);
          query.bindValue(3, citoyen);
          query.bindValue(4, prenom);
          query.bindValue(5 ,date_session);
          query.bindValue(6 ,username );
          query.bindValue(7 ,password);
          query.bindValue(8 ,type);

           return query.exec();

}
QSqlQueryModel* huissier::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* FROM huissierS");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieu"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("salle"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("citoyen"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("prenom"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("date_session"));
         model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nom d'utilisateur"));
         model->setHeaderData(7, Qt::Horizontal, QObject::tr("Mot de passe"));
          model->setHeaderData(8, Qt::Horizontal, QObject::tr("type"));

          return  model;
}
bool huissier::supprimer(QString id)
{

    QSqlQuery query;

           query.prepare("Delete from huissierS where id=:id");
           query.bindValue(0, id);

            return query.exec();

}
bool huissier::update()
        {
            //QString date = date_session.toString();
            QSqlQuery query;
                query.prepare("UPDATE huissierS SET lieu='"+lieu+"' , salle='"+salle+"' , citoyen='"+citoyen+"' , PRENOM='"+prenom+"' , DATE_session=:date, username ='"+username+"' , password= '"+password+"',type = '"+type+"'  where ID='"+id+"' ");
                query.bindValue(":date" ,date_session);
                return   query.exec();


        }

QSqlQueryModel* huissier::tri()
{
   QSqlQueryModel * model=new QSqlQueryModel();
   model->setQuery("SELECT * FROM huissierS ORDER BY ID ");

   model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("lieu"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("salle"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("citoyen"));
   model->setHeaderData(4,Qt::Horizontal,QObject::tr("prenom"));
   model->setHeaderData(5,Qt::Horizontal,QObject::tr("date_session"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nom d'utilisateur"));
   model->setHeaderData(7, Qt::Horizontal, QObject::tr("Mot de passe"));
   model->setHeaderData(8, Qt::Horizontal, QObject::tr("type"));

   return  model;

}



QSqlQueryModel* huissier::triprenom()
{
   QSqlQueryModel * model=new QSqlQueryModel();
   model->setQuery("SELECT * FROM huissierS ORDER BY prenom ");

   model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("lieu"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("salle"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("citoyen"));
   model->setHeaderData(4,Qt::Horizontal,QObject::tr("prenom"));
   model->setHeaderData(5,Qt::Horizontal,QObject::tr("date_session"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nom d'utilisateur"));
   model->setHeaderData(7, Qt::Horizontal, QObject::tr("Mot de passe"));
   model->setHeaderData(8, Qt::Horizontal, QObject::tr("type"));

   return  model;

}




QSqlQueryModel* huissier::trisalle()
{
   QSqlQueryModel * model=new QSqlQueryModel();
   model->setQuery("SELECT * FROM huissierS ORDER BY salle ");

   model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
   model->setHeaderData(1,Qt::Horizontal,QObject::tr("lieu"));
   model->setHeaderData(2,Qt::Horizontal,QObject::tr("salle"));
   model->setHeaderData(3,Qt::Horizontal,QObject::tr("citoyen"));
   model->setHeaderData(4,Qt::Horizontal,QObject::tr("prenom"));
   model->setHeaderData(5,Qt::Horizontal,QObject::tr("date_session"));
   model->setHeaderData(6, Qt::Horizontal, QObject::tr("Nom d'utilisateur"));
   model->setHeaderData(7, Qt::Horizontal, QObject::tr("Mot de passe"));
   model->setHeaderData(8, Qt::Horizontal, QObject::tr("type"));

   return  model;

}

QSqlQueryModel* huissier ::Rechercher(QString id_string)
{
    QSqlQueryModel *model=new::QSqlQueryModel;
                   model->setQuery("SELECT * FROM  huissierS where ID like '%"+id_string+"%'");
                   return model;

    }






#include "avocatt.h"
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include "connection.h"
#include<QDebug>
#include <QObject>
#include"avocat.h"


//test

avocatt::avocatt()
{
    cin="" ;
    nom="";
    prenom=""  ;
    age="" ;
    numerotele="" ;
    specialite="" ;
    adr="";
    anneeex="" ;
}

avocatt::avocatt(QString c,QString n,QString p,QString a,QString nu,QString s,QString ad,QString an)
{
    this->cin=c ;
    this->nom=n ;
    this->prenom=p ;
    this->age=a ;
    this->numerotele=nu ;
    this->specialite=s;
    this->adr=ad ;
    this->anneeex=an ;
}



void avocatt::setcin(QString n){cin=n;}
void avocatt::setnom(QString n){nom=n;}
void avocatt::setprenom(QString n){prenom=n;}
void avocatt::setage(QString n){age=n;}
void avocatt::setnumerotele(QString n){numerotele=n;}
void avocatt::setspecialite(QString n){specialite=n;}
void avocatt::setadr(QString n){adr=n;}
void avocatt::setanneeex(QString n){anneeex=n;}

QString avocatt::get_cin(){return cin; }
QString avocatt::get_nom(){return nom; }
QString avocatt::get_prenom(){return prenom; }
QString avocatt::get_age(){return age; }
QString avocatt::get_numerotele(){return numerotele; }
QString avocatt::get_specialite(){return specialite; }
QString avocatt::get_adr(){return adr; }
QString avocatt::get_anneeex(){return anneeex; }

bool avocatt:: ajouter()
{
    QSqlQuery query;

    /*QString age_string=QString::number(age);
    QString numerotele_string=QString::number(numerotele);
    QString anneeex_string=QString::number(anneeex);*/



          query.prepare("INSERT INTO AVOCAT(cin,nom,prenom,age,numerotele,specialite,adr,anneeex) "
                        "VALUES (:cin,:nom,:prenom,:age,:numerotele,:specialite,:adr,:anneeex)");
          query.bindValue(":cin", cin);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":age", age);
          query.bindValue(":numerotele", numerotele);
          query.bindValue(":specialite", specialite);
          query.bindValue(":adr", adr);
          query.bindValue(":anneeex", anneeex);

        return  query.exec();

}

bool avocatt::supprimer(QString cin)
{
    QSqlQuery query;


          query.prepare("Delete from avocat where cin=:cin");
          query.bindValue(0, cin);
        return  query.exec();

}


/*bool avocatt::tri()
{
    QSqlQuery query ;
    query.prepare("SELECT* FROM avocat ORDER BY nom=:nom ") ;
    query.bindValue(":nom", nom);
    return  query.exec();
}*/


QSqlQueryModel* avocatt::afficher()
{
   // QSqlQuery query;
 //   modeltabsql * modeleSql ;
    QSqlQueryModel* model=new QSqlQueryModel() ;
    model->setQuery("SELECT* FROM avocat");
        model->setHeaderData(0, Qt::Horizontal,QObject:: tr("cin"));
        model->setHeaderData(1, Qt::Horizontal,QObject:: tr("nom"));
        model->setHeaderData(2, Qt::Horizontal,QObject:: tr("prenom"));
        model->setHeaderData(3, Qt::Horizontal,QObject:: tr("age"));
        model->setHeaderData(4, Qt::Horizontal,QObject:: tr("numerotele"));
        model->setHeaderData(5, Qt::Horizontal,QObject:: tr("specialite"));
        model->setHeaderData(6, Qt::Horizontal,QObject:: tr("adr"));
        model->setHeaderData(7, Qt::Horizontal,QObject:: tr("anneeex"));


       //modeleSql->setOrderByClause("ORDER BY nom DESC");

   /*    QString orderBy(orderByClause());
       if (!orderBy.isEmpty())
           query.append(QLatin1Char(' ')).append(orderBy); */

    return model ;
}


bool avocatt :: modify(QString cin)
{
    QSqlQuery query ;

        // query.prepare("UPDATE AVOCAT SET cin='"+cin+"' ,nom='"+nom+"' ,prenom='"+prenom+"',age='"+age+"',numerotele='"+numerotele+"',specialite='"+specialite+"',adr='"+adr+"',anneeex='"+anneeex+"' WHERE cin ='"+cin+"' ");


        query.prepare("UPDATE AVOCAT SET cin=:cin,nom=:nom,prenom=:prenom,age=:age,numerotele=:numerotele,specialite=:specialite,adr=:adr,anneeex=:anneeex WHERE cin=:cin");

        query.bindValue(":cin", cin);
        query.bindValue(":nom", nom);
        query.bindValue(":prenom", prenom);
        query.bindValue(":age", age);
        query.bindValue(":numerotele", numerotele);
        query.bindValue(":specialite", specialite);
        query.bindValue(":adr", adr);
        query.bindValue(":anneeex", anneeex);


        return  query.exec();

}



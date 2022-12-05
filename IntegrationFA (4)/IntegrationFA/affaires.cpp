#include "affaires.h"
#include<QtSql/QSqlDatabase>
#include<QSqlQuery>
#include<QtDebug>
#include<QSqlQueryModel>
#include<QObject>
#include<QTableView>
#include<QTextDocument>

Affaires::Affaires()
{
id="";
type="";
date="";
}

Affaires::Affaires(QString id,QString type,QString date)
{
   this->id=id;
   this->type=type;
   this->date=date;
}

QString Affaires::getid(){return id;}
QString Affaires::gettype(){return type;}
QString Affaires::getdate(){return date;}
void Affaires::setid(QString i){id=i;}
void Affaires::settype(QString t){type=t;}
void Affaires::setdate(QString d){date=d;}


bool Affaires::ajouter()
{
    QSqlQuery query;
          query.prepare("INSERT INTO AFF (ID,TYPE,DATE_DE_DEPOT) "
                        "VALUES (:ID, :TYPE, :DATE_DE_DEPOT)");
          query.bindValue(":ID", id);
          query.bindValue(":TYPE", type);
          query.bindValue(":DATE_DE_DEPOT", date);
          return query.exec();

}
QSqlQueryModel* Affaires::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* FROM AFF");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DE_DEPOT"));

          QTableView *view = new QTableView;
          view->setModel(model);
          view->show();

    return model;
}
bool Affaires::supprimer(QString id)
{
    QSqlQuery query;
          query.prepare("Delete from AFF where ID=:ID");
          query.bindValue(0, id);

          return query.exec();
}
bool Affaires::modifier(QString id)
{
    QSqlQuery query;
            //query.prepare("UPDATE SET AFFAIRE ID=:id, TYPE=:type, DATE_DE_DEPOT=:date where ID=:id");
           /* query.bindValue(":name", ui->lineEdit_name->text());
            query.bindValue(":city", ui->lineEdit_city->text());
            query.bindValue(":address", ui->lineEdit_address->text());*/

    query.prepare("UPDATE AFF SET ID='"+id+"', TYPE='"+type+"', DATE_DE_DEPOT='"+date+"' where ID='"+id+"'");
           /* query.bindValue(0, id);
            query.bindValue(1, type);
            query.bindValue(2, date);*/


           return query.exec();
}

/*     /////////////////////////////////////////////////////////////index
  QSqlQueryModel *model = new QSqlQueryModel;
      model->setQuery("SELECT name, salary FROM employee");
      model->setHeaderData(0, Qt::Horizontal, tr("Name"));
      model->setHeaderData(1, Qt::Horizontal, tr("Salary"));

      QTableView *view = new QTableView;
      view->setModel(model);
      view->show();
      */

QSqlQueryModel* Affaires::Rechercher(QString id)
{
     QSqlQuery query;
      query.prepare("SELECT * FROM AFF where ID=:ID");
      query.bindValue(":ID", id);
     query.exec();
     QSqlQueryModel *model= new QSqlQueryModel;

    model->setQuery(query);
    return model;

}
QSqlQueryModel* Affaires::tri(){
           /* QSqlQuery qry;
             qry.prepare("SELECT * FROM AFF where ID=:ID ORDER BY TYPE");
             qry.bindValue(":ID", id);
             qry.exec();
             QSqlQueryModel *model= new QSqlQueryModel;
             model->setQuery(qry);

            return model;*/
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* FROM AFF ORDER BY TYPE");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_DE_DEPOT"));

    return model;
  }



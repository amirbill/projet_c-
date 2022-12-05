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


QSqlQueryModel* avocatt::chercher(QString cin )
{
    QSqlQuery query;
    query.prepare("SELECT* FROM avocat where CIN=:CIN") ;
    query.bindValue(":CIN",cin);
    query.exec() ;
    QSqlQueryModel *model=new QSqlQueryModel;

    model->setQuery(query) ;
    return model ;
}


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


QSqlQueryModel* avocatt::tri()
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
    model->setQuery("SELECT* FROM avocat ORDER BY age");
    model->setHeaderData(0, Qt::Horizontal,QObject:: tr("cin"));
    model->setHeaderData(1, Qt::Horizontal,QObject:: tr("nom"));
    model->setHeaderData(2, Qt::Horizontal,QObject:: tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal,QObject:: tr("age"));
    model->setHeaderData(4, Qt::Horizontal,QObject:: tr("numerotele"));
    model->setHeaderData(5, Qt::Horizontal,QObject:: tr("specialite"));
    model->setHeaderData(6, Qt::Horizontal,QObject:: tr("adr"));
    model->setHeaderData(7, Qt::Horizontal,QObject:: tr("anneeex"));

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
/*
QChartView * avocatt::stat()
{
    int row_count = 0;
    int row_count1 = 0;
    int row_count2 = 0;

            QSqlQuery query,query2,query3;
            query.prepare("SELECT * FROM avocat where anneeex < 2 ");
            query.exec();
            query2.prepare("SELECT * FROM avocat where (anneeex >= 2) AND (anneeex < 5) ");
            query2.exec();
            query3.prepare("SELECT * FROM avocat where anneeex >= 5");
            query3.exec();

            while(query3.next())
                row_count2++;

            while(query2.next())
                row_count1++;

            while(query.next())
                row_count++;


            qDebug()<<row_count<<row_count1<<row_count2;

    QPieSeries *series = new QPieSeries();
    series->append("des avocay qui en annee d'experience superieur a 5", row_count2);
    series->append("des avocay qui en annee d'experience entre 5 et 2", row_count1);
    series->append("des avocay qui en annee d'experience inferieur a 2", row_count);
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("statistic Des salaires");
    chart->setAnimationOptions(QChart::AllAnimations);
    chart->legend()->setAlignment(Qt::AlignRight);
    chart->legend()->setBackgroundVisible(true);
    chart->legend()->setBrush(QBrush(QColor(128, 128, 128, 128)));
    chart->legend()->setPen(QPen(QColor(248, 246, 0)));
    series->setLabelsVisible();

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}
*/






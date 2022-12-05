#ifndef AVOCATT_H
#define AVOCATT_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include"connection.h"

#include<QString>
#include<QSqlQuery>

#include<istream>
#include<fstream>
#include<vector>
#include<QFileDialog>
#include<QPixmap>
#include<QPainter>
#include<QtSvg/QSvgRenderer>
#include<QMainWindow>
#include "qtablewidget.h"

#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QGridLayout>
#include <QChartView>
QT_CHARTS_USE_NAMESPACE
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
    QSqlQueryModel * tri() ;
    QSqlQueryModel * chercher(QString) ;

    QChartView * stat();


private:
    QString cin,nom,prenom,specialite,adr,age, numerotele,anneeex ;

};

#endif // AVOCATT_H

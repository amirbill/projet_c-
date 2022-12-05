/*#ifndef AFFAIRE_H
#define AFFAIRE_H


class affaire
{
public:
    affaire();
};

#endif // AFFAIRE_H
*/
/*#ifndef AFFAIRE_H
#define AFFAIRE_H


class affaire
{
public:
    affaire();
};

#endif // AFFAIRE_H
*/
#ifndef AFFAIRES_H
#define AFFAIRES_H
#include<QString>
#include<QDate>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QTextDocument>
#include<QtCharts/QChart>
#include<QtCharts/QChartView>
#include<QtCharts/QPieSeries>
#include<QtWidgets>
#include <qchartview.h>
#include <QChartView>

#include <QBarSet>
#include <qbarset.h>
class Affaires
{
public:
    Affaires();
    Affaires(QString,QString,QString);
    //getters
    QString getid();
    QString gettype();
    QString getdate();

    //setters
    void setid(QString);
    void settype(QString);
    void setdate(QString);

    //CRUD
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
    bool modifier(QString);

    //metiers
    QSqlQueryModel* Rechercher(QString);
    QTextDocument genererPDF();
    QSqlQueryModel* tri();


private:

    QString id;
    QString type;
    QString date;

};

#endif // AFFAIRES_H


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include<QMainWindow>
#include "affaire.h"
#include<QString>
#include<QDate>
#include<QIntValidator>
#include<QMessageBox>
#include"ui_mainwindow.h"
#include <affaire.h>
#include<QtPrintSupport/QPrinter>
#include<QtPrintSupport/QPrintDialog>
/*
#include<QtCharts/QChart>
#include<QtCharts/QChartView>
#include<QtCharts/QPieSeries>
*/
#include<QDebug>
/*
#include<QtQuick/QtQuick>
#include<QtPositioning/QtPositioning>
#include<QtLocation/QLocation>
*/
//#include <QtQml/qtqmlglobal.h>
/*
#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
*/

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
  //using namespace QtCharts;

{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(0,99999,this));
    ui->tableView->setModel(A.afficher());

    ////////////////////////////////PIE CHART/////////////////////////////////////////////
/*int q;
    QPieSeries *series = new QPieSeries();

    QSqlQuery query1;
   QString queryText("SELECT * FROM AFFAIRE where TYPE=:civile");
   // QString queryText("SELECT TYPE, count(TYPE)  FROM Students GROUP by TYPE");

    query1.exec(queryText);
    qDebug() << query1.size();
    while (query1.next()) qDebug() << query1.value(0).toString();
q=queryText.toInt();
    series->append("civile", q);
    series->append("sociale", 70);
    series->append("familiale", 50);
    series->append("pénale", 40);
    series->append("administrative", 30);



    QPieSlice *slice = series->slices().at(1);
    slice->setExploded(true);
    slice->setLabelVisible(true);
    slice->setPen(QPen(Qt::darkGreen, 2));
    slice->setBrush(Qt::green);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques sur les types d'affaires programmés");


    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);*/
///////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////minimap/////////////////////////////////////

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bouton_ajouter_clicked()
{
    QString id=ui->lineEdit->text();
    QString type=ui->lineEdit_5->text();
    QString date=ui->lineEdit_6->text();
    Affaires a( id, type, date);

    bool test= a.ajouter();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("ajout avec succes");
        ui->tableView->setModel(a.afficher());
       }
    else
        msgBox.setText("Echec d'ajout");
    msgBox.exec();
}

void MainWindow::on_bouton_supprimer_clicked()
{
    Affaires A1;
    A1.setid(ui->lineEdit_8->text());
    bool test=A1.supprimer(A1.getid());
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("suppression avec succes");
        ui->tableView->setModel(A1.afficher());
       }
    else
        msgBox.setText("Echec de suppression");
    msgBox.exec();
}



void MainWindow::on_bouton_modifier_clicked()
{
   Affaires a1;
   a1.setid(ui->lineEdit_2->text());

    QString id=ui->lineEdit_2->text();
    QString type=ui->lineEdit_4->text();
    QString date=ui->lineEdit_7->text();
    Affaires a( id, type, date);

    bool test=a.modifier(id);
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("modification avec succes");
        ui->tableView->setModel(a.afficher());
       }
    else
        msgBox.setText("Echec de modification");
    msgBox.exec();
}

void MainWindow::on_bouton_rechercher_clicked()
{
   // Affaires a;
   //a.setid(ui->case_rechercher->text());
    QString id=ui->case_rechercher->text();
    bool test=A.Rechercher(id);

    if(id.isEmpty())
      {
         QMessageBox::critical(0,qApp->tr("erreur"),
          qApp->tr("veillez remplir le champs vide"),QMessageBox::Cancel);
      }
    else
    {
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("élément trouvé");
        ui->tableView->setModel(A.Rechercher(id));
       }
    else
        msgBox.setText("élément pas trouvé");
    msgBox.exec();
    }
}

void MainWindow::on_bouton_imprimer_clicked()
{
    QPrinter printer;
    printer.setPrinterName("my printer");
    QPrintDialog dialog (&printer,this);
    if (dialog.exec()==QDialog::Rejected)
      {
         QMessageBox msgBox;
          msgBox.setText("Aucune imprimente détectée");
      }
    else
      {
        QMessageBox msgBox;
        msgBox.setText("PDF généré");
        ui->textEdit->print(&printer);
      }
}



void MainWindow::on_bouton_trier_clicked()
{
    ui->tableView->setModel(A.tri());
    bool test=A.tri();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("tri effectué avec succès");
        ui->tableView->setModel(A.tri());
       }
    else
        msgBox.setText("Echec de tri");
    msgBox.exec();
}



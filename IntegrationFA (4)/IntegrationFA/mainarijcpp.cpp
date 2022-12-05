#include "mainarijcpp.h"
#include "ui_mainarijcpp.h"
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtWidgets/QApplication>
#include<QFile>
#include<QDir>
#include<QChartView>
#include<qchartview.h>
#include<qbarseries.h>
#include<QBarSeries>
#include<QtCharts/QChart>
#include<QtCharts/QChartView>
#include<QtCharts/QPieSeries>
mainarijcpp::mainarijcpp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainarijcpp)
{
    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(0,99999,this));
    ui->tableView->setModel(A.afficher());


   QChartView *chartView ;
    QSqlQuery q1,q2,q3,q4;
    qreal tot=0,c1=0,c2=0,c3=0;

    q1.prepare("SELECT * FROM AFFAIRE");
    q1.exec();

    q2.prepare("SELECT * FROM AFF WHERE TYPE='civile'");
    q2.exec();

    q3.prepare("SELECT * FROM AFF WHERE TYPE='familiale'");
    q3.exec();

    q4.prepare("SELECT * FROM AFF WHERE TYPE='commerciale' ");
    q4.exec();

    while (q1.next()){tot++;}
    while (q2.next()){c1++;}
    while (q3.next()){c2++;}
    while (q4.next()){c3++;}

    c1=c1/tot;
    c2=c2/tot;
    c3=c3/tot;


    // Assign names to the set of bars used
            QBarSet *set0 = new QBarSet("civile");
            QBarSet *set1 = new QBarSet("familiale");
            QBarSet *set2 = new QBarSet("commerciale");

            // Assign values for each bar
            *set0 << c1;
            *set1 << c2;
            *set2 << c3;



            // Add all sets of data to the chart as a whole
            // 1. Bar Chart
            QBarSeries *series = new QBarSeries();

            // 2. Stacked bar chart
            series->append(set0);
            series->append(set1);
            series->append(set2);


            // Used to define the bar chart to display, title
            // legend,
            QChart *chart = new QChart();

            // Add the chart
            chart->addSeries(series);


            // Adds categories to the axes
            //QBarCategoryAxis *axis = new QBarCategoryAxis();



            // 1. Bar chart
            //chart->setAxisX(axis, series);


            // Used to change the palette
            QPalette pal = qApp->palette();

            // Change the color around the chart widget and text
            pal.setColor(QPalette::Window, QRgb(0xffffff));
            pal.setColor(QPalette::WindowText, QRgb(0x404044));

            // Apply palette changes to the application
            qApp->setPalette(pal);


    // Used to display the chart
    chartView = new QChartView(chart,ui->label_stat);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setMinimumSize(400,400);
    chartView->show();


    ///////////////////////////minimap/////////////////////////////////////

}

mainarijcpp::~mainarijcpp()
{
    delete ui;
}

void mainarijcpp::on_bouton_ajouter_clicked()
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

    //****************ajout historique*********************


            QFile file ("D:/INTEGRATION/historique.txt");

            if (!file.open(QFile::WriteOnly  | QFile::Append))
                {
                QMessageBox::warning(this, "title","file  not open");
                }
            //file.write("ajout d'une nouvelle affaire a la date"
            QTextStream out (&file);

             QDate datenow = QDate::currentDate();
            QString datenowst=datenow.toString();
            QTime timenow= QTime::currentTime();
                QString timenowst=timenow.toString();

            //QString  text  = ui->history->toPlainText();
            out << "ajout d'une nouvelle affaire : ' " << id << " ' à la date ' " << datenowst << " ' à l'heure  ' " << timenowst << " '\n" ;
            file.flush();
            file.close ();
}

void mainarijcpp::on_bouton_supprimer_clicked()
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

    //****************supprimer historique*********************

    QFile file ("D:/INTEGRATION/historique.txt");

    if (!file.open(QFile::WriteOnly  | QFile::Append))
        {
        QMessageBox::warning(this, "title","file  not open");
        }
    //file.write("ajout d'une nouvelle donnée a la date"
    QTextStream out (&file);

     QDate datenow = QDate::currentDate();
    QString datenowst=datenow.toString();
    QTime timenow= QTime::currentTime();
        QString timenowst=timenow.toString();

    //QString  text  = ui->history->toPlainText();
    out << "suppression d'une affaire  à la date ' " <<  datenowst << " ' à l'heure  ' " << timenowst << " '\n" ;
   // out << "suppression d'une nouvelle affaire : ' " << id << " ' à la date ' " << datenowst << " ' à l'heure  ' " << timenowst << " '\n" ;
    file.flush();
    file.close ();

}



void mainarijcpp::on_bouton_modifier_clicked()
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

    //****************modification historique*********************

   QFile file ("D:/INTEGRATION/historique.txt");

       if (!file.open(QFile::WriteOnly  | QFile::Append))

           {
             QMessageBox::warning(this, "title","file  not open");
           }

            //file.write("ajout d'une nouvelle donnée a la date"
            QTextStream out (&file);

            QDate datenow = QDate::currentDate();
            QString datenowst=datenow.toString();
            QTime timenow= QTime::currentTime();
            QString timenowst=timenow.toString();



            //QString  text  = ui->history->toPlainText();

     out << "modification d'une affaire: ' " << id << " ' à la date ' " << datenowst << " ' à l'heure  ' " << timenowst << " '\n" ;

            file.flush();
            file.close ();
}

void mainarijcpp::on_bouton_rechercher_clicked()
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

void mainarijcpp::on_bouton_imprimer_clicked()
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



void mainarijcpp::on_bouton_trier_clicked()
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


/////////////////////////////////////////////////////

void mainarijcpp::on_actualiser_historique_clicked()
{
     QFile file ("D:/INTEGRATION/historique.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
    QMessageBox::warning(this, "title","fichier non ouvert");
    }
   QTextStream in (&file);
    QString text = in.readAll();
    ui->textEdit_2->setPlainText(text);
    file.close();
}


void mainarijcpp::on_effacer_historique_clicked()
{
   QFile file ("D:/INTEGRATION/historique.txt");

    if (!file.open(QFile::WriteOnly | QFile::Truncate))
    {
    QMessageBox::warning(this, "title","fichier non ouvert");
    }

    file.flush();
    file.close ();
}
void mainarijcpp::on_bouton_camera_clicked()
{
    c= new camera();
    c->show();
}


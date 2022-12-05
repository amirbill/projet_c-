#include "avocat.h"
#include "ui_avocat.h"
#include "avocatt.h"
#include "dialog.h"
#include"QMessageBox"
#include <QString>
#include "connection.h"
#include<QIntValidator>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>
#include<QQuickItem>
#include <QDesktopWidget>
#include <QSettings>
#include <QPrinter>
#include <QTextStream>
#include <QDataStream>
#include <QtQuickWidgets/QQuickWidget>
#include <QtQuickWidgets>
#include "WebAxWidget.h"
#include <QFile>
#include <QDir>
#include <QDate>
#include <QTime>
#include<QApplication>
#include <QObject>
#include <QDebug>

avocat::avocat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::avocat)
{
    ui->setupUi(this);
    ui->tabaffichage->setModel(o.afficher());
    int a,b,c,d,e,f,g,h = 0  ;
    total ( a,b,c,d, e, f, g, h );
    //arduinooo

    ui->lcdNumber->display("............") ;
    serial= new QSerialPort(this) ;
    serialBuffer="" ;



    //arduino
/*
   ),SIGNAL(readyRead()),this,SLOT(update_label( int ret=a.connect_arduino() ;
    switch(ret){
    case(0):qDebug()<<"arduino is available and connected to : "<<a.getarduino_port_name() ;
        break ;
    case(1):qDebug()<<"arduino available but not connected to :"<<a.getarduino_port_name() ;
        break ;
    case (-1):qDebug()<<"arduino is not available" ;
    }
    QObject::connect (a.getserial())) ;*/

    QSettings settings(QSettings::IniFormat, QSettings::UserScope,
                       QCoreApplication::organizationName(), QCoreApplication::applicationName());

    ui->map->dynamicCall("Navigate(const QString&)", "https://www.google.com/maps/place/ESPRIT/@36.9016729,10.1713215,15z");





    //**************************************** arduino*********************************************************************************************************************************

    bool arduino_is_available =false ;
    QString arduino_port_name ;
    QSerialPortInfo serial_port_info ;

    foreach(const QSerialPortInfo &QSerialPortInfo, QSerialPortInfo:: availablePorts()){
        if (serial_port_info.hasVendorIdentifier()&& serial_port_info.hasProductIdentifier()){
            if(serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier()
                    == arduino_uno_producy_id) {
                arduino_is_available = true;
                arduino_port_name=serial_port_info.portName();
            }
        }
    }


    if(arduino_is_available)
        {
        qDebug() << "find the arduino port ...";
        serial->setPortName(arduino_port_name);
        serial->open(QSerialPort::WriteOnly) ;
            serial->setBaudRate(QSerialPort::Baud9600);
            serial->setDataBits(QSerialPort::Data8);
            serial->setFlowControl(QSerialPort::NoFlowControl) ;
            serial->setParity(QSerialPort::NoParity);
            serial->setStopBits(QSerialPort::OneStop);
            QObject::connect(serial,SIGNAL(readyRead()),this,SLOT(readserial())) ;
         }
    else {

       qDebug()<<"could'nt find the correct port for the arduino " ;
       QMessageBox::information(this , "serial port erreur","couldn t open serial por to arduino ") ;
          }

   // *******************************************************************************************************************************************************************************

}

avocat::~avocat()
{
    delete ui;
}
void avocat::readserial()
{
    data = serial->readAll() ;
    serialBuffer += QString::fromStdString(data.toStdString()) ;
    //qDebug()<<serialBuffer;

    QStringList Buffersplit=serialBuffer.split(",") ;
    if (Buffersplit.length()<3){
        data=serial->readAll();
        serialBuffer += QString::fromStdString(data.toStdString()) ;}
    else {

            //buffersplit[1]is a good value
        qDebug()<<Buffersplit ;
        avocat::updatelcd(Buffersplit[1]) ;
        serialBuffer= "" ;
    }

}


void avocat::updatelcd(const QString sensor_reading)
{
    ui->lcdNumber->display(sensor_reading) ;
}


//********************************************************************************************************************************************



void avocat::on_pushButton_valider_clicked()
{
    QString cin = ui->lineEdit_t1cin->text();
    QString nom=ui->lineEdit_t1nom->text();
    QString prenom= ui->lineEdit_t1prenom->text();
    QString age=ui->lineEdit_t1age->text();
    QString numerotele=ui->lineEdit_t1numerotele->text();
    QString adr=ui->lineEdit_t1adr->text();
    QString specialite= ui->lineEdit_t1specialite->text();
    QString anneeex= ui->lineEdit_t1anneeex->text();

    avocatt v(cin,nom,prenom,age,numerotele,specialite,adr,anneeex);

   bool test=v.ajouter() ;

    if (test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("ajout affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;
        ui->tabaffichage->setModel(v.afficher()) ;


        //////////////////////////////////////

        QFile file ("C:/Users/amir/Desktop/d-court/court/historique.txt");

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
               out << "ajout d'une nouvelle donnee nomme ' " << nom<< " ' à la date ' " << datenowst << " ' à l'heure  ' " << timenowst << " '\n" ;
               file.flush();
               file.close ();




    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                 QObject::tr("ajout non affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;

    }


      //QMessageBox::information(this,"confirmation","avocat a ete ajouté !!");
}

void avocat::on_suprimer_clicked()
{
    avocatt v;
    v.setcin(ui->lineEdit_supp->text()) ;
    bool test=v.supprimer(v.get_cin()) ;

    if (test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("suppression affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;
                            ui->tabaffichage->setModel(v.afficher()) ;


                            ////////////////////////////////////////
                            QFile file ("C:/Users/amir/Desktop/d-court/court/historique.txt");

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
                            out << "suppression d'une donnee  à la date ' " <<  datenowst << " ' à l'heure  ' " << timenowst << " '\n" ;
                            file.flush();
                            file.close ();




    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                 QObject::tr("suppression non affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;
}
}




void avocat::on_pushButton_modifier_clicked()
{
    QString cin = ui->lineEdit_cinaff->text();
    QString nom=ui->lineEdit_nomaff->text();
    QString prenom= ui->lineEdit_prenomaff->text();
    QString age=ui->lineEdit_ageaff->text();
    QString numerotele=ui->lineEdit_numeroteleaff->text() ;
    QString adr=ui->lineEdit_adraff->text();
   QString specialite= ui->lineEdit_specialiteaff->text();
   QString anneeex= ui->lineEdit_anneeexaff->text();


    avocatt v(cin,nom,prenom,age,numerotele,specialite,adr,anneeex);

//test1
   v.setcin(ui->lineEdit_recherche->text()) ;
   bool test=v.modify(v.get_cin());

    if (test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("modification affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;
        ui->tabaffichage->setModel(v.afficher()) ;

        //////////////////////////////////

        QFile file ("C:/Users/amir/Desktop/d-court/court/historique.txt");



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

        out << "modification d'une donnee nomme ' " <<nom<< " ' à la date ' " << datenowst << " ' à l'heure  ' " << timenowst << " '\n" ;

        file.flush();

        file.close ();


    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                 QObject::tr("modification non affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;

     }
}

void avocat::on_pushButton_3_clicked()
{

 avocatt v ;
    ui->tabaffichage->setModel(v.tri()) ;
    bool test=v.tri() ;

    QMessageBox msg ;
    if (test)
    {
     msg.setText("tri affectee");
        ui->tabaffichage->setModel(v.tri());
    }
    else
     msg.setText("tri non affectee");
     msg.exec();
}



void avocat::on_pushButton_clicked()
{
    avocatt v ;
  QString cin = ui->lineEdit_recherche->text() ;
  bool test=v.chercher(cin) ;

  if (cin.isEmpty())
  {
      QMessageBox::critical(0,qApp->tr("erreur"),
       qApp->tr("veillez remplir le champ vide "),QMessageBox::Cancel);
  }
  else
  {
      QMessageBox msgBox ;
      if (test)
      {
          msgBox.setText("element trouve ");

          ui->tabaffichage->setModel(v.chercher(cin)) ;
      }

     else
      msgBox.setText("element trouve ");
      msgBox.exec();
      }

}


void avocat::on_imprimer_clicked()
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
           ui->textEdit_imp->print(&printer);
         }
}




//////////////////////////////////////////////////////
void avocat::on_pushButton_2_clicked()
{


    QFile file ("C:/Users/amir/Desktop/d-court/court/historique.txt");

    if (!file.open(QFile::ReadOnly  | QFile::Text))
        {
        QMessageBox::warning(this, "title","file  not open");
        }
    QTextStream in (&file);
    QString  text  = in.readAll();
    ui->textEdit->setPlainText(text);
       file.flush();
    file.close();
}

void avocat::on_pushButton_5_clicked()
{
    QFile file ("C:/Users/amir/Desktop/d-court/court/historique.txt");

    if (!file.open(QFile::WriteOnly  | QFile::Truncate))
        {
        QMessageBox::warning(this, "title","file  not open");
        }

    file.flush();
    file.close ();

}

/*



void avocat::on_on_clicked()
{
    a.write_to_arduino("1") ;
}

void avocat::on_off_clicked()
{
    a.write_to_arduino("0") ;
}

void avocat::on_pushButton_plus_clicked()
{
    a.write_to_arduino("2") ;
}

void avocat::on_pushButton_moin_clicked()
{
    a.write_to_arduino("3");
}
*/



void avocat::total (int a,  int b, int c, int d, int e, int f, int  g,  int h )
{
    QBarSet *set0 = new QBarSet ("nombres d'articles");


    //**
    QSqlQuery qry;
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","1");
    qry.exec();
    while(qry.next())
        a++;
    //**
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","2");
    qry.exec();
    while(qry.next())
        b++;
    //**
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","3");
    qry.exec();
    while(qry.next())
        c++;
    //**
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","4");
    qry.exec();
    while(qry.next())
        d++;
    //**
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","5");
    qry.exec();
    while(qry.next())
        e++;
    //**
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","6");
    qry.exec();
    while(qry.next())
        f++;
    //**
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","7");
    qry.exec();
    while(qry.next())
        g++;
    //**
    qry.prepare("SELECT * FROM avocat where anneeex=:anneeex");
       qry.bindValue(":anneeex","8");
    qry.exec();
    while(qry.next())
        h++;

    *set0 << a << b << c << d << e << f << g << h;


    QBarSeries *series = new QBarSeries();
    series->append(set0);


    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("graphique à bandes de nombres d'avocat par annee d'experience ");
    chart->setAnimationOptions(QChart::SeriesAnimations);
    QStringList categories;
    categories << "politique" << "sport" << "météo" << "espace" << "filmatographie" << "téchnologie"  << "sante"  << "divers";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chart->createDefaultAxes();
    chart->setAxisX(axis, series);
    QChartView *chartview = new QChartView (chart);

    chartview->setParent(ui->graphe);
    //*******

}




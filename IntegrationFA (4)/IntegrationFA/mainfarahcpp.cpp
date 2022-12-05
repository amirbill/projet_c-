#include "mainfarahcpp.h"
#include "ui_mainfarahcpp.h"
#include "citoyen.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QtPrintSupport/QPrinter>
#include <QPdfWriter>
#include <QPainter>
#include <QDate>
#include<QFileDialog>
#include <QTextDocument>
#include <QTextStream>
#include<QFile>
#include <QSslSocket>
#include <QAbstractSocket>
#include "smtp.h"
/***************CODEQR***************/
#include <QPixmap>
#include<QDirModel>
#include "qrcode.h"
#include <QtSvg/QSvgRenderer>
#include <fstream>
#include<QRegularExpression>
#include "excel.h"
#include "notification.h"
#include <QSystemTrayIcon>
using qrcodegen::QrCode;
MainFarahCpp::MainFarahCpp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainFarahCpp)
{
    ui->setupUi(this);
    //ui->le_cin->setValidator(new QIntValidator(100,999,this));
            ui->tab_Cito->setModel(Cito.afficher()) ;
       //       ui->tab_cito_modifier->setModel(Cito.afficherC()) ;
            ui->fontComboBox->addItem("age");
               ui->fontComboBox->addItem("cin");
            connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
               connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));

   //arduino
            int ret=A1.connect_arduino();
                   switch(ret)
                   {
                   case(0):qDebug()<<"arduino is available and connected to:"<<A1.getarduino_port_name();
                          break;
                   case(1):qDebug()<<"arduino is available but not connected to:"<<A1.getarduino_port_name();
                       break;
                   case(-1):qDebug()<<"arduino is not available";
                       break;
                   }
QObject::connect(A1.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer le slot update_label suite à la reception du signal readyRead (reception des données).


}

MainFarahCpp::~MainFarahCpp()
{
    delete ui;
}


void MainFarahCpp::on_pb_ajouter_clicked()
{ notification N ;
   int cin=ui->le_cin->text().toInt() ;
   int age=ui->le_age->text().toInt() ;
   int tel=ui->le_tel->text().toInt() ;
   QString nom=ui->le_nom->text() ;
   QString prenom=ui->le_prenom->text() ;
   QString adress=ui->le_adr->text() ;

Citoyen Cito(cin,tel,age,adress,nom,prenom);

   bool test=Cito.ajouter(); //etablir la connexion
if(test)
  {
      ui->tab_Cito->setModel(Cito.afficher()) ;
      N.notification_ajoutercitoyen();
    QMessageBox::information(nullptr, QObject::tr("Ok"),
                 QObject::tr("Ajout effectue.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);

 }
     else
    QMessageBox::critical(nullptr, QObject::tr("Not okay"),
                 QObject::tr("connection failed.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainFarahCpp::on_pb_supprimer_clicked()
{ notification N ;
   // int cin=ui->cinsup->text().toInt() ;
    Cito.setcin(ui->cinsup->text().toInt()) ;
    bool test=Cito.supprimer(Cito.getcin()) ;
    QMessageBox msgBox ;
    if(test)
    {
        N.notification_supprimercitoyen();
        msgBox.setText("suppression avec succes") ;
               } else
            msgBox.setText("suppression echoué");
            msgBox.exec() ;
ui->tab_Cito->setModel(Cito.afficher()) ; //refresh maj
}

void MainFarahCpp::on_pb_modifier_clicked()
{ notification N ;
    QString nom=ui->le_nom_2->text() ;
    QString prenom=ui->le_prenom_2->text() ;
    QString adress=ui->le_adress_2->text() ;
    int cin=ui->le_cin_2->text().toInt() ;
    int age=ui->le_age_2->text().toInt() ;
    int tel=ui->le_tel_2->text().toInt() ;

  Citoyen Cito(cin,tel,age,nom,prenom,adress);
  //Cito.setcin(ui->le_cin_2->text().toInt()) ;
  bool test=Cito.modifier() ;

    QMessageBox msgBox;

    if(test)
       { N.notification_modifiercitoyen();
        msgBox.setText("Modification avec succes.");
      ui->tab_Cito->setModel(Cito.afficher()) ;

       }
    else
        msgBox.setText("Echec de Modification.!!!");
        msgBox.exec();
}

/*void MainWindow::on_pb_modifier_2_clicked()
{
    QString nom=ui->le_nom->text() ;
    QString prenom=ui->le_prenom->text() ;
    QString adress=ui->le_adr->text() ;
    int cin=ui->le_cin->text().toInt() ;
    int age=ui->le_age->text().toInt() ;
    int tel=ui->le_tel->text().toInt() ;


  Citoyen Cito(cin,tel,age,nom,prenom,adress);
  Cito.setcin(ui->le_cin->text().toInt()) ;
  bool test=Cito.modifier() ;

    QMessageBox msgBox;

    if(test)
       {
        msgBox.setText("Modification avec succes.");
      ui->tab_Cito->setModel(Cito.afficher()) ;
       }
    else
        msgBox.setText("Echec de Modification.!!!");
        msgBox.exec();
}
*/

void MainFarahCpp::on_recher_clicked()
{
    int cin=(ui->line->text().toInt());
          ui->tab_Cito->setModel(Cito.rechercheC(cin));
}

void  MainFarahCpp::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   MainFarahCpp::sendMail()
{
    Smtp* smtp = new Smtp("farah.bennasr@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("farah.bennasr@esprit.tn", ui->rcpt->text() , ui->subject->text() ,ui->msg->text(), files );
    else
        smtp->sendMail("farah.bennasr@esprit.tn", ui->rcpt->text() , ui->subject->text(),ui->msg->text());
}
void  MainFarahCpp::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

void MainFarahCpp::on_pb_code_clicked()
{ Citoyen Cito ;
    if(ui->tab_Cito->currentIndex().row()==-1)
               QMessageBox::information(nullptr, QObject::tr("Suppression"),
                                        QObject::tr("Veuillez Choisir un citoyen du Tableau.\n"
                                                    "Click Ok to exit."), QMessageBox::Ok);
           else
           {




                       Cito.setcin(ui->le_cin->text().toInt());
                       Cito.setnom(ui->le_nom ->text());
                       Cito.setprenom(ui->le_prenom ->text());
                       Cito.setage(ui->le_age ->text().toInt());
                       Cito.settel(ui->le_tel ->text().toInt());
                       Cito.setadress(ui->le_adr ->text());





             QString  rawQr = "ID_CITOYEN:%1 Nom_Citoyen:%2 prenom:%3 Age:%4 tel:%5 adress:%6 " ;
                rawQr = rawQr.arg(  Cito.getcin()).arg(  Cito.getnom()).arg(  Cito.getprenom()).arg(  Cito.getage()).arg(  Cito.gettel()).arg(  Cito.getadress());
                QrCode qr = QrCode::encodeText(rawQr.toUtf8().constData(), QrCode::Ecc::HIGH);                                       //coder la chaine d'entre en forme QR


              //  const QrCode qr = QrCode::encodeText(std::to_string(idAnim).c_str(), QrCode::Ecc::LOW);
                std::ofstream myfile;
                myfile.open ("qrcode.svg") ;
                myfile << qr.toSvgString(1);
                myfile.close();
                QSvgRenderer svgRenderer(QString("qrcode.svg"));                                                               ///rendre l'image

                QPixmap pix( QSize(140, 140) );
                QPainter pixPainter( &pix );
                svgRenderer.render( &pixPainter );
                ui->label_qrcode->setPixmap(pix);
           }
}

void MainFarahCpp::on_pb_excel_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                            tr("Excel Files (*.xls)"));
            if (fileName.isEmpty())
                return;

            ExportExcelObject obj(fileName, "mydata", ui->tab_Cito);   ///

            //colums to export
            obj.addField(0, "cin", "char(20)");
            obj.addField(1, "tel", "char(20)");
            obj.addField(2, "nom", "char(20)");
            obj.addField(3, "prenom", "char(20)");
            obj.addField(4, "age", "char(20)");
            obj.addField(5, "adresse", "char(20)");
            int retVal = obj.export2Excel();
            if( retVal > 0)
            {
                QMessageBox::information(this, tr("Done"),
                                         QString(tr("%1 records exported!")).arg(retVal)
                                         );
            }

}
void MainFarahCpp::update_label()
{   notification N ;
    data=A1.read_from_arduino();
    if(data!="")
    {
    qDebug()<<data;
    int test=A1.chercherid(data);
        if(test==1)
    {
            N.notification_ouverture();
            ui->label_3arduino->setText("OUVERT"); // si les données reçues de arduino via la liaison série sont égales à 1
             // QMessageBox::information(this, tr("Card is valid!"), "ACCESS GIVEN , welcome");
    A1.write_to_arduino("1");
    }
        else if (test!=1)

           {
                A1.write_to_arduino("0");
            N.notification_fermeture();
            ui->label_3arduino->setText("FERMER");
         //alors afficher fermer
    }
    }


}
void MainFarahCpp::on_pushButton_clicked()
{
    QString strStream;
            strStream = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
                if (QFileInfo(strStream).suffix().isEmpty())
                    { strStream.append(".pdf"); }

                QPrinter printer(QPrinter::PrinterResolution);
                printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setPaperSize(QPrinter::A4);
                printer.setOutputFileName(strStream);

                      QTextStream out(&strStream);

                      const int rowCount = ui->tab_Cito->model()->rowCount();
                      const int columnCount = ui->tab_Cito->model()->columnCount();
                      QString TT = QDateTime::currentDateTime().toString();
                      out <<"<html>\n"
                            "<head>\n"
                             "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                          << "<title>ERP - COMmANDE LIST<title>\n "
                          << "</head>\n"
                          "<body bgcolor=#ffffff link=#5000A0>\n"
                             "<h1 style=\"text-align: center;\"><strong> "+TT+"</strong></h1>"
                            +"<img src=C:\\Users\\asus\\Desktop\\pdf\\logo_projet />" //path
                          "<h1 style=\"text-align: center;\"><strong> *****LISTE DES CITOYENS ***** </strong></h1>"

                          "<table style=\"text-align: center; font-size: 10px;\" border=1>\n "
                            "</br> </br>";
                      // headers
                      out << "<thead><tr bgcolor=#d6e5ff>";
                      for (int column = 0; column < columnCount; column++)
                          if (!ui->tab_Cito->isColumnHidden(column))
                              out << QString("<th>%1</th>").arg(ui->tab_Cito->model()->headerData(column, Qt::Horizontal).toString());
                      out << "</tr></thead>\n";

                      // data table
                      for (int row = 0; row < rowCount; row++) {
                          out << "<tr>";
                          for (int column = 0; column < columnCount; column++)
                        {
                              if (!ui->tab_Cito->isColumnHidden(column)) {
                                  QString data =ui->tab_Cito->model()->data(ui->tab_Cito->model()->index(row, column)).toString().simplified();
                                  out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;")); //pas compriis
                              }
                          }
                          out << "</tr>\n";
                      }
                      out <<  "</table>\n"
                          "</body>\n"
                          "</html>\n";

                      QTextDocument document;
                      document.setHtml(strStream);
                      document.print(&printer);

}

void MainFarahCpp::on_trier_clicked()
{
    Citoyen Cito ;
        QString nom=ui->fontComboBox->currentText();
            if (ui->croissant->isChecked())
            {
            ui->tab_Cito->setModel(Cito.trierC(nom));
            }
            else if (ui->decroissant->isChecked())
            {
            ui->tab_Cito->setModel(Cito.trier2(nom));
            }
}

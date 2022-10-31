#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "citoyen.h"
#include <QMessageBox>
#include <QIntValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->le_cin->setValidator(new QIntValidator(100,999,this));
            ui->tab_Cito->setModel(Cito.afficher()) ;
       //       ui->tab_cito_modifier->setModel(Cito.afficherC()) ;
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
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
    QMessageBox::information(nullptr, QObject::tr("Ok"),
                 QObject::tr("Ajout effectue.\n"
                             "Click Cancel to exit."), QMessageBox::Cancel);

 }
     else
    QMessageBox::critical(nullptr, QObject::tr("Not okay"),
                 QObject::tr("connection failed.\n"
                        "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pb_supprimer_clicked()
{
   // int cin=ui->cinsup->text().toInt() ;
    Cito.setcin(ui->cinsup->text().toInt()) ;
    bool test=Cito.supprimer(Cito.getcin()) ;
    QMessageBox msgBox ;
    if(test)
        msgBox.setText("suppression avec succes") ;
                else
            msgBox.setText("suppression echoué");
            msgBox.exec() ;
ui->tab_Cito->setModel(Cito.afficher()) ; //refresh maj
}





void MainWindow::on_pb_modifier_clicked()
{
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
       {
        msgBox.setText("Modification avec succes.");
      ui->tab_Cito->setModel(Cito.afficher()) ;
       }
    else
        msgBox.setText("Echec de Modification.!!!");
        msgBox.exec();
}

void MainWindow::on_pushButtondel_clicked()
{
    QListWidgetItem *it=ui->listWidget->takeItem(selected) ;
    delete it ;

}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
    selected = currentRow;
}





void MainWindow::on_pb_modifier_2_clicked()
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

/*void MainWindow::on_comboBox_activated()
{
    if(ui->comboBox_trier->currentText()=="tri par cin")
            ui->tab_cito->setModel(Cito.trierCcin());
        if(ui->comboBox_trier->currentText()=="tri par age")
            ui->tab_cito->setModel(Cito.trierCAge()) ;

} */

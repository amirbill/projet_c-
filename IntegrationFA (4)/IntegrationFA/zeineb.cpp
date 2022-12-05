#include "zeineb.h"
#include "ui_zeineb.h"
#include "employe.h"
#include "conges.h"
#include <QMessageBox>
#include<QIntValidator>
#include<QString>
#include <QSqlQuery>
#include<QtPrintSupport/QPrinter>
#include<QtPrintSupport/QPrintDialog>
#include <QPrinter>

zeineb::zeineb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zeineb)

{
    ui->setupUi(this);
    ui->tab_employe->setModel(e.afficher());
    ui->tab_prime->setModel(e.afficher_prime());

}

zeineb::~zeineb()
{
    delete ui;
}

void zeineb::on_pushButton_ajouter_clicked()
{
    int cin=ui->CIN->text().toInt();
      int telephone=ui->telephone->text().toInt();
      int salaire=ui->salaire->text().toInt();
      int note=ui->note->text().toInt();
      int j_d_c=ui->joursdeconges->text().toInt();
      QString nom=ui->nom->text() ;
      QString prenom=ui->prenom->text() ;
      QString date_n=ui->datedenaissance->text() ;
      QString addresse=ui->addresse->text() ;
      QString date_e=ui->datedemboche->text() ;
      QString role=ui->role->text() ;


      employe E( nom , prenom ,  date_n ,  addresse , role , date_e , cin ,  telephone ,  salaire ,  note ,  j_d_c);
      bool test = E.ajouter();

      if (test)
      { ui->tab_employe->setModel(e.afficher());
          ui->tab_prime->setModel(e.afficher_prime());
          QMessageBox::information(nullptr, QObject::tr("OK"),
                      QObject::tr("Ajout effectué\n"
                                  "Click cancel to exit."),QMessageBox::Cancel);
      }
      else
          QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                      QObject::tr("Ajout non effectué\n"
                                  "Click cancel to exit."),QMessageBox::Cancel);


}

void zeineb::on_pushButton_supprimer_clicked()
{
    int cin=ui->lineEdit_CIN_4->text().toInt();
    bool test=e.supprimer(cin);



    if (test)
    {  ui->tab_employe->setModel(e.afficher());
        ui->tab_prime->setModel(e.afficher_prime());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Supprission effectué\n"
                                "Click cancel to exit."),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Supprission non effectué\n"
                                "Click cancel to exit."),QMessageBox::Cancel);

}

void zeineb::on_pushButton_modifier_clicked()
{
    Etmp.setcin(ui->CIN_2->text().toInt());
    int cin=ui->CIN_2->text().toInt();
    int telephone=ui->telephone_2->text().toInt();
    int salaire=ui->salaire_2->text().toInt();
    int note=ui->note_2->text().toInt();
    int j_d_c=ui->joursdeconges_2->text().toInt();
    QString nom=ui->nom_2->text() ;
    QString prenom=ui->prenom_2->text() ;
    QString date_n=ui->datedenaissance_2->text() ;
    QString addresse=ui->addresse_2->text() ;
    QString date_e=ui->datedemboche_2->text() ;
    QString role=ui->role_2->text() ;


     employe E1(nom ,prenom , date_n ,addresse ,role ,date_e ,cin , telephone , salaire , note ,j_d_c);

    bool test =E1.modifier(cin);

              if (test)
              {
                  ui->tab_employe->setModel(e.afficher());
                  ui->tab_prime->setModel(e.afficher_prime());
                  QMessageBox::information(nullptr, QObject::tr("OK"),
                              QObject::tr("Modification effectué\n"
                                          "Click cancel to exit."),QMessageBox::Cancel);
              }
              else
              {
                  QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Modification non effectué\n"
                                          "Click cancel to exit."),QMessageBox::Cancel);
              }
ui->tab_employe->setModel(e.afficher()) ;
}

void zeineb::on_trier_clicked()
{
    ui->tab_employe->setModel(e.tri());
    bool test=e.tri();
    QMessageBox msgBox;
    if(test)
       {
        msgBox.setText("tri effectué avec succès");
        ui->tab_employe->setModel(e.tri());
       }
    else
        msgBox.setText("Echec de tri");
    msgBox.exec();
}

void zeineb::on_ajouter_conge_clicked()
{
    int cin=ui->cin->text().toInt();
    int id_c=ui->id->text().toInt();
    int nombre_jours=ui->nj->text().toInt();
    QString type=ui->type->text() ;

    Conges C(cin,id_c,nombre_jours,type);
    bool test = C.ajouter();
    if (test)
    {
        ui->recherche_2->setModel(c.rechercher(cin));
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué\n"
                                "Click cancel to exit."),QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Ajout non effectué\n"
                                "Click cancel to exit."),QMessageBox::Cancel);

}

void zeineb::on_pushButton_chercher_2_clicked()
{
    int cin=ui->lineEditCIN_6->text().toInt();
        bool test=c.rechercher(cin);
        bool test2=e.rechercher2(cin);


        if (test)
        {
             ui->recherche_2->setModel(c.rechercher(cin));
             ui->sum->setModel(c.conges(cin));
             ui->tableView_2->setModel(e.rechercher2(cin));
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("recherche effectué\n"
                                    "Click cancel to exit."),QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                        QObject::tr("recherche non effectué\n"
                                    "Click cancel to exit."),QMessageBox::Cancel);
}

void zeineb::on_imprimer_clicked()
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

void zeineb::on_pushButton_chercher_3_clicked()
{
    int cin=ui->lineEditCIN_7->text().toInt();
        bool test=e.recherche_prime(cin);


        if (test)
        {

             ui->tab_prime->setModel(e.recherche_prime(cin));
            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("recherche effectué\n"
                                    "Click cancel to exit."),QMessageBox::Cancel);

        }
        else
            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                        QObject::tr("recherche non effectué\n"
                                    "Click cancel to exit."),QMessageBox::Cancel);
}

void zeineb::on_pushButton_chercher_4_clicked()
{
    int cin=ui->lineEditCIN_8->text().toInt();
    bool test=e.rechercher(cin);


    if (test)
    {
         ui->tab_employe->setModel(e.rechercher(cin));
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("recherche effectué\n"
                                "Click cancel to exit."),QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("recherche non effectué\n"
                                "Click cancel to exit."),QMessageBox::Cancel);
}

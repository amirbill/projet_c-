#include "avocat.h"
#include "ui_avocat.h"
#include "avocatt.h"
#include "dialog.h"
#include"QMessageBox"
#include <QString>
#include "connection.h"
#include<QIntValidator>

avocat::avocat(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::avocat)
{
    ui->setupUi(this);
    //ui->lineEdit_t1cin->setValidator(new QIntValidator(0,99999999,this)) ;
    ui->tabaffichage->setModel(o.afficher());
}

avocat::~avocat()
{
    delete ui;
}




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


   v.setcin(ui->lineEdit_recherche->text()) ;
   bool test=v.modify(v.get_cin());

    if (test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("modification affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;
        ui->tabaffichage->setModel(v.afficher()) ;

    }
    else
    {
        QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                 QObject::tr("modification non affectee \n"
                                                       "click cancel to exit "),QMessageBox::Cancel) ;

}


  /* QSqlQuery query ;

        query.prepare("UPDATE AVOCAT SET cin='"+cin+"' ,nom='"+nom+"' ,prenom='"+prenom+"',age='"+age+"',numerotele='"+numerotele+"',specialite='"+specialite+"',adr='"+adr+"',anneeex='"+anneeex+"'  WHERE cin ='"+cin+"' ");

                if (query.exec())
                {
                    QMessageBox::information(nullptr,QObject::tr("OK"),
                                             QObject::tr("modification affectee \n"
                                                                   "click cancel to exit "),QMessageBox::Cancel) ;

                }
                else
                {
                    QMessageBox::critical(nullptr,QObject::tr("NOT OK"),
                                             QObject::tr("modification non affectee \n"
                                                                   "click cancel to exit "),QMessageBox::Cancel) ;



}*/
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
  bool test=v.chercher() ;

  if (cin.isEmpty())
  {
      QMessageBox::critical(0,qApp->tr("erreur"),qApp->tr("veillez remplir le champ vide "),QMessageBox::Cancel);
  }
  else
  {
      QMessageBox msgBox ;
      if (test)
      {
          msgBox.setText("element trouve ");

          ui->tabaffichage->setModel(v.chercher()) ;
      }

     else
      msgBox.setText("element trouve ");
      msgBox.exec();

  }
}


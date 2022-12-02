#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainfarahcpp.h"
#include "mainarijcpp.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    QString login=ui->lineEdit_login->text() ;
    QString mdp=ui->lineEdit_mdp->text() ;
 QSqlQuery qry ;

 if(qry.exec("SELECT * FROM LOGIN WHERE ID_L='"+login+"'and MDP_L='"+mdp+"'"))
 {

         if(login==id_farah )
         {
             if(mdp==mdp_farah )
             {


         QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Password is correct.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel) ;

         this->hide() ;
     MainFarahCpp f ;
         f.setModal(true) ;
         f.exec() ;
             }
             else
             {
                     QMessageBox::critical(nullptr, QObject::tr("not OK"),
                                 QObject::tr("ID or Password are not correct .\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
             }
         }
         if(login==id_arij )
         {
             if(mdp==mdp_arij )
               {


                     QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Password is correct.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel) ;

                     this->hide() ;
                  mainarijcpp r ;
                     r.setModal(true) ;
                     r.exec() ;
                         }

         else {


             QMessageBox::critical(nullptr, QObject::tr("not OK"),
                         QObject::tr("ID  is not correct .\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);
         }
        }
}
}

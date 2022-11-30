#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include "connection.h"
#include "citoyen.h"
#include "login.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //   MainWindow w;
    Citoyen C ;
    Connection c; //une seule instance de la classe connection
    bool test=c.createconnect(); //etablir la connexion
       MainWindow w;
       login l ;
       l.exec() ;
   if(test)
    {w.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                   QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}
   else  //si la co est echoue
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
           QObject::tr("connection failed.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
   return a.exec() ;
}




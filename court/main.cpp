#include "avocat.h"
#include <QApplication>
#include "connection.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c ;
    bool test =c.createconnecion() ;
    avocat v;
    if (test)
    {
          v.show();
          QMessageBox::information(nullptr,QObject::tr("database is open"),
                                   QObject::tr("connection successful \n"
                                                         "click cancel to exit "),QMessageBox::Cancel) ;

    }
    else
        QMessageBox::critical(nullptr,QObject::tr("database is not open"),
        QObject::tr("connection failed \n"
                                    "click cancel to exit "),QMessageBox::Cancel) ;
    return a.exec();

}

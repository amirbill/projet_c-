#include "connection.h"
#include <QObject>
#include <QWidget>
#include<QSqlDatabase>
#include "QSqlQuery"
connection::connection()
{

}

bool connection::createconnecion()
{

        QSqlDatabase bd=QSqlDatabase::addDatabase("QODBC");
        bool test=false ;
        bd.setDatabaseName("source_projet2A28");
        bd.setUserName("system");
        bd.setPassword("amir2934141300");

        if (bd.open())
        {
            test=true ;
        }
         return test ;
 }

void connection::closeconnection()
{
    db.close() ;
}


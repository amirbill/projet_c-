#ifndef CONNEXION_MYSQL_H
#define CONNEXION_MYSQL_H
#include <QMessageBox>
#include "QSqlDatabase"
#include "QSqlQuery"
#include "connexion_mysql.h"

 bool vraiconnexionbd()
{
    QSqlDatabase bd=QSqlDatabase::addDatabase("QODBC");
    bd.setDatabaseName("court_projet2a28");
    bd.setUserName("amir");
    bd.setPassword("amircourt");

    if (bd.open())
    {
        return true;
    }
    else
    {
        return false;
    }

}

#endif // CONNEXION_MYSQL_H

#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{
    bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("EMPLOYE");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("01091997");//inserer mot de passe de cet utilisateur


if (db.open())
test=true;


    return  test;
}
//void Connection::closeConnection() {db.close();}

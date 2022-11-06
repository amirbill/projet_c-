#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include "QSqlQuery"
#include <QObject>
#include <QWidget>

class connection
{
   // Q_OBJECT
    QSqlDatabase db ;
public:
    connection();

    bool createconnecion();
    void closeconnection();
};

#endif // CONNECTION_H

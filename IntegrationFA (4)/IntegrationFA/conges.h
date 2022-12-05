#ifndef CONGES_H
#define CONGES_H
#include<QString>
#include<QSqlQueryModel>


class Conges
{
public:
    Conges();
    Conges(int cin , int id_c , int nombre_jours , QString type);

    void setcin(int cin);
    void setid_c(int id_c);
    void setnj(int nombre_jours);
    void settype(QString type);

    int getcin();
    int getid_c();
    int getnj();
    QString gettype();


    bool ajouter();
    QSqlQueryModel* rechercher(int cin);
    QSqlQueryModel* conges(int cin);





private:
    int CIN;
    int ID_C;
    int Nombre_Jours;
    QString Type;
};

#endif // CONGES_H


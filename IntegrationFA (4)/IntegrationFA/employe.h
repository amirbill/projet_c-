#ifndef EMPLOYE_H
#define EMPLOYE_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include "conges.h"



class employe
{
public:
    employe();

    employe(QString nom ,QString prenom , QString date_n , QString addresse ,QString role ,QString date_e ,int cin , int telephone , int salaire , int note , int j_d_c);
       int Prime = 0;
        Conges c;
        void setcin(int cin );
        void setnom (QString nom);
        void setprenom (QString prenom);
        void setdate_n (QString date_n);
        void setaddresse (QString addresse);
        void settelephone (int telephone);
        void setrole (QString role);
        void setdate_e (QString date_e);
        void setsalaire (int salaire);
        void setnote (int note);
        void setj_d_c (int j_d_c);
        void setprime(int prime);



        int getcin();
        QString getnom ();
        QString getprenom ();
        QString getdate_n ();
        QString getaddresse ();
        int gettelephone ();
        QString getrole ();
        QString getdate_e ();
        int getsalaire ();
        int getnote ();
        int getj_d_c ();
        int getprime();

        bool ajouter();
        bool supprimer(int cin);
       bool modifier(int cin);
       bool modifier() ;


        QSqlQueryModel* afficher();
        QSqlQueryModel* rechercher(int cin);
        QSqlQueryModel* tri();
        QSqlQueryModel* afficher_prime();
        QSqlQueryModel* rechercher2(int cin);
        QSqlQueryModel* recherche_prime(int cin);





private:
        QString Nom = " " ;
        QString Prenom =" " ;
        QString Date_n  =" " ;
        QString Addresse =" " ;
        QString Role = " " ;
        QString Date_e = " " ;
        int CIN = 0;
        int Telephone = 0 ;
        int Salaire = 0 ;
        int Note = 0 ;
        int J_d_c = 0;

};

#endif // EMPLOYE_H

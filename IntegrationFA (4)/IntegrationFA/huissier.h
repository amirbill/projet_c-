#ifndef HUISSIER_H
#define HUISSIER_H


#include <QString>
#include <QSqlQueryModel>
#include <QDate>

class huissier
{
public:
    huissier();
    huissier(QString,QString,QString,QString,QString,QDate,QString,QString,QString );
    QString getid();
    QString getlieu();
    QString getsalle();
    QString getcitoyen();
    QString getprenom();
    QString getdate_session();
    QString gettype();

    void setid(QString);
    void setlieu(QString) ;
    void setsalle(QString);
    void setcitoyen(QString);
    void setprenom(QString);
    void setdate_session(QDate);
    void settype(QString);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
    bool update();
    QSqlQueryModel* Rechercher(QString);
    QSqlQueryModel* tri();
     QSqlQueryModel* triprenom();
      QSqlQueryModel* trisalle();
    void genererPDFact();


private:
    QString id;
    QString citoyen,prenom,lieu,salle,username,password,type;
    QDate date_session;

};

#endif // HUISSIER_H

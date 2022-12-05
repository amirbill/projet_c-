#include "citoyen.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
/********************** ta3 pdf ***************/
#include <QPdfWriter>
#include <QPainter>
#include <QDesktopServices>
#include <QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include<QFile>
#include<QFileDialog>
#include <QMessageBox>
#include <QSslSocket>
#include <QAbstractSocket>

Citoyen::Citoyen()
{
cin=0 ; tel=0 ; age=0 ;nom=" " ; prenom=" " ,adress=" " ;
}

Citoyen::Citoyen(int CIN,int TEL,int AGE, QString NOM,QString PRENOM,QString ADRESS)
{ this->cin=CIN ;
    this->tel=TEL ;
   this->age=AGE;
    this->nom=NOM ;
    //   this->date=DATE ;
    this->prenom=PRENOM;
    this->adress=ADRESS;
}
bool Citoyen::recherchercitoyen(int cin)
{
    QString refer=QString::number(cin);
    QSqlQuery q("select * from CITOYEN where CIN="+refer);
    while(q.next())
    {
        return true;
    }
    return false;
}

bool Citoyen::ajouter()
{
  QSqlQuery query;
  QString cin_string= QString::number(cin);
  QString age_string= QString::number(age);
  QString tel_string= QString::number(tel);

        query.prepare("INSERT INTO CITOYEN (CIN,TEL, NOM, PRENOM,ADRESS,AGE) "
                      "VALUES (:CIN ,:TEL,:NOM, :PRENOM,:ADRESS,:AGE)");
        query.bindValue(":CIN", cin_string);
          query.bindValue(":AGE", age_string);
           query.bindValue(":TEL", tel_string);
        query.bindValue(":NOM", nom);
        query.bindValue(":PRENOM", prenom);
       query.bindValue(":ADRESS", adress);


       return query.exec();

}
QSqlQueryModel * Citoyen::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
          model->setQuery("SELECT* FROM CITOYEN");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("ADRESS"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("AGE"));
          return model ;

}
QSqlQueryModel * Citoyen::afficherC()
{
    QSqlQueryModel* model=new QSqlQueryModel() ;
          model->setQuery("SELECT* FROM CITOYEN");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));
          return model ;

}
bool Citoyen::supprimer(int cin)
{
    QSqlQuery query;
   // QString res=QString::number(cin) ;
    query.prepare("Delete from CITOYEN where CIN= :CIN");
    query.bindValue(0 ,cin) ;
      return query.exec();

}
bool Citoyen::modifier()
{
    QSqlQuery query;
  //  QString res= QString(cin);
    QString CIN_STRING=QString::number(cin);
    QString TEL_STRING= QString::number(tel);
   QString AGE_STRING= QString::number(age);
    query.prepare("UPDATE CITOYEN SET CIN='"+CIN_STRING+"',TEL='"+TEL_STRING+"',AGE='"+AGE_STRING+"',NOM='"+nom+"',ADRESS='"+adress+"',PRENOM='"+prenom+"' WHERE CIN='"+CIN_STRING+"'");

     query.bindValue(0,CIN_STRING);
       query.bindValue(1,TEL_STRING);
       query.bindValue(2, nom );
      query.bindValue(3, prenom);
      query.bindValue(4, adress );
    query.bindValue(5,AGE_STRING);

      return query.exec();
    //recherchercitoyen(cin) ;
}
QSqlQueryModel* Citoyen::rechercheC(int cin)

 {
    QSqlQueryModel* model=new QSqlQueryModel() ;
        QString cin_string = QString::number(cin);

       model->setQuery("select * from citoyen where CIN='"+cin_string+"'");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
       model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));



       return model;
}
QSqlQueryModel* Citoyen::trierC(QString nom)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    if (nom=="age")

    {
    model->setQuery("select * from citoyen  order by  cin asc");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));

}
   if (nom=="cin")
{model->setQuery("select *FROM CITOYEN ORDER BY CIN ASC");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));

}
return model;
}
QSqlQueryModel* Citoyen::trier2(QString nom)
  {

     QSqlQueryModel* model=new QSqlQueryModel() ;

     if (nom=="cin")
  {model->setQuery("select *FROM CITOYEN ORDER BY CIN DESC");
            model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
            model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
            model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
            model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
            model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));

  }
     if (nom=="age")

     {
     model->setQuery("select * from citoyen  order by  cin desc");

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("TEL"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRENOM"));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESS"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("AGE"));

}
      return model ;
}
void Citoyen::CREATION_PDF()
{
    QString fileName = QFileDialog::getSaveFileName((QWidget* )0, "Export PDF", QString(), "*.pdf");
    if (QFileInfo(fileName).suffix().isEmpty())
        { fileName.append(".pdf"); }

    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPaperSize(QPrinter::A4);
    printer.setOutputFileName(fileName);

    QTextDocument doc;
    QSqlQuery q;
    q.prepare("SELECT * FROM CITOYEN ");
    q.exec();
    QString pdf="<br> <h1  style='color:blue'>LISTE DES CITOYENS  <br></h1>\n <br> <table>  <tr>  <th>CIN </th> <th>NOM </th> <th>PRENOM  </th> <th>AGE  </th><th>TEL  </th><th>ADRESS   </th> </tr>" ;
//br traja ll star oel tr tzidlek colonne th tzidlek ligne h1 asghrr size o akbr size h6 //

    while ( q.next())
        {

        pdf= pdf+ " <br> <tr> <td>"+ q.value(0).toString()+" " + q.value(1).toString() +"</td>   <td>" +q.value(2).toString() +" <td>" +q.value(3).toString() +" <td>" +q.value(4).toString() +" <td>" +q.value(5).toString() +" "" " "</td> </td>" ;
    }
    doc.setHtml(pdf);
    doc.setPageSize(printer.pageRect().size()); // This is necessary if you want to hide the page number
    doc.print(&printer);


}


int Citoyen:: getcin() {return cin;}
int Citoyen:: getage()  {return age;}
int Citoyen::gettel() {return tel;}
QString Citoyen::getnom() {return nom;}
QString Citoyen::getprenom()  {return prenom;}
QString Citoyen::getadress()  {return adress;}

void  Citoyen:: setcin(int cin) {this->cin=cin;}
void  Citoyen:: setage(int age) {this->age=age;}
void  Citoyen::settel(int tel) {this->tel=tel;}
void  Citoyen::setnom(QString nom) { this->nom=nom;}
void Citoyen:: setprenom ( QString prenom) { this->prenom=prenom;}
void Citoyen:: setadress( QString adress) {this->adress=adress;}


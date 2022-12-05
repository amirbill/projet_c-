#include "oussema.h"
#include "arduino.h"
#include "ui_oussema.h"
#include "huissier.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QPdfWriter>
#include <QPainter>
#include <QDesktopServices>
#include <QtPrintSupport/QPrinter>
#include <QFileDialog>
#include <QTextDocument>
#include <QDateTime>
#include <QTextStream>
#include <QtDebug>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QMainWindow>
#include <QtCharts/QPieSlice>
oussema::oussema(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::oussema)
{
    //ui->setupUi(this);
     ui->setupUi(this);

    //ui->stackedWidget->setCurrentIndex(0);
    ui->le_id_ouss->setValidator(new QIntValidator(0, 99999, this));
   ui->TableView_ouss->setModel(h.afficher());

   int ret=A.connect_arduino(); // lancer la connexion a arduino
   switch(ret){
   case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
   break;
   case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
   break;
   case(-1):qDebug() << "arduino is not available";
   }
   QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
   // permet de lancer le slot update_label suite a la reception du signal readyRead (reception des donnees).

}

oussema::~oussema()
{
    delete ui;
}
/*******/






/////////////////////////////////////////////////////////////////////////////////////////

void oussema::on_pushButton_ajout_ouss_clicked()
{
    QString id=ui->le_id_ouss->text();
    QString lieu=ui->le_lieu_ouss->text();
    QString salle=ui->le_salle_ouss->text();
    QString citoyen=ui->le_citoyen_ouss->text();
    QString prenom=ui->le_prenom_ouss->text();
    QDate date_session=ui->dateEdit_ajout_ouss->date();
    QString mdp = ui->le_mdp_ouss->text();
    QString un = ui->le_nom_utilisateur_ouss->text();
    QString type = ui->comboBox_type_ajout_ouss->currentText();

    huissier h(id, lieu,salle,  citoyen, prenom, date_session,un,mdp,type);
    bool test=h.ajouter();
    if(test)
       {
                msgBox.setText("Ajout avec succes.");
                ui->TableView_ouss->setModel(h.afficher());

        }
    else
            msgBox.setText("Echec de l'ajout.");

   msgBox.exec();
}

void oussema::on_pushButton_annuler_ouss_clicked()
{
    ui->le_id_ouss->clear();
    ui->le_citoyen_ouss->clear();
   ui->le_mdp_ouss->clear();
    ui->le_prenom_ouss->clear();
   ui->le_nom_utilisateur_ouss->clear();
    ui->le_salle_ouss->clear();
    ui->le_lieu_ouss->clear();
}

void oussema::on_pb_supprimer_ouss_clicked()
{
    QString id_supp = ui->le_id_supp_ouss->text();
    bool test = h.supprimer(id_supp);
    if(test)
    {
        msgBox.setText("Suppression avec succes.");
        ui->TableView_ouss->setModel(h.afficher());
    }
    else
        msgBox.setText("Echec de suppression.");

    msgBox.exec();
}

void oussema::on_pushButton_modif_ouss_clicked()
{
    QString id=ui->le_id_ouss_mod->text();
    QString lieu=ui->le_lieu_ouss_mod->text();
    QString salle=ui->le_salle_ouss_mod->text();
    QString citoyen=ui->le_citoyen_ouss_mod->text();
    QString prenom=ui->le_prenom_ouss_mod->text();
    QDate date_session=ui->dateEdit_ajout_ouss_mod->date();
    QString mdp = ui->le_mdp_ouss_mod->text();
    QString un = ui->le_nom_utilisateur_ouss_mod->text();
    QString type = ui->comboBox_type_ouss_mod->currentText();

    huissier h(id,lieu,salle,citoyen,prenom,date_session,un,mdp,type);

    bool test=h.update();
    if (test)
        {
              QMessageBox::information(nullptr, QObject::tr("OK"),
                          QObject::tr("modification effectué.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);
              ui->TableView_ouss->setModel(h.afficher());


        }
          else
              QMessageBox::critical(nullptr, QObject::tr("not OK"),
                          QObject::tr("modification non effectué.\n"
                                      "Click Cancel to exit."), QMessageBox::Cancel);

}

void oussema::on_pb_recherche_ouss_clicked()
{
           QString search=ui->le_recherche_ouss->text();
           ui->TableView_ouss->setModel(h.Rechercher(search));
}

void oussema::on_pushButton_trierid_ouss_clicked()
{
    huissier E;

    ui->TableView_ouss->setModel(E.tri());

    bool test=h.tri();
    if(test){
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("tri effectué. \n"
                                             "click Cancel to exist."),QMessageBox::Cancel);

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("not OK"),
                    QObject::tr("tri non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void oussema::on_pushButton_trierprenom_ouss_clicked()
{
    huissier h;

    ui->TableView_ouss->setModel(h.triprenom());

    bool test=h.tri();
    if(test){
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("tri effectué. \n"
                                             "click Cancel to exist."),QMessageBox::Cancel);

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("not OK"),
                    QObject::tr("tri non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void oussema::on_pushButton_triersalle_ouss_clicked()
{
    huissier h;

    ui->TableView_ouss->setModel(h.trisalle());

    bool test=h.tri();
    if(test){
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("tri effectué. \n"
                                             "click Cancel to exist."),QMessageBox::Cancel);

    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("not OK"),
                    QObject::tr("tri non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void oussema::on_pushButton_excel_ouss_clicked()
{
    QTableView *table;
                   table = ui->TableView_ouss;

                   QString filters("CSV files (.csv);;All files (.*)");
                   QString defaultFilter("CSV files (*.csv)");
                   QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                      filters, &defaultFilter);
                   QFile file(fileName + ".csv");

                   QAbstractItemModel *model =  table->model();
                   if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                       QTextStream data(&file);
                       QStringList strList;
                       for (int i = 0; i < model->columnCount(); i++) {
                           if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                               strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                           else
                               strList.append("");
                       }
                       data << strList.join(";") << "\n";
                       for (int i = 0; i < model->rowCount(); i++) {
                           strList.clear();
                           for (int j = 0; j < model->columnCount(); j++) {

                               if (model->data(model->index(i, j)).toString().length() > 0)
                                   strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                               else
                                   strList.append("");
                           }
                           data << strList.join(";") + "\n";
                       }
                       file.close();
                       QMessageBox::information(this,"Exporter To Excel","Exporter En Excel Avec Succées ");
                   }
}

void oussema::on_pushButton_pdf_ouss_clicked()
{
    QSqlQuery query;


       QString id=ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(ui->TableView_ouss->currentIndex().row(),0)).toString();

       QPdfWriter pdf("C:/Users/Asus/Desktop/huissier.pdf");
           QPainter painter(&pdf);
           painter.setPen(Qt::red);
           painter.setFont(QFont("Arial", 30));
           painter.drawText(2000,1200,"ID huissier: "+id);

           painter.setPen(Qt::black);
           painter.setFont(QFont("Arial", 50));
           painter.drawRect(2000,3000,5000,9000);
           painter.setFont(QFont("Arial", 10));
           painter.drawText(2500,3300,"ID : ");
           painter.drawText(2500,3800,"Lieu: ");
           painter.drawText(2500,4300,"salle: ");
           painter.drawText(2500,4800,"citoyen: ");
           painter.drawText(2500,5300,"Prenom: ");
           painter.drawText(2500,5800,"Date de session ");
          painter.drawText(2500,6300,"Nom d'utilisateur: ");
           painter.drawText(2500,6800,"Mot de passe: ");
           painter.drawText(2500,7300,"type: ");


           query.prepare("select * from huissiers WHERE id=:id");
           query.bindValue(":id",id);
           query.exec();
           while (query.next())
           {
               painter.drawText(4500,3300,query.value(0).toString());
               painter.drawText(4500,3800,query.value(1).toString());
               painter.drawText(4500,4300,query.value(2).toString());
               painter.drawText(4500,4800,query.value(3).toString());
               painter.drawText(4500,5300,query.value(4).toString());
               painter.drawText(4500,5800,query.value(5).toString());
               painter.drawText(4500,6300,query.value(6).toString());
               painter.drawText(4500,6800,query.value(7).toString());
               painter.drawText(4500,7300,query.value(8).toString());


           }

           int reponse = QMessageBox::question(this, "PDF généré avec succés", "Vous Voulez Affoussez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
           if (reponse == QMessageBox::Yes)
           {
               QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/Asus/Desktop/huissier.pdf"));
               painter.end();
           }
           if (reponse == QMessageBox::No)
           {
               painter.end();
           }
}
/*void oussema::on_TableView_ouss_doubleClicked(const QModelIndex &index)
{
    QString datestring = ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),5)).toString();
    QDate date=QDate::fromString(datestring,"dd-MMM-yy");
    ui->le_id_ouss_mod->setText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),0)).toString());
    ui->le_lieu_ouss_mod->setText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),1)).toString());
    ui->le_salle_ouss_mod->setText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),2)).toString());
    ui->le_citoyen_ouss_mod->setText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),3)).toString());
    ui->le_prenom_ouss_mod->setText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),4)).toString());
    ui->le_nom_utilisateur_ouss_mod->setText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),6)).toString());
    ui->le_mdp_ouss_mod->setText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),7)).toString());
    ui->comboBox_type_ouss_mod->setCurrentText(ui->TableView_ouss->model()->data(ui->TableView_ouss->model()->index(index.row(),8)).toString());


    ui->dateEdit_ajout_ouss_mod->setDate(date);
    ui->TabWidget_gestion->setCurrentIndex(1);
}

void oussema::on_btnLogin_4_clicked()
{
    QString t;
    QString username = ui->le_username->text();
    QString password = ui->le_password->text();

    QSqlQuery query ;
    query.prepare("Select * from huissiers");
    bool test = query.exec();
    bool find = false ;

    if (test)
    {
            while (query.next())
            {
                if ((query.value(6)==username) && (query.value(7)==password))
                {
                msgBox.setText(" Connecté !");
                ui->stackedWidget->setCurrentIndex(1);
                find = true ;
                }

            }
            if (find == false)
                msgBox.setText(" erroné !!!" );
    }

    msgBox.exec();





}

void oussema::on_pb_deconnexion_clicked()
{
    ui->le_username->clear();
    ui->le_password->clear();
    ui->stackedWidget->setCurrentIndex(0);
}

*/

void oussema::on_pushButton_stat_ouss_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
        model->setQuery("SELECT type FROM huissiers WHERE  type='viol' ");
        float countviol=model->rowCount();
        model->setQuery("SELECT type FROM huissiers WHERE  type='divorce' ");
        float countdivorce=model->rowCount();
        model->setQuery("SELECT type FROM huissiers WHERE  type='violence' ");
        float countviolence=model->rowCount();
        model->setQuery("SELECT type FROM huissiers WHERE  type='meurtre' ");
        float countmeurtre=model->rowCount();
        model->setQuery("SELECT type FROM huissiers WHERE  type='vole' ");
        float countAc=model->rowCount();

        float total=countviol+countAc+countmeurtre+countdivorce+countviolence;

                QPieSeries *series = new QPieSeries();
                series->append("viol",countviol);
                series->append("Vole",countAc);
                series->append("divorce",countdivorce);
                series->append("violence",countviolence);
                 series->append("meurtre",countmeurtre);

                if (countviol!=0)
                {QPieSlice *slice = series->slices().at(0);
                    slice->setLabel("viol "+QString("%1%").arg(100*slice->percentage(),3,'f',1));
                    slice->setLabelVisible();
                    slice->setPen(QPen(Qt::black));}
                if ( countAc!=0)
                {
                    // Add label, explode and define brush for 2nd slice
                    QPieSlice *slice1 = series->slices().at(1);
                    //slice1->setExploded();
                    slice1->setLabel("vole "+QString("%1%").arg(100*slice1->percentage(),3,'f',1));
                    slice1->setLabelVisible();
                    slice1->setBrush(QColor(Qt::cyan));
                }
                if ( countdivorce!=0)
                {
                    // Add label, explode and define brush for 2nd slice
                    QPieSlice *slice2 = series->slices().at(2);
                    //slice1->setExploded();
                    slice2->setLabel("divorce "+QString("%1%").arg(100*slice2->percentage(),3,'f',1));
                    slice2->setLabelVisible();
                    slice2->setBrush(QColor(Qt::red));
                }
                if ( countviolence!=0)
                {
                    // Add label, explode and define brush for 2nd slice
                    QPieSlice *slice2 = series->slices().at(3);
                    //slice1->setExploded();
                    slice2->setLabel("violence "+QString("%1%").arg(100*slice2->percentage(),3,'f',1));
                    slice2->setLabelVisible();
                    slice2->setBrush(QColor(Qt::yellow));
                }
                if ( countmeurtre!=0)
                {
                    // Add label, explode and define brush for 2nd slice
                    QPieSlice *slice2 = series->slices().at(4);
                    //slice1->setExploded();
                    slice2->setLabel("meurtre "+QString("%1%").arg(100*slice2->percentage(),3,'f',1));
                    slice2->setLabelVisible();
                    slice2->setBrush(QColor(Qt::green));
                }

                // Create the chart widget
                QChart *chart = new QChart();
                // Add data to chart with title and hide legend
                chart->addSeries(series);
                chart->setTitle("Totale "+ QString::number(total));
                // Used to display the chart
                QChartView *chartView = new QChartView(chart);
                chartView->setRenderHint(QPainter::Antialiasing);
                chartView->resize(1000,500);
                chart->legend()->hide();
                chartView->show();
}




void oussema::on_pushButton_clicked()
{
    A.write_to_arduino("1"); //envoyer 1 à arduino
}

void oussema::on_pushButton_2_clicked()
{
    A.write_to_arduino("0"); //envoyer 0 à arduino
}


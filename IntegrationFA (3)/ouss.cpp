#include "ouss.h"
#include "ui_ouss.h"
#include "huissier.h"

ouss::ouss(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ouss)
{
    ui->setupUi(this);
     ui->TableView_ouss->setModel(h.afficher());
}

ouss::~ouss()
{
    delete ui;
}
void ouss::on_pushButton_ajout_ouss_clicked()
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

void ouss::on_pushButton_annuler_ouss_clicked()
{
    ui->le_id_ouss->clear();
    ui->le_citoyen_ouss->clear();
   ui->le_mdp_ouss->clear();
    ui->le_prenom_ouss->clear();
   ui->le_nom_utilisateur_ouss->clear();
    ui->le_salle_ouss->clear();
    ui->le_lieu_ouss->clear();
}

void ouss::on_pb_supprimer_ouss_clicked()
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

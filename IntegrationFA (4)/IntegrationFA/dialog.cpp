#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::setavocatt(avocatt v)
{
    ui->lineEdit_CIN->setText(v.get_cin());
    ui->lineEdit_NOM->setText(v.get_nom());
    ui->lineEdit_PRENOM->setText(v.get_prenom());
    ui->lineEdit_AGE->setText(v.get_age());
    ui->lineEdit_NUMTEL->setText(v.get_numerotele());
    ui->lineEdit_ADR->setText(v.get_adr());
    ui->lineEdit_SPECIALITE->setText(v.get_specialite());
    ui->lineEdit_ANNEEEX->setText(v.get_anneeex());
}



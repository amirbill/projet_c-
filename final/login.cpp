#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include "mainwindow.h"
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_boutton_login_clicked()
{
    QString username =ui->lineEdit_login->text();
    QString password =ui->lineEdit_2_mdp->text();
    MainWindow w;
    if (username=="test" && password=="test")
    {
        QMessageBox::information(nullptr, QObject::tr("welcome ya degla ❤"),
                    QObject::tr("connection successful.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        hide();
        w.show();
    }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

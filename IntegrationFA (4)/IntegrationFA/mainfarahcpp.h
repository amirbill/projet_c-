#ifndef MAINFARAHCPP_H
#define MAINFARAHCPP_H
#include "citoyen.h"
#include <QMainWindow>
#include "smtp.h"
#include <QFile>
#include <QFileDialog>
#include "arduino.h"

namespace Ui {
class MainFarahCpp;
}

class MainFarahCpp : public QDialog
{
    Q_OBJECT

public :
    explicit MainFarahCpp(QWidget *parent = nullptr);
    ~MainFarahCpp();
private slots :
    void update_label() ;
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_recher_clicked();
         void sendMail();
           void mailSent(QString); ///des attributs
           void browse();
           void on_pb_code_clicked();

           void on_pb_excel_clicked();

           void on_boutton_login_clicked();

           void on_pushButton_clicked();

           void on_trier_clicked();

private:
    Ui::MainFarahCpp *ui;
    Citoyen Cito ;
     int selected=-1 ;
     QTcpSocket *socket ;
     QStringList files ;
     Arduino A1 ; // objet tempo
     QByteArray data ; //var contenant les donnees reçues
};

#endif // MAINFARAHCPP_H

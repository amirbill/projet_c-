#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "citoyen.h"
#include <QMainWindow>
#include "citoyen.h"
#include "smtp.h"
#include <QFile>
#include <QFileDialog>
#include "arduino.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void update_label() ;
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

  //  void on_tab_Cito_activated(const QModelIndex &index);

   // void on_comboBox_activated(const QString &arg1);

    void on_recher_clicked();

    void on_trier_2_clicked();

    void on_pushButton_3_clicked();
         void sendMail();
           void mailSent(QString); ///des attributs
           void browse();
           void on_pb_code_clicked();

           void on_pb_excel_clicked();

private:
    Ui::MainWindow *ui;
    Citoyen Cito ;
     int selected=-1 ;
     QTcpSocket *socket ;
     QStringList files ;
     arduino A1 ; // objet tempo
     QByteArray data ; //var contenant les donnees reçues
};

#endif // MAINWINDOW_H

#ifndef OUSSEMA_H
#define OUSSEMA_H
#include "huissier.h"
#include <QDialog>
#include "arduino.h"
#include <QMessageBox>
#include <QMainWindow>
namespace Ui {
class oussema;
}

class oussema : public QDialog
{
    Q_OBJECT

public:
    explicit oussema(QWidget *parent = nullptr);
    ~oussema();
    private slots :
    void on_pushButton_ajout_ouss_clicked();

    void on_pushButton_annuler_ouss_clicked();

    void on_pb_supprimer_ouss_clicked();

    void on_pushButton_modif_ouss_clicked();

    void on_pb_recherche_ouss_clicked();

    void on_pushButton_trierid_ouss_clicked();

    void on_pushButton_trierprenom_ouss_clicked();

    void on_pushButton_triersalle_ouss_clicked();

    void on_pushButton_excel_ouss_clicked();

    void on_pushButton_pdf_ouss_clicked();


    void on_TableView_ouss_doubleClicked(const QModelIndex &index);

    void on_btnLogin_4_clicked();

    void on_pb_deconnexion_clicked();

    void on_pushButton_stat_ouss_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
private:
    Ui::oussema *ui;
    huissier h;
   QMessageBox msgBox;

   QByteArray data ;
   Arduino A;
};

#endif // OUSSEMA_H

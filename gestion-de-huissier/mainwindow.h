
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <arduino.h>
#include "huissier.h"
#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>

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
///////////////////////////////////////////////////////////////////////////////

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

private:
    Ui::MainWindow *ui;
     huissier h;
    QMessageBox msgBox;

    QByteArray data ;
    Arduino A;

};

#endif // MAINWINDOW_H

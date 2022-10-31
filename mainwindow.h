#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "citoyen.h"
#include <QMainWindow>

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
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

  //  void on_tab_Cito_activated(const QModelIndex &index);

    void on_listWidget_currentRowChanged(int currentRow);

    void on_pushButtondel_clicked();


    void on_pb_modifier_2_clicked();

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Citoyen Cito ;
     int selected=-1 ;
};

#endif // MAINWINDOW_H

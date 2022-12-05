#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//QT_BEGIN_NAMESPACE
namespace Ui
{ class MainWindow;
}
//QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    QString id_farah="Farouha" ;
    QString mdp_farah="0000" ;
    QString id_arij="Rouja";
    QString mdp_arij="1111";
    QString id_zoo="Zoo";
    QString mdp_zoo="2222";
    QString id_amir="amir";
    QString mdp_amir="3333";
    QString id_oussema="oussema" ;
    QString mdp_oussema="oussema" ;

};
#endif // MAINWINDOW_H

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
    QString mdp_farah="farouha" ;
    QString id_arij="Rouja" ;
    QString mdp_arij="rouja" ;
};
#endif // MAINWINDOW_H

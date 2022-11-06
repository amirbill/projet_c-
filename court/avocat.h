#ifndef AVOCAT_H
#define AVOCAT_H
#include <QMessageBox>
#include"connection.h"
#include <QMainWindow>
#include "avocatt.h"
QT_BEGIN_NAMESPACE
namespace Ui { class avocat; }
QT_END_NAMESPACE

class avocat : public QMainWindow
{
    Q_OBJECT

public:
    avocat(QWidget *parent = nullptr);
    ~avocat();

private slots:


    void on_pushButton_valider_clicked();

    void on_suprimer_clicked();

    void on_pushButton_modifier_clicked();

private:
    Ui::avocat *ui;
    avocatt o ;
};
#endif // AVOCAT_H

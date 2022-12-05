#ifndef ZEINEB_H
#define ZEINEB_H
#include <QMainWindow>
#include<employe.h>
#include <conges.h>


#include <QDialog>

namespace Ui {
class zeineb;
}

class zeineb : public QDialog
{
    Q_OBJECT

public:
    explicit zeineb(QWidget *parent = nullptr);
    ~zeineb();

private slots:
    void on_pushButton_ajouter_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pushButton_modifier_clicked();

    void on_trier_clicked();

    void on_ajouter_conge_clicked();

    void on_pushButton_chercher_2_clicked();

    void on_imprimer_clicked();

    void on_pushButton_chercher_3_clicked();

    void on_pushButton_chercher_4_clicked();

private:
    Ui::zeineb *ui;
    employe Etmp;
    employe e;
    Conges c;
};

#endif // ZEINEB_H

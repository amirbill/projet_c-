#ifndef OUSS_H
#define OUSS_H
#include "huissier.h"
#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class ouss;
}

class ouss : public QMainWindow
{
    Q_OBJECT

public:
    explicit ouss(QWidget *parent = nullptr);
    ~ouss();
    void on_pb_supprimer_ouss_clicked();
    void on_pushButton_annuler_ouss_clicked();
    void on_pushButton_ajout_ouss_clicked();

private:
    Ui::ouss *ui;
     huissier h;
      QMessageBox msgBox;
};

#endif // OUSS_H

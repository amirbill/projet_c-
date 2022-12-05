#ifndef MAINARIJCPP_H
#define MAINARIJCPP_H
#include <QDialog>
#include"camera.h"
#include<QtCharts/QChart>
#include<QtCharts/QChartView>
#include<QtCharts/QPieSeries>
#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QBarSet>
#include <qbarset.h>
#include<QChartView>
#include<qchartview.h>
#include<qprintdialog.h>
#include<QPrintDialog>
#include<QPrinter>
#include<qprinter.h>
#include<qbarseries.h>
#include<QBarSeries>
#include <QDialog>
#include "affaires.h"

namespace Ui {
class mainarijcpp;
}
using namespace QtCharts;
class mainarijcpp : public QDialog
{
    Q_OBJECT

public:
    explicit mainarijcpp(QWidget *parent = nullptr);
    ~mainarijcpp();
private slots :
    void on_bouton_ajouter_clicked();

    void on_bouton_supprimer_clicked();

    //void on_tableView_activated(const QModelIndex &index);

    //void on_pushButton_3_clicked();

    void on_bouton_modifier_clicked();

    void on_bouton_rechercher_clicked();

    void on_bouton_imprimer_clicked();

    void on_bouton_trier_clicked();

   // void on_calendarWidget_activated(const QDate &date);

   // void on_stats_clicked();

   // void on_calendrier_clicked();

    void on_actualiser_historique_clicked();

    void on_effacer_historique_clicked();

    void on_bouton_camera_clicked();


private:
    Ui::mainarijcpp *ui;
    Affaires A;
    camera *c;
};

#endif // MAINARIJCPP_H

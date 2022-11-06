#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QtQmlDebug/QtQmlDebug>
#include <QtQml/qtqmlglobal.h>
#include <QMainWindow>
#include"affaire.h"
/*
#include<QtCharts/QChart>
#include<QtCharts/QChartView>
#include<QtCharts/QPieSeries>

#include <QDialog>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
*/
namespace Ui {
class MainWindow;
}
//using namespace QtCharts;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_bouton_ajouter_clicked();

    void on_bouton_supprimer_clicked();

    //void on_tableView_activated(const QModelIndex &index);

    //void on_pushButton_3_clicked();

    void on_bouton_modifier_clicked();

    void on_bouton_rechercher_clicked();

    void on_bouton_imprimer_clicked();

    void on_bouton_trier_clicked();

   // void on_calendarWidget_activated(const QDate &date);

private:
    Ui::MainWindow *ui;
   Affaires A;

  /* QGraphicsScene *scene;
       QGraphicsEllipseItem *ellipse;
       QGraphicsRectItem *rectangle;
       QGraphicsTextItem *text;
       */
};

#endif // MAINWINDOW_H

/*
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "affaires.h"
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
    void on_bouton_ajouter_clicked();

    void on_bouton_supprimer_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    Affaires A;
};

#endif // MAINWINDOW_H
*/

#ifndef STATISTQUES_H
#define STATISTQUES_H
#include <QDialog>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

#include <iostream>
#include <vector>
using namespace std;

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class statistques;
}

/*class statistques
{
public:
    statistques();
};*/
class statistques : public QDialog
{
    Q_OBJECT

public:
    explicit statistques(QWidget *parent = nullptr);
    ~statistques();

    QChartView *chartView ;
    void choix_pie();

private:
    Ui::statistques *ui;
};
#endif // STATISTQUES_H


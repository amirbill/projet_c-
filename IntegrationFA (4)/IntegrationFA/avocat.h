#ifndef AVOCAT_H
#define AVOCAT_H

#include <QMessageBox>
#include"connection.h"
#include <QMainWindow>
#include "avocatt.h"
#include "WebAxWidget.h"
#include <QVariant>
//#include "arduino.h"
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include <QDialog>
#include <QFileDialog>

#include <QDialog>
#include <QDesktopWidget>
#include <QSettings>
#include <QPrinter>
#include <QTextStream>
#include <QFile>
#include <QDataStream>
#include <QWidgetSet>

#include <QFile>
#include <QDir>
#include <QDate>
#include <QTime>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

//----------
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>

QT_BEGIN_NAMESPACE
namespace Ui { class avocat; }
QT_END_NAMESPACE

namespace Ui {
class avocat;
}

class avocat : public QDialog
{
    Q_OBJECT

public:
    explicit avocat(QWidget *parent = nullptr);
    ~avocat();
     int a,b,c,d,e,f,g,h ;
private slots:
    void on_pushButton_valider_clicked();
    void on_suprimer_clicked();
    void on_pushButton_modifier_clicked();
    void on_pushButton_3_clicked();
   void on_pushButton_clicked();
   void on_imprimer_clicked();
   void on_pushButton_2_clicked();
   void on_pushButton_5_clicked();
void total (int a,  int b, int c, int d, int e, int f, int  g,  int h ) ;


//ardduino :

void readserial() ;


void updatelcd(const QString);

private:
    Ui::avocat *ui;

    //arduino :

   QSerialPort * serial;
   static const quint16 arduino_uno_vendor_id=9025;
   static const quint16 arduino_uno_producy_id=67;

   QString arduino_port_name;
   bool arduino_is_available;
   QByteArray data;
   QString serialBuffer ;



    avocatt o ;
   ///    statt s;
   // QFile file ("C:/Users/amir/Desktop/d-court/court/historique.txt");
signals:
    void setCenter(QVariant, QVariant) ;

};

#endif // AVOCAT_H

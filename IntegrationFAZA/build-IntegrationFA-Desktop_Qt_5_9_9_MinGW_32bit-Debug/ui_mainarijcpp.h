/********************************************************************************
** Form generated from reading UI file 'mainarijcpp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINARIJCPP_H
#define UI_MAINARIJCPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainarijcpp
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGroupBox *groupBox;
    QPushButton *bouton_ajouter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_3;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *bouton_camera;
    QGroupBox *groupBox_6;
    QPushButton *bouton_modifier;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_7;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_5;
    QWidget *tab_5;
    QTableView *tableView;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox_4;
    QPushButton *bouton_rechercher;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QLineEdit *case_rechercher;
    QLabel *label_10;
    QGroupBox *groupBox_5;
    QPushButton *bouton_supprimer;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QLineEdit *lineEdit_8;
    QPushButton *bouton_trier;
    QPushButton *stats;
    QWidget *tab;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QPushButton *bouton_imprimer;
    QWidget *tab_4;
    QPushButton *actualiser_historique;
    QPushButton *effacer_historique;
    QTextEdit *textEdit_2;
    QWidget *tab_2;
    QFrame *graphe;
    QVBoxLayout *verticalLayout;
    QLabel *label_stat;
    QWidget *tab_6;

    void setupUi(QDialog *mainarijcpp)
    {
        if (mainarijcpp->objectName().isEmpty())
            mainarijcpp->setObjectName(QStringLiteral("mainarijcpp"));
        mainarijcpp->resize(950, 632);
        tabWidget = new QTabWidget(mainarijcpp);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 871, 561));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setMouseTracking(false);
        tabWidget->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"QFrame\n"
"{\n"
"	background-color: rgb(98, 98, 98);\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"/* widget->setStyleSheet(\"background-color: transparent;\");\n"
"widget->setWindowFlags(Qt::FramelessWindowHint);   //No windowing\n"
"widget->setAttribute(Qt::WA_TranslucentBackground); // No background*/\n"
"	color: rgb(0, 0, 0);\n"
" /*  color: #b1b1b1;*/\n"
" \n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.732, fx:0.5, fy:0.5, stop:0 rgba(134, 149, 217, 245), stop:1 rgba(255, 255, 255, 255));\n"
"	/*background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.752, fx:0.513, fy:0.511364, stop:0 rgba(93, 63, 211, 255), stop:1 rgba(255, 255, 255, 255));*/\n"
"\n"
"  padding: 1px;\n"
"   /* border-style: solid;\n"
"  /*  border: 1px solid #1e1e1e;*/\n"
"    border-radius: 5;\n"
"  /* background-color: #674ea7;*/\n"
"/*#"
                        "323232; loun el page mtaa e l ajout w mtaa el supprimer w el adition w el affichage */\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #00"
                        "0;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #4646"
                        "46);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-"
                        "color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTex"
                        "tEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border"
                        "-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"Q"
                        "ScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
""
                        "{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
""
                        "QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:"
                        "0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!select"
                        "ed\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid "
                        "#b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
""));
        tabWidget->setUsesScrollButtons(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 90, 341, 311));
        QFont font1;
        font1.setFamily(QStringLiteral("Mogen"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setKerning(true);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QStringLiteral("  border-radius: 10;"));
        bouton_ajouter = new QPushButton(groupBox);
        bouton_ajouter->setObjectName(QStringLiteral("bouton_ajouter"));
        bouton_ajouter->setGeometry(QRect(230, 260, 75, 23));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 141, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QStringLiteral("Aubrey"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("background-color: rgb(225, 229, 246);"));

        verticalLayout_2->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(225, 229, 246);\n"
""));

        verticalLayout_2->addWidget(label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font3;
        font3.setFamily(QStringLiteral("Aubrey"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(225, 229, 246);"));

        verticalLayout_2->addWidget(label_3);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(160, 70, 161, 151));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(lineEdit);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(lineEdit_6);

        bouton_camera = new QPushButton(tab_3);
        bouton_camera->setObjectName(QStringLiteral("bouton_camera"));
        bouton_camera->setGeometry(QRect(710, 40, 75, 23));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(460, 90, 331, 311));
        QFont font4;
        font4.setFamily(QStringLiteral("Mogen"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        groupBox_6->setFont(font4);
        groupBox_6->setStyleSheet(QLatin1String("  border-radius: 10;\n"
""));
        bouton_modifier = new QPushButton(groupBox_6);
        bouton_modifier->setObjectName(QStringLiteral("bouton_modifier"));
        bouton_modifier->setGeometry(QRect(240, 270, 75, 23));
        layoutWidget_3 = new QWidget(groupBox_6);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(170, 70, 151, 171));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(layoutWidget_3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(lineEdit_4);

        lineEdit_2 = new QLineEdit(layoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(lineEdit_2);

        lineEdit_7 = new QLineEdit(layoutWidget_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(lineEdit_7);

        layoutWidget_4 = new QWidget(groupBox_6);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 80, 151, 141));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(225, 229, 246);"));

        verticalLayout_5->addWidget(label_2);

        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);
        label_6->setStyleSheet(QLatin1String("background-color: rgb(225, 229, 246);\n"
""));

        verticalLayout_5->addWidget(label_6);

        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(225, 229, 246);"));

        verticalLayout_5->addWidget(label_5);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 70, 411, 371));
        tableView->setStyleSheet(QLatin1String("  border-radius: 10;\n"
"background-color: rgb(87, 196, 255);\n"
""));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 30, 181, 21));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setWeight(75);
        font5.setStrikeOut(false);
        label_8->setFont(font5);
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(232, 235, 248);"));
        label_9 = new QLabel(tab_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(580, 50, 121, 21));
        label_9->setFont(font5);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(232, 235, 248);"));
        groupBox_4 = new QGroupBox(tab_5);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(510, 60, 271, 181));
        groupBox_4->setStyleSheet(QStringLiteral("  border-radius: 10;"));
        bouton_rechercher = new QPushButton(groupBox_4);
        bouton_rechercher->setObjectName(QStringLiteral("bouton_rechercher"));
        bouton_rechercher->setGeometry(QRect(180, 130, 75, 23));
        layoutWidget_5 = new QWidget(groupBox_4);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(30, 70, 209, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(225, 229, 246);"));

        horizontalLayout->addWidget(label_11);

        case_rechercher = new QLineEdit(layoutWidget_5);
        case_rechercher->setObjectName(QStringLiteral("case_rechercher"));

        horizontalLayout->addWidget(case_rechercher);

        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(590, 260, 121, 21));
        label_10->setFont(font5);
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(232, 235, 248);"));
        groupBox_5 = new QGroupBox(tab_5);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(510, 270, 271, 181));
        groupBox_5->setStyleSheet(QStringLiteral("  border-radius: 10;"));
        bouton_supprimer = new QPushButton(groupBox_5);
        bouton_supprimer->setObjectName(QStringLiteral("bouton_supprimer"));
        bouton_supprimer->setGeometry(QRect(180, 130, 75, 23));
        layoutWidget_6 = new QWidget(groupBox_5);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(40, 70, 209, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font2);
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(225, 229, 246);"));

        horizontalLayout_2->addWidget(label_12);

        lineEdit_8 = new QLineEdit(layoutWidget_6);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_2->addWidget(lineEdit_8);

        bouton_trier = new QPushButton(tab_5);
        bouton_trier->setObjectName(QStringLiteral("bouton_trier"));
        bouton_trier->setGeometry(QRect(370, 30, 75, 23));
        stats = new QPushButton(tab_5);
        stats->setObjectName(QStringLiteral("stats"));
        stats->setGeometry(QRect(280, 30, 75, 23));
        tabWidget->addTab(tab_5, QString());
        groupBox_4->raise();
        groupBox_5->raise();
        tableView->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        bouton_trier->raise();
        stats->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 841, 471));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 839, 469));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(230, 10, 331, 461));
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(87, 196, 255);"));
        bouton_imprimer = new QPushButton(scrollAreaWidgetContents);
        bouton_imprimer->setObjectName(QStringLiteral("bouton_imprimer"));
        bouton_imprimer->setGeometry(QRect(680, 400, 93, 28));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        actualiser_historique = new QPushButton(tab_4);
        actualiser_historique->setObjectName(QStringLiteral("actualiser_historique"));
        actualiser_historique->setGeometry(QRect(740, 370, 75, 23));
        effacer_historique = new QPushButton(tab_4);
        effacer_historique->setObjectName(QStringLiteral("effacer_historique"));
        effacer_historique->setGeometry(QRect(740, 410, 75, 23));
        textEdit_2 = new QTextEdit(tab_4);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(20, 20, 671, 441));
        textEdit_2->setStyleSheet(QLatin1String("background-color: rgb(87, 196, 255);\n"
"font: italic 14pt \"Mogen\";"));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        graphe = new QFrame(tab_2);
        graphe->setObjectName(QStringLiteral("graphe"));
        graphe->setGeometry(QRect(170, 0, 541, 481));
        verticalLayout = new QVBoxLayout(graphe);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_stat = new QLabel(graphe);
        label_stat->setObjectName(QStringLiteral("label_stat"));

        verticalLayout->addWidget(label_stat);

        tabWidget->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());

        retranslateUi(mainarijcpp);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainarijcpp);
    } // setupUi

    void retranslateUi(QDialog *mainarijcpp)
    {
        mainarijcpp->setWindowTitle(QApplication::translate("mainarijcpp", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("mainarijcpp", "Ajouter une affaire", Q_NULLPTR));
        bouton_ajouter->setText(QApplication::translate("mainarijcpp", "Ajouter", Q_NULLPTR));
        label->setText(QApplication::translate("mainarijcpp", "         Identifiant", Q_NULLPTR));
        label_4->setText(QApplication::translate("mainarijcpp", "            Type", Q_NULLPTR));
        label_3->setText(QApplication::translate("mainarijcpp", "             Date", Q_NULLPTR));
        bouton_camera->setText(QApplication::translate("mainarijcpp", "Cam\303\251ra", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("mainarijcpp", "Modifier une affaire", Q_NULLPTR));
        bouton_modifier->setText(QApplication::translate("mainarijcpp", "Modifier", Q_NULLPTR));
        label_2->setText(QApplication::translate("mainarijcpp", "         Identifiant", Q_NULLPTR));
        label_6->setText(QApplication::translate("mainarijcpp", "            Type", Q_NULLPTR));
        label_5->setText(QApplication::translate("mainarijcpp", "             Date", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("mainarijcpp", "Ajouter", Q_NULLPTR));
        label_8->setText(QApplication::translate("mainarijcpp", "Affaires courantes:", Q_NULLPTR));
        label_9->setText(QApplication::translate("mainarijcpp", "Rechercher?", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        bouton_rechercher->setText(QApplication::translate("mainarijcpp", "Rechercher", Q_NULLPTR));
        label_11->setText(QApplication::translate("mainarijcpp", " Identifiant", Q_NULLPTR));
        label_10->setText(QApplication::translate("mainarijcpp", "Supprimer ? ", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        bouton_supprimer->setText(QApplication::translate("mainarijcpp", "Supprimer", Q_NULLPTR));
        label_12->setText(QApplication::translate("mainarijcpp", " Identifiant", Q_NULLPTR));
        bouton_trier->setText(QApplication::translate("mainarijcpp", "Trier", Q_NULLPTR));
        stats->setText(QApplication::translate("mainarijcpp", "Statistiques", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("mainarijcpp", "Afficher", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("mainarijcpp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">QString html =&quot;</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;   &quot;City, 11/11/2015&quot;&quot;&quot;&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;   &"
                        "quot;Sender Name<br />&quot;   &quot;street 34/56A<br />&quot;   &quot;121-43 city&quot;&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;&quot;</span></p>\n"
"<h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">DOCUMENT TITLE</span></h1>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;&quot;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;   &quot;document content documen"
                        "t content document content document content document content document content document content document content document content document content &quot;   &quot;document content document content document content document content document content document content document content document content document content document content &quot;&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;&quot;</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">signature&quot;;</span></p></body></html>", Q_NULLPTR));
        bouton_imprimer->setText(QApplication::translate("mainarijcpp", "Imprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("mainarijcpp", "G\303\251n\303\251rer PDF", Q_NULLPTR));
        actualiser_historique->setText(QApplication::translate("mainarijcpp", "Actualiser", Q_NULLPTR));
        effacer_historique->setText(QApplication::translate("mainarijcpp", "D\303\251gager", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("mainarijcpp", "Historique", Q_NULLPTR));
        label_stat->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("mainarijcpp", "Statistiques", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("mainarijcpp", "Ventilation", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainarijcpp: public Ui_mainarijcpp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINARIJCPP_H

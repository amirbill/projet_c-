/********************************************************************************
** Form generated from reading UI file 'mainfarahcpp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFARAHCPP_H
#define UI_MAINFARAHCPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFarahCpp
{
public:
    QTabWidget *tabWidget_2;
    QWidget *tab_7;
    QGroupBox *groupBox_15;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_adr;
    QLineEdit *le_cin;
    QPushButton *pb_ajouter;
    QLabel *label_22;
    QLineEdit *le_tel;
    QLineEdit *le_age;
    QWidget *tab_8;
    QGroupBox *groupBox_16;
    QGroupBox *groupBox_17;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *le_nom_2;
    QLineEdit *le_prenom_2;
    QLineEdit *le_adress_2;
    QLineEdit *le_cin_2;
    QPushButton *pb_modifier;
    QLabel *label_28;
    QLineEdit *le_tel_2;
    QLineEdit *le_age_2;
    QWidget *tab_9;
    QGroupBox *groupBox_18;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *cinsup;
    QPushButton *pb_supprimer;
    QWidget *tab_10;
    QGroupBox *groupBox_19;
    QTableView *tab_Cito;
    QLabel *label_31;
    QComboBox *fontComboBox;
    QPushButton *trier;
    QLabel *label_32;
    QLineEdit *line;
    QPushButton *recher;
    QGroupBox *groupBox_20;
    QPushButton *pushButton;
    QCheckBox *croissant;
    QCheckBox *decroissant;
    QWidget *tab_11;
    QGroupBox *groupBox_21;
    QPushButton *sendBtn;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QLineEdit *file;
    QLineEdit *msg;
    QLineEdit *mail_pass;
    QPushButton *browseBtn;
    QGroupBox *groupBox_22;
    QLabel *label_qrcode;
    QPushButton *pb_code;
    QGroupBox *groupBox_23;
    QPushButton *pb_excel;
    QWidget *tab_12;
    QGroupBox *groupBox_24;
    QGroupBox *groupBox_26;
    QPushButton *pushButton_OFF;
    QPushButton *pushButton_ON;
    QGroupBox *groupBox_27;
    QLabel *label_3arduino;

    void setupUi(QDialog *MainFarahCpp)
    {
        if (MainFarahCpp->objectName().isEmpty())
            MainFarahCpp->setObjectName(QStringLiteral("MainFarahCpp"));
        MainFarahCpp->resize(1084, 740);
        tabWidget_2 = new QTabWidget(MainFarahCpp);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(10, 10, 1041, 691));
        tabWidget_2->setStyleSheet(QLatin1String("QToolTip\n"
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
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        groupBox_15 = new QGroupBox(tab_7);
        groupBox_15->setObjectName(QStringLiteral("groupBox_15"));
        groupBox_15->setGeometry(QRect(40, 60, 811, 441));
        QFont font;
        font.setFamily(QStringLiteral("Tw Cen MT"));
        font.setPointSize(11);
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        groupBox_15->setFont(font);
        label_15 = new QLabel(groupBox_15);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(60, 130, 56, 16));
        QFont font1;
        font1.setPointSize(10);
        label_15->setFont(font1);
        label_16 = new QLabel(groupBox_15);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(320, 140, 56, 16));
        label_16->setFont(font1);
        label_19 = new QLabel(groupBox_15);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 250, 71, 21));
        label_19->setFont(font1);
        label_20 = new QLabel(groupBox_15);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(60, 210, 61, 21));
        label_20->setFont(font1);
        label_21 = new QLabel(groupBox_15);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(60, 170, 56, 16));
        label_21->setFont(font1);
        le_nom = new QLineEdit(groupBox_15);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(140, 130, 113, 22));
        le_nom->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_prenom = new QLineEdit(groupBox_15);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(140, 170, 113, 22));
        le_prenom->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_adr = new QLineEdit(groupBox_15);
        le_adr->setObjectName(QStringLiteral("le_adr"));
        le_adr->setGeometry(QRect(140, 210, 113, 22));
        le_adr->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_cin = new QLineEdit(groupBox_15);
        le_cin->setObjectName(QStringLiteral("le_cin"));
        le_cin->setGeometry(QRect(390, 140, 113, 22));
        le_cin->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pb_ajouter = new QPushButton(groupBox_15);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(400, 330, 93, 28));
        pb_ajouter->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_22 = new QLabel(groupBox_15);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(310, 210, 91, 21));
        label_22->setFont(font1);
        le_tel = new QLineEdit(groupBox_15);
        le_tel->setObjectName(QStringLiteral("le_tel"));
        le_tel->setGeometry(QRect(420, 210, 113, 22));
        le_tel->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_age = new QLineEdit(groupBox_15);
        le_age->setObjectName(QStringLiteral("le_age"));
        le_age->setGeometry(QRect(140, 250, 113, 22));
        le_age->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Users/LENOVO/Downloads/ajouter-le-fichier.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_7, icon, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        groupBox_16 = new QGroupBox(tab_8);
        groupBox_16->setObjectName(QStringLiteral("groupBox_16"));
        groupBox_16->setGeometry(QRect(40, 40, 891, 561));
        groupBox_17 = new QGroupBox(groupBox_16);
        groupBox_17->setObjectName(QStringLiteral("groupBox_17"));
        groupBox_17->setGeometry(QRect(500, 50, 271, 391));
        groupBox_17->setFont(font);
        label_23 = new QLabel(groupBox_17);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(25, 110, 81, 20));
        label_23->setFont(font1);
        label_24 = new QLabel(groupBox_17);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(20, 20, 121, 31));
        label_24->setFont(font1);
        label_25 = new QLabel(groupBox_17);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(20, 220, 91, 31));
        label_25->setFont(font1);
        label_26 = new QLabel(groupBox_17);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 190, 111, 20));
        label_26->setFont(font1);
        label_27 = new QLabel(groupBox_17);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(5, 150, 111, 20));
        label_27->setFont(font1);
        le_nom_2 = new QLineEdit(groupBox_17);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(120, 110, 113, 22));
        le_nom_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_prenom_2 = new QLineEdit(groupBox_17);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(120, 150, 113, 22));
        le_prenom_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_adress_2 = new QLineEdit(groupBox_17);
        le_adress_2->setObjectName(QStringLiteral("le_adress_2"));
        le_adress_2->setGeometry(QRect(120, 190, 113, 22));
        le_adress_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_cin_2 = new QLineEdit(groupBox_17);
        le_cin_2->setObjectName(QStringLiteral("le_cin_2"));
        le_cin_2->setGeometry(QRect(80, 60, 113, 22));
        le_cin_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pb_modifier = new QPushButton(groupBox_17);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(130, 340, 93, 28));
        pb_modifier->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_28 = new QLabel(groupBox_17);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(30, 270, 81, 21));
        label_28->setFont(font1);
        le_tel_2 = new QLineEdit(groupBox_17);
        le_tel_2->setObjectName(QStringLiteral("le_tel_2"));
        le_tel_2->setGeometry(QRect(120, 270, 113, 22));
        le_tel_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_age_2 = new QLineEdit(groupBox_17);
        le_age_2->setObjectName(QStringLiteral("le_age_2"));
        le_age_2->setGeometry(QRect(120, 230, 113, 22));
        le_age_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("C:/Users/LENOVO/Downloads/document.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_8, icon1, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        groupBox_18 = new QGroupBox(tab_9);
        groupBox_18->setObjectName(QStringLiteral("groupBox_18"));
        groupBox_18->setGeometry(QRect(90, 100, 711, 371));
        label_29 = new QLabel(groupBox_18);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(90, 130, 301, 20));
        label_30 = new QLabel(groupBox_18);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(250, 190, 56, 16));
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        label_30->setFont(font2);
        cinsup = new QLineEdit(groupBox_18);
        cinsup->setObjectName(QStringLiteral("cinsup"));
        cinsup->setGeometry(QRect(330, 190, 113, 22));
        cinsup->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pb_supprimer = new QPushButton(groupBox_18);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(390, 250, 93, 28));
        pb_supprimer->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 127);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("C:/Users/LENOVO/Downloads/supprimer.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_9, icon2, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        groupBox_19 = new QGroupBox(tab_10);
        groupBox_19->setObjectName(QStringLiteral("groupBox_19"));
        groupBox_19->setGeometry(QRect(20, 10, 901, 531));
        tab_Cito = new QTableView(groupBox_19);
        tab_Cito->setObjectName(QStringLiteral("tab_Cito"));
        tab_Cito->setGeometry(QRect(60, 120, 561, 371));
        tab_Cito->setStyleSheet(QLatin1String("background-color: rgb(85, 0, 127);\n"
""));
        label_31 = new QLabel(groupBox_19);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(70, 50, 131, 16));
        fontComboBox = new QComboBox(groupBox_19);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));
        fontComboBox->setGeometry(QRect(740, 190, 73, 22));
        fontComboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"background-color: rgb(255, 255, 255);"));
        trier = new QPushButton(groupBox_19);
        trier->setObjectName(QStringLiteral("trier"));
        trier->setGeometry(QRect(740, 220, 71, 28));
        trier->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 127);"));
        label_32 = new QLabel(groupBox_19);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(640, 180, 81, 20));
        line = new QLineEdit(groupBox_19);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(250, 70, 113, 22));
        line->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        recher = new QPushButton(groupBox_19);
        recher->setObjectName(QStringLiteral("recher"));
        recher->setGeometry(QRect(380, 80, 93, 28));
        recher->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 127);"));
        groupBox_20 = new QGroupBox(groupBox_19);
        groupBox_20->setObjectName(QStringLiteral("groupBox_20"));
        groupBox_20->setGeometry(QRect(680, 350, 161, 111));
        pushButton = new QPushButton(groupBox_20);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 50, 93, 28));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        croissant = new QCheckBox(groupBox_19);
        croissant->setObjectName(QStringLiteral("croissant"));
        croissant->setGeometry(QRect(700, 120, 83, 20));
        croissant->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        decroissant = new QCheckBox(groupBox_19);
        decroissant->setObjectName(QStringLiteral("decroissant"));
        decroissant->setGeometry(QRect(780, 150, 83, 20));
        decroissant->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("C:/Users/LENOVO/Downloads/affiche.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_10, icon3, QString());
        tab_11 = new QWidget();
        tab_11->setObjectName(QStringLiteral("tab_11"));
        groupBox_21 = new QGroupBox(tab_11);
        groupBox_21->setObjectName(QStringLiteral("groupBox_21"));
        groupBox_21->setGeometry(QRect(20, -30, 961, 631));
        sendBtn = new QPushButton(groupBox_21);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(270, 500, 93, 28));
        sendBtn->setStyleSheet(QLatin1String("color: rgb(255, 170, 255);\n"
"background-color: rgb(0, 0, 0);"));
        rcpt = new QLineEdit(groupBox_21);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(50, 60, 491, 31));
        rcpt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        subject = new QLineEdit(groupBox_21);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(0, 120, 631, 31));
        subject->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        file = new QLineEdit(groupBox_21);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(50, 160, 381, 31));
        file->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        msg = new QLineEdit(groupBox_21);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(-10, 210, 601, 281));
        msg->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        mail_pass = new QLineEdit(groupBox_21);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(550, 70, 131, 22));
        mail_pass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        browseBtn = new QPushButton(groupBox_21);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(460, 160, 93, 28));
        browseBtn->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        groupBox_22 = new QGroupBox(groupBox_21);
        groupBox_22->setObjectName(QStringLiteral("groupBox_22"));
        groupBox_22->setGeometry(QRect(630, 220, 201, 291));
        label_qrcode = new QLabel(groupBox_22);
        label_qrcode->setObjectName(QStringLiteral("label_qrcode"));
        label_qrcode->setGeometry(QRect(30, 90, 151, 171));
        pb_code = new QPushButton(groupBox_22);
        pb_code->setObjectName(QStringLiteral("pb_code"));
        pb_code->setGeometry(QRect(50, 50, 93, 28));
        pb_code->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 127);"));
        groupBox_23 = new QGroupBox(groupBox_21);
        groupBox_23->setObjectName(QStringLiteral("groupBox_23"));
        groupBox_23->setGeometry(QRect(700, 80, 161, 111));
        pb_excel = new QPushButton(groupBox_23);
        pb_excel->setObjectName(QStringLiteral("pb_excel"));
        pb_excel->setGeometry(QRect(40, 50, 93, 28));
        pb_excel->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 127);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral("C:/Users/LENOVO/Downloads/chat-bulle.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_2->addTab(tab_11, icon4, QString());
        tab_12 = new QWidget();
        tab_12->setObjectName(QStringLiteral("tab_12"));
        groupBox_24 = new QGroupBox(tab_12);
        groupBox_24->setObjectName(QStringLiteral("groupBox_24"));
        groupBox_24->setGeometry(QRect(30, 10, 841, 511));
        groupBox_26 = new QGroupBox(groupBox_24);
        groupBox_26->setObjectName(QStringLiteral("groupBox_26"));
        groupBox_26->setGeometry(QRect(520, 70, 251, 161));
        pushButton_OFF = new QPushButton(groupBox_26);
        pushButton_OFF->setObjectName(QStringLiteral("pushButton_OFF"));
        pushButton_OFF->setGeometry(QRect(100, 100, 93, 28));
        pushButton_ON = new QPushButton(groupBox_26);
        pushButton_ON->setObjectName(QStringLiteral("pushButton_ON"));
        pushButton_ON->setGeometry(QRect(30, 50, 93, 28));
        groupBox_27 = new QGroupBox(groupBox_24);
        groupBox_27->setObjectName(QStringLiteral("groupBox_27"));
        groupBox_27->setGeometry(QRect(120, 250, 331, 191));
        label_3arduino = new QLabel(groupBox_27);
        label_3arduino->setObjectName(QStringLiteral("label_3arduino"));
        label_3arduino->setGeometry(QRect(40, 30, 241, 131));
        QFont font3;
        font3.setPointSize(16);
        font3.setUnderline(true);
        label_3arduino->setFont(font3);
        tabWidget_2->addTab(tab_12, QString());

        retranslateUi(MainFarahCpp);

        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainFarahCpp);
    } // setupUi

    void retranslateUi(QDialog *MainFarahCpp)
    {
        MainFarahCpp->setWindowTitle(QApplication::translate("MainFarahCpp", "Dialog", Q_NULLPTR));
        groupBox_15->setTitle(QApplication::translate("MainFarahCpp", "                                      \342\231\245     ----Ajouter un citoyen----          \342\231\245                              ", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainFarahCpp", "Nom", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainFarahCpp", "CIN", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainFarahCpp", "Age", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainFarahCpp", "Adresse", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainFarahCpp", "Prenom", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainFarahCpp", "Ajouter", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainFarahCpp", "T\303\251l\303\251phone", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainFarahCpp", "AjouterC", Q_NULLPTR));
        groupBox_16->setTitle(QApplication::translate("MainFarahCpp", "                                                            \342\231\245 ---Modifier---  \342\231\245                                              ", Q_NULLPTR));
        groupBox_17->setTitle(QApplication::translate("MainFarahCpp", "\342\231\245 --Citoyens \303\240 modifier-- \342\231\245", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainFarahCpp", "Nouv_nom", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainFarahCpp", "CIN \303\240 modifier", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainFarahCpp", "Age", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainFarahCpp", "Nouv_Adresse", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainFarahCpp", "Nouv_Prenom", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainFarahCpp", "Modifier", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainFarahCpp", "T\303\251l\303\251phone", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainFarahCpp", "Edition", Q_NULLPTR));
        groupBox_18->setTitle(QApplication::translate("MainFarahCpp", "                                                \342\231\245  ---Supprimer Citoyens---  \342\231\245                                      ", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainFarahCpp", "\342\231\245Vous pouvez saisir le CIN du citoyens \303\240 supprimer:", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainFarahCpp", "CIN", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainFarahCpp", "Supprimer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_9), QApplication::translate("MainFarahCpp", "SupprimeerC", Q_NULLPTR));
        groupBox_19->setTitle(QApplication::translate("MainFarahCpp", "                                                   \342\231\245  ---Afficher C---   \342\231\245                                     ", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainFarahCpp", "CONSULTER CITOYEN", Q_NULLPTR));
        fontComboBox->clear();
        fontComboBox->insertItems(0, QStringList()
         << QApplication::translate("MainFarahCpp", "cin", Q_NULLPTR)
        );
        trier->setText(QApplication::translate("MainFarahCpp", "Trier", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainFarahCpp", " tri par", Q_NULLPTR));
        recher->setText(QApplication::translate("MainFarahCpp", "Search", Q_NULLPTR));
        groupBox_20->setTitle(QApplication::translate("MainFarahCpp", "\342\231\245 PDF case\342\231\245  ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainFarahCpp", "PDF", Q_NULLPTR));
        croissant->setText(QApplication::translate("MainFarahCpp", "croissant", Q_NULLPTR));
        decroissant->setText(QApplication::translate("MainFarahCpp", "decroissant", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainFarahCpp", "Afficher", Q_NULLPTR));
        groupBox_21->setTitle(QString());
        sendBtn->setText(QApplication::translate("MainFarahCpp", "Envoyer", Q_NULLPTR));
        rcpt->setPlaceholderText(QApplication::translate("MainFarahCpp", "De", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("MainFarahCpp", "Objet", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("MainFarahCpp", "Attachement", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("MainFarahCpp", "                                                                   TYPE YOUR MESSAGE HERE...", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("MainFarahCpp", "Mot de passe ", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("MainFarahCpp", "Parcourir ", Q_NULLPTR));
        groupBox_22->setTitle(QApplication::translate("MainFarahCpp", "\342\231\245 Code QR", Q_NULLPTR));
        label_qrcode->setText(QApplication::translate("MainFarahCpp", "QrCode label", Q_NULLPTR));
        pb_code->setText(QApplication::translate("MainFarahCpp", "QrCode", Q_NULLPTR));
        groupBox_23->setTitle(QApplication::translate("MainFarahCpp", "Excel case", Q_NULLPTR));
        pb_excel->setText(QApplication::translate("MainFarahCpp", "Excel click", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_11), QApplication::translate("MainFarahCpp", "Chat", Q_NULLPTR));
        groupBox_24->setTitle(QApplication::translate("MainFarahCpp", "ARDUINO ", Q_NULLPTR));
        groupBox_26->setTitle(QApplication::translate("MainFarahCpp", "Etat", Q_NULLPTR));
        pushButton_OFF->setText(QApplication::translate("MainFarahCpp", "OFF", Q_NULLPTR));
        pushButton_ON->setText(QApplication::translate("MainFarahCpp", "ON", Q_NULLPTR));
        groupBox_27->setTitle(QApplication::translate("MainFarahCpp", "Carte", Q_NULLPTR));
        label_3arduino->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_12), QApplication::translate("MainFarahCpp", "ARDUINO ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainFarahCpp: public Ui_MainFarahCpp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFARAHCPP_H

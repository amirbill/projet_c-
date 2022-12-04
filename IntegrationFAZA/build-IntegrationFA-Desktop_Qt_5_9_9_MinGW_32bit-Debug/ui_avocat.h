/********************************************************************************
** Form generated from reading UI file 'avocat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVOCAT_H
#define UI_AVOCAT_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "webaxwidget.h"

QT_BEGIN_NAMESPACE

class Ui_avocat
{
public:
    QTabWidget *statt;
    QWidget *ajout;
    QGroupBox *groupBox_ajouteravocat;
    QLabel *label_t1nom;
    QLabel *label_t1prenom;
    QLabel *label_t1age;
    QLabel *label_t1cin;
    QLabel *label_t1num;
    QLabel *label_t1adr;
    QLabel *label_t1nbr;
    QLabel *label_t1speciali;
    QLineEdit *lineEdit_t1nom;
    QLineEdit *lineEdit_t1prenom;
    QLineEdit *lineEdit_t1age;
    QLineEdit *lineEdit_t1cin;
    QLineEdit *lineEdit_t1numerotele;
    QLineEdit *lineEdit_t1specialite;
    QLineEdit *lineEdit_t1adr;
    QLineEdit *lineEdit_t1anneeex;
    QPushButton *pushButton_quitter;
    QPushButton *pushButton_valider;
    QGroupBox *groupBox_7;
    QPushButton *pushButton_4;
    QFrame *frame_2;
    QWidget *supprimer;
    QGroupBox *groupBox_6;
    QTableView *tableView_2;
    QScrollBar *verticalScrollBar_2;
    QPushButton *suprimer;
    QLabel *label;
    QLineEdit *lineEdit_supp;
    QProgressBar *progressBar;
    QFrame *line;
    QFrame *line_2;
    QWidget *editer;
    QGroupBox *groupBox_4;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLineEdit *lineEdit_nomaff;
    QLineEdit *lineEdit_prenomaff;
    QLineEdit *lineEdit_ageaff;
    QLineEdit *lineEdit_cinaff;
    QLineEdit *lineEdit_numeroteleaff;
    QLineEdit *lineEdit_specialiteaff;
    QLineEdit *lineEdit_adraff;
    QLineEdit *lineEdit_anneeexaff;
    QPushButton *pushButton_modifier;
    QGroupBox *groupBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLineEdit *lineEdit_recherche;
    QLabel *label_2;
    QPushButton *pushButton;
    QGroupBox *groupBox_5;
    QScrollBar *verticalScrollBar;
    QWidget *affichage;
    QGroupBox *groupBox_3;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *lineEdit_nom_3;
    QLineEdit *lineEdit_prenom_3;
    QLineEdit *lineEdit_age_3;
    QLineEdit *lineEdit_cin_3;
    QLineEdit *lineEdit_numerotele_3;
    QLineEdit *lineEdit_specialite_3;
    QLineEdit *lineEdit_adr_3;
    QLineEdit *lineEdit_anneeex_3;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_3;
    QTableView *tabaffichage;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QWidget *tab;
    QPushButton *imprimer;
    QTextEdit *textEdit_imp;
    QWidget *tab_2;
    QGroupBox *groupBox_8;
    QFrame *graphe;
    QHBoxLayout *horizontalLayout;
    QWidget *tab_3;
    WebAxWidget *map;
    QWidget *tab_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QTextEdit *textEdit;
    QWidget *tab_5;
    QGroupBox *groupBox_9;
    QLabel *label_4;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *avocat)
    {
        if (avocat->objectName().isEmpty())
            avocat->setObjectName(QStringLiteral("avocat"));
        avocat->resize(977, 573);
        statt = new QTabWidget(avocat);
        statt->setObjectName(QStringLiteral("statt"));
        statt->setGeometry(QRect(0, 0, 981, 571));
        statt->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"  color: #b1b1b1;\n"
"    background-color: #674ea7;\n"
"/*border-radius:100px*/\n"
"/*#323232; loun el page mtaa e l ajout w mtaa el supprimer w el adition w el affichage */\n"
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
"       "
                        " x1:0, y1:0,\n"
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
"    border: 1px solid #000;\n"
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
"    background-color:#323232 ;\n"
"/*#323232*/\n"
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
"    "
                        "border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color:#073763 /*#b1b1b1*/;  /*#565656 ,#525252 ,#4e4e4e,#4a4a4a, #464646*/\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #3d85c6, stop: 0.1 #3d85c6, stop: 0.5 #3d85c6, stop: 0.9 #3d85c6, stop: 1 #3d85c6);\n"
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
"  "
                        "  border-style: solid;\n"
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
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
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
""
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
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
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
"      border"
                        ": 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
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
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, s"
                        "top: 1 #3d85c6 /*#484848*/);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #8e7cc3/*#ffa02f*/, stop: 0.5 #8e7cc3/*#d7801a*/, stop: 1 #8e7cc3/*#ffa02f*/);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #3d85c6/*#ffa02f*/, stop: 1 #8e7cc3 /*#d7801a*/);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #3d85c6/*#d7801a*/, stop: 1 #8e7cc3/*#ffa02f*/);\n"
"      height: 14px;\n"
"      subcontrol-position: top"
                        ";\n"
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
"color:#414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, sto"
                        "p: 0.5 #242424, stop:1 #323232);\n"
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
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801"
                        "a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
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
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
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
"    background-color:#3d85c6 /*#d7801a*/;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    bac"
                        "kground-color: #323232;\n"
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
"QTabBar::tab:first:!selected\n"
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
"QTabBar::tab:!selected:hove"
                        "r\n"
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
"    border: 1px solid #b1b1b1;\n"
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
"QRadioButton::"
                        "indicator:hover, QCheckBox::indicator:hover\n"
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
"}"));
        statt->setTabPosition(QTabWidget::North);
        statt->setTabShape(QTabWidget::Rounded);
        ajout = new QWidget();
        ajout->setObjectName(QStringLiteral("ajout"));
        groupBox_ajouteravocat = new QGroupBox(ajout);
        groupBox_ajouteravocat->setObjectName(QStringLiteral("groupBox_ajouteravocat"));
        groupBox_ajouteravocat->setGeometry(QRect(30, 30, 921, 481));
        groupBox_ajouteravocat->setStyleSheet(QLatin1String("QGroupBox{\n"
"border: 5px solid gray;\n"
"	border-color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"}\n"
"\n"
" "));
        groupBox_ajouteravocat->setAlignment(Qt::AlignCenter);
        groupBox_ajouteravocat->setCheckable(false);
        groupBox_ajouteravocat->setChecked(false);
        label_t1nom = new QLabel(groupBox_ajouteravocat);
        label_t1nom->setObjectName(QStringLiteral("label_t1nom"));
        label_t1nom->setGeometry(QRect(30, 70, 56, 16));
        label_t1nom->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_t1prenom = new QLabel(groupBox_ajouteravocat);
        label_t1prenom->setObjectName(QStringLiteral("label_t1prenom"));
        label_t1prenom->setGeometry(QRect(30, 140, 71, 21));
        label_t1prenom->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_t1age = new QLabel(groupBox_ajouteravocat);
        label_t1age->setObjectName(QStringLiteral("label_t1age"));
        label_t1age->setGeometry(QRect(30, 200, 56, 16));
        label_t1age->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_t1cin = new QLabel(groupBox_ajouteravocat);
        label_t1cin->setObjectName(QStringLiteral("label_t1cin"));
        label_t1cin->setGeometry(QRect(30, 270, 56, 16));
        label_t1cin->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_t1num = new QLabel(groupBox_ajouteravocat);
        label_t1num->setObjectName(QStringLiteral("label_t1num"));
        label_t1num->setGeometry(QRect(260, 70, 191, 21));
        label_t1num->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_t1adr = new QLabel(groupBox_ajouteravocat);
        label_t1adr->setObjectName(QStringLiteral("label_t1adr"));
        label_t1adr->setGeometry(QRect(275, 200, 71, 21));
        label_t1adr->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_t1nbr = new QLabel(groupBox_ajouteravocat);
        label_t1nbr->setObjectName(QStringLiteral("label_t1nbr"));
        label_t1nbr->setGeometry(QRect(260, 270, 191, 16));
        label_t1nbr->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_t1speciali = new QLabel(groupBox_ajouteravocat);
        label_t1speciali->setObjectName(QStringLiteral("label_t1speciali"));
        label_t1speciali->setGeometry(QRect(270, 140, 111, 21));
        label_t1speciali->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        lineEdit_t1nom = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1nom->setObjectName(QStringLiteral("lineEdit_t1nom"));
        lineEdit_t1nom->setGeometry(QRect(100, 70, 113, 22));
        lineEdit_t1nom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"\n"
"/*font: 75 8pt \"Monotype Koufi\"; */"));
        lineEdit_t1prenom = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1prenom->setObjectName(QStringLiteral("lineEdit_t1prenom"));
        lineEdit_t1prenom->setGeometry(QRect(100, 140, 113, 22));
        lineEdit_t1prenom->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_t1age = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1age->setObjectName(QStringLiteral("lineEdit_t1age"));
        lineEdit_t1age->setGeometry(QRect(100, 200, 113, 22));
        lineEdit_t1age->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_t1cin = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1cin->setObjectName(QStringLiteral("lineEdit_t1cin"));
        lineEdit_t1cin->setGeometry(QRect(100, 270, 113, 22));
        lineEdit_t1cin->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_t1numerotele = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1numerotele->setObjectName(QStringLiteral("lineEdit_t1numerotele"));
        lineEdit_t1numerotele->setGeometry(QRect(450, 70, 113, 22));
        lineEdit_t1numerotele->setStyleSheet(QLatin1String("\n"
"background-color: rgb(255, 255, 255);"));
        lineEdit_t1specialite = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1specialite->setObjectName(QStringLiteral("lineEdit_t1specialite"));
        lineEdit_t1specialite->setGeometry(QRect(450, 140, 113, 22));
        lineEdit_t1specialite->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_t1adr = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1adr->setObjectName(QStringLiteral("lineEdit_t1adr"));
        lineEdit_t1adr->setGeometry(QRect(450, 200, 113, 22));
        lineEdit_t1adr->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_t1anneeex = new QLineEdit(groupBox_ajouteravocat);
        lineEdit_t1anneeex->setObjectName(QStringLiteral("lineEdit_t1anneeex"));
        lineEdit_t1anneeex->setGeometry(QRect(450, 270, 113, 22));
        lineEdit_t1anneeex->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_quitter = new QPushButton(groupBox_ajouteravocat);
        pushButton_quitter->setObjectName(QStringLiteral("pushButton_quitter"));
        pushButton_quitter->setGeometry(QRect(190, 380, 111, 41));
        pushButton_valider = new QPushButton(groupBox_ajouteravocat);
        pushButton_valider->setObjectName(QStringLiteral("pushButton_valider"));
        pushButton_valider->setGeometry(QRect(400, 380, 101, 41));
        groupBox_7 = new QGroupBox(groupBox_ajouteravocat);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(630, 50, 241, 301));
        pushButton_4 = new QPushButton(groupBox_7);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 270, 81, 21));
        frame_2 = new QFrame(groupBox_ajouteravocat);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(610, 360, 271, 101));
        frame_2->setStyleSheet(QStringLiteral("image: url(:/log1.png);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        statt->addTab(ajout, QString());
        supprimer = new QWidget();
        supprimer->setObjectName(QStringLiteral("supprimer"));
        groupBox_6 = new QGroupBox(supprimer);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(70, 180, 881, 201));
        groupBox_6->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        tableView_2 = new QTableView(groupBox_6);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(15, 21, 841, 171));
        verticalScrollBar_2 = new QScrollBar(groupBox_6);
        verticalScrollBar_2->setObjectName(QStringLiteral("verticalScrollBar_2"));
        verticalScrollBar_2->setGeometry(QRect(820, 30, 20, 151));
        verticalScrollBar_2->setOrientation(Qt::Vertical);
        suprimer = new QPushButton(supprimer);
        suprimer->setObjectName(QStringLiteral("suprimer"));
        suprimer->setGeometry(QRect(440, 450, 161, 51));
        suprimer->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        label = new QLabel(supprimer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 90, 321, 41));
        label->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit_supp = new QLineEdit(supprimer);
        lineEdit_supp->setObjectName(QStringLiteral("lineEdit_supp"));
        lineEdit_supp->setGeometry(QRect(530, 90, 231, 41));
        lineEdit_supp->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        progressBar = new QProgressBar(supprimer);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(190, 550, 641, 41));
        progressBar->setValue(24);
        line = new QFrame(supprimer);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(200, 460, 241, 31));
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(supprimer);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(600, 460, 231, 31));
        line_2->setStyleSheet(QStringLiteral(""));
        line_2->setLineWidth(3);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        statt->addTab(supprimer, QString());
        editer = new QWidget();
        editer->setObjectName(QStringLiteral("editer"));
        groupBox_4 = new QGroupBox(editer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(300, 10, 581, 381));
        groupBox_4->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(30, 70, 56, 16));
        label_28->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_29 = new QLabel(groupBox_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(30, 140, 71, 21));
        label_29->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_30 = new QLabel(groupBox_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(30, 200, 56, 16));
        label_30->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_31 = new QLabel(groupBox_4);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(30, 270, 56, 16));
        label_31->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_32 = new QLabel(groupBox_4);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(260, 70, 191, 21));
        label_32->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_34 = new QLabel(groupBox_4);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(275, 200, 71, 21));
        label_34->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_35 = new QLabel(groupBox_4);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(270, 270, 181, 21));
        label_35->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_36 = new QLabel(groupBox_4);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(270, 140, 111, 21));
        label_36->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        lineEdit_nomaff = new QLineEdit(groupBox_4);
        lineEdit_nomaff->setObjectName(QStringLiteral("lineEdit_nomaff"));
        lineEdit_nomaff->setGeometry(QRect(100, 70, 113, 22));
        lineEdit_nomaff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_prenomaff = new QLineEdit(groupBox_4);
        lineEdit_prenomaff->setObjectName(QStringLiteral("lineEdit_prenomaff"));
        lineEdit_prenomaff->setGeometry(QRect(100, 140, 113, 22));
        lineEdit_prenomaff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_ageaff = new QLineEdit(groupBox_4);
        lineEdit_ageaff->setObjectName(QStringLiteral("lineEdit_ageaff"));
        lineEdit_ageaff->setGeometry(QRect(100, 200, 113, 22));
        lineEdit_ageaff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_cinaff = new QLineEdit(groupBox_4);
        lineEdit_cinaff->setObjectName(QStringLiteral("lineEdit_cinaff"));
        lineEdit_cinaff->setGeometry(QRect(100, 270, 113, 22));
        lineEdit_cinaff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_numeroteleaff = new QLineEdit(groupBox_4);
        lineEdit_numeroteleaff->setObjectName(QStringLiteral("lineEdit_numeroteleaff"));
        lineEdit_numeroteleaff->setGeometry(QRect(450, 70, 113, 22));
        lineEdit_numeroteleaff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_specialiteaff = new QLineEdit(groupBox_4);
        lineEdit_specialiteaff->setObjectName(QStringLiteral("lineEdit_specialiteaff"));
        lineEdit_specialiteaff->setGeometry(QRect(450, 140, 113, 22));
        lineEdit_specialiteaff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_adraff = new QLineEdit(groupBox_4);
        lineEdit_adraff->setObjectName(QStringLiteral("lineEdit_adraff"));
        lineEdit_adraff->setGeometry(QRect(450, 200, 113, 22));
        lineEdit_adraff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_anneeexaff = new QLineEdit(groupBox_4);
        lineEdit_anneeexaff->setObjectName(QStringLiteral("lineEdit_anneeexaff"));
        lineEdit_anneeexaff->setGeometry(QRect(450, 270, 113, 22));
        lineEdit_anneeexaff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_modifier = new QPushButton(groupBox_4);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(230, 340, 151, 31));
        groupBox = new QGroupBox(editer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 281, 381));
        groupBox->setAlignment(Qt::AlignCenter);
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 80, 261, 281));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 259, 279));
        checkBox = new QCheckBox(scrollAreaWidgetContents);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(20, 20, 191, 31));
        checkBox->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        checkBox_2 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 60, 191, 31));
        checkBox_2->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        checkBox_3 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 100, 251, 31));
        checkBox_3->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        checkBox_4 = new QCheckBox(scrollAreaWidgetContents);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(20, 130, 191, 41));
        checkBox_4->setStyleSheet(QLatin1String("font: 87 8pt \"Segoe UI Black\";\n"
""));
        lineEdit_recherche = new QLineEdit(scrollAreaWidgetContents);
        lineEdit_recherche->setObjectName(QStringLiteral("lineEdit_recherche"));
        lineEdit_recherche->setGeometry(QRect(100, 200, 141, 21));
        lineEdit_recherche->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 200, 81, 21));
        label_2->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 240, 93, 28));
        scrollArea->setWidget(scrollAreaWidgetContents);
        groupBox_5 = new QGroupBox(editer);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 390, 881, 201));
        groupBox_5->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        verticalScrollBar = new QScrollBar(groupBox_5);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(840, 30, 16, 160));
        verticalScrollBar->setOrientation(Qt::Vertical);
        statt->addTab(editer, QString());
        affichage = new QWidget();
        affichage->setObjectName(QStringLiteral("affichage"));
        groupBox_3 = new QGroupBox(affichage);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(40, 290, 971, 311));
        groupBox_3->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(30, 70, 56, 16));
        label_19->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 140, 71, 21));
        label_20->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 200, 56, 16));
        label_21->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 270, 56, 16));
        label_22->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(580, 70, 191, 21));
        label_23->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(580, 200, 71, 21));
        label_25->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(580, 260, 181, 16));
        label_26->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(580, 140, 111, 21));
        label_27->setStyleSheet(QStringLiteral("font: 87 8pt \"Segoe UI Black\";"));
        lineEdit_nom_3 = new QLineEdit(groupBox_3);
        lineEdit_nom_3->setObjectName(QStringLiteral("lineEdit_nom_3"));
        lineEdit_nom_3->setGeometry(QRect(100, 70, 113, 22));
        lineEdit_nom_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_prenom_3 = new QLineEdit(groupBox_3);
        lineEdit_prenom_3->setObjectName(QStringLiteral("lineEdit_prenom_3"));
        lineEdit_prenom_3->setGeometry(QRect(100, 140, 113, 22));
        lineEdit_prenom_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_age_3 = new QLineEdit(groupBox_3);
        lineEdit_age_3->setObjectName(QStringLiteral("lineEdit_age_3"));
        lineEdit_age_3->setGeometry(QRect(100, 200, 113, 22));
        lineEdit_age_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_cin_3 = new QLineEdit(groupBox_3);
        lineEdit_cin_3->setObjectName(QStringLiteral("lineEdit_cin_3"));
        lineEdit_cin_3->setGeometry(QRect(100, 270, 113, 22));
        lineEdit_cin_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_numerotele_3 = new QLineEdit(groupBox_3);
        lineEdit_numerotele_3->setObjectName(QStringLiteral("lineEdit_numerotele_3"));
        lineEdit_numerotele_3->setGeometry(QRect(780, 70, 113, 22));
        lineEdit_numerotele_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_specialite_3 = new QLineEdit(groupBox_3);
        lineEdit_specialite_3->setObjectName(QStringLiteral("lineEdit_specialite_3"));
        lineEdit_specialite_3->setGeometry(QRect(780, 140, 113, 22));
        lineEdit_specialite_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_adr_3 = new QLineEdit(groupBox_3);
        lineEdit_adr_3->setObjectName(QStringLiteral("lineEdit_adr_3"));
        lineEdit_adr_3->setGeometry(QRect(780, 200, 113, 22));
        lineEdit_adr_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_anneeex_3 = new QLineEdit(groupBox_3);
        lineEdit_anneeex_3->setObjectName(QStringLiteral("lineEdit_anneeex_3"));
        lineEdit_anneeex_3->setGeometry(QRect(780, 260, 113, 22));
        lineEdit_anneeex_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(270, 40, 221, 251));
        groupBox_2->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(affichage);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 260, 191, 31));
        pushButton_3->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        tabaffichage = new QTableView(affichage);
        tabaffichage->setObjectName(QStringLiteral("tabaffichage"));
        tabaffichage->setGeometry(QRect(120, 100, 781, 151));
        lineEdit_3 = new QLineEdit(affichage);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(510, 40, 241, 41));
        lineEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(affichage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(225, 50, 291, 21));
        label_3->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        statt->addTab(affichage, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        imprimer = new QPushButton(tab);
        imprimer->setObjectName(QStringLiteral("imprimer"));
        imprimer->setGeometry(QRect(740, 270, 241, 101));
        textEdit_imp = new QTextEdit(tab);
        textEdit_imp->setObjectName(QStringLiteral("textEdit_imp"));
        textEdit_imp->setGeometry(QRect(30, 30, 501, 561));
        textEdit_imp->setStyleSheet(QLatin1String("\n"
"\n"
"background-color: rgb(255, 255, 255);"));
        statt->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_8 = new QGroupBox(tab_2);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setGeometry(QRect(150, 90, 761, 461));
        graphe = new QFrame(groupBox_8);
        graphe->setObjectName(QStringLiteral("graphe"));
        graphe->setGeometry(QRect(29, 39, 701, 401));
        horizontalLayout = new QHBoxLayout(graphe);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        statt->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        map = new WebAxWidget(tab_3);
        map->setControl(QStringLiteral("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
        map->setObjectName(QStringLiteral("map"));
        map->setProperty("focusPolicy", QVariant::fromValue(Qt::StrongFocus));
        map->setProperty("geometry", QVariant(QRect(110, 50, 821, 521)));
        statt->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(880, 490, 131, 31));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(880, 410, 131, 31));
        textEdit = new QTextEdit(tab_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(190, 110, 581, 431));
        textEdit->setReadOnly(true);
        statt->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_9 = new QGroupBox(tab_5);
        groupBox_9->setObjectName(QStringLiteral("groupBox_9"));
        groupBox_9->setGeometry(QRect(210, 210, 611, 261));
        groupBox_9->setStyleSheet(QLatin1String("QGroupBox{\n"
"border: 5px solid gray;\n"
"	border-color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"}\n"
"Q{\n"
"border: 5px solid gray;\n"
"	border-color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"}"));
        label_4 = new QLabel(groupBox_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 100, 291, 81));
        label_4->setStyleSheet(QLatin1String("Qlabel{\n"
"border: 5px solid gray;\n"
"	border-color: rgb(255, 255, 255);\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);
        lcdNumber = new QLCDNumber(groupBox_9);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(350, 90, 181, 91));
        statt->addTab(tab_5, QString());

        retranslateUi(avocat);

        statt->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(avocat);
    } // setupUi

    void retranslateUi(QDialog *avocat)
    {
        avocat->setWindowTitle(QApplication::translate("avocat", "Dialog", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        statt->setWhatsThis(QApplication::translate("avocat", "<html><head/><body></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        groupBox_ajouteravocat->setTitle(QApplication::translate("avocat", "AJOUTER UN AVOCAT ", Q_NULLPTR));
        label_t1nom->setText(QApplication::translate("avocat", "NOM", Q_NULLPTR));
        label_t1prenom->setText(QApplication::translate("avocat", "PRENOM", Q_NULLPTR));
        label_t1age->setText(QApplication::translate("avocat", "AGE", Q_NULLPTR));
        label_t1cin->setText(QApplication::translate("avocat", "CIN", Q_NULLPTR));
        label_t1num->setText(QApplication::translate("avocat", "NUMERO DE TELEPHONE", Q_NULLPTR));
        label_t1adr->setText(QApplication::translate("avocat", "ADRESSE", Q_NULLPTR));
        label_t1nbr->setText(QApplication::translate("avocat", "NBR D ANNEE D EXPERIENCE", Q_NULLPTR));
        label_t1speciali->setText(QApplication::translate("avocat", "SPECIALITE", Q_NULLPTR));
        lineEdit_t1nom->setText(QString());
        pushButton_quitter->setText(QApplication::translate("avocat", "QUITTER", Q_NULLPTR));
        pushButton_valider->setText(QApplication::translate("avocat", "VALIDEER", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("avocat", "Ajouter une photo ", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("avocat", "Ajouter", Q_NULLPTR));
        statt->setTabText(statt->indexOf(ajout), QApplication::translate("avocat", "Ajout ", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("avocat", "Selectionner l avocat a suprimmer :", Q_NULLPTR));
        suprimer->setText(QApplication::translate("avocat", "Supprimer", Q_NULLPTR));
        label->setText(QApplication::translate("avocat", "Chercher l avocat a supprimer :", Q_NULLPTR));
        statt->setTabText(statt->indexOf(supprimer), QApplication::translate("avocat", "Supprimer", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("avocat", "Modifier l'avocat selectioner ", Q_NULLPTR));
        label_28->setText(QApplication::translate("avocat", "NOM", Q_NULLPTR));
        label_29->setText(QApplication::translate("avocat", "PRENOM", Q_NULLPTR));
        label_30->setText(QApplication::translate("avocat", "AGE", Q_NULLPTR));
        label_31->setText(QApplication::translate("avocat", "CIN", Q_NULLPTR));
        label_32->setText(QApplication::translate("avocat", "NUMERO DE TELEPHONE", Q_NULLPTR));
        label_34->setText(QApplication::translate("avocat", "ADRESSE", Q_NULLPTR));
        label_35->setText(QApplication::translate("avocat", "NBR ANNEE D EXPERIENCE", Q_NULLPTR));
        label_36->setText(QApplication::translate("avocat", "SPECIALITE", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("avocat", "Modiffier ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("avocat", "Chercher un avocat tous depend :", Q_NULLPTR));
        checkBox->setText(QApplication::translate("avocat", " cin", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("avocat", "nom", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("avocat", "telephone", Q_NULLPTR));
        checkBox_4->setText(QApplication::translate("avocat", "specialite", Q_NULLPTR));
        label_2->setText(QApplication::translate("avocat", "Chercher :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("avocat", "chercher", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("avocat", "Selectionner un avocat :", Q_NULLPTR));
        statt->setTabText(statt->indexOf(editer), QApplication::translate("avocat", "Edition", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("avocat", "Affichage de avocat", Q_NULLPTR));
        label_19->setText(QApplication::translate("avocat", "NOM", Q_NULLPTR));
        label_20->setText(QApplication::translate("avocat", "PRENOM", Q_NULLPTR));
        label_21->setText(QApplication::translate("avocat", "AGE", Q_NULLPTR));
        label_22->setText(QApplication::translate("avocat", "CIN", Q_NULLPTR));
        label_23->setText(QApplication::translate("avocat", "NUMERO DE TELEPHONE", Q_NULLPTR));
        label_25->setText(QApplication::translate("avocat", "ADRESSE", Q_NULLPTR));
        label_26->setText(QApplication::translate("avocat", "NBR ANNEE D EXPERIENCE", Q_NULLPTR));
        label_27->setText(QApplication::translate("avocat", "SPECIALITE", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("avocat", "Photo", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("avocat", "Afficher", Q_NULLPTR));
        label_3->setText(QApplication::translate("avocat", "Selectionner l avocat a afficher", Q_NULLPTR));
        statt->setTabText(statt->indexOf(affichage), QApplication::translate("avocat", "Affichage ", Q_NULLPTR));
        imprimer->setText(QApplication::translate("avocat", "imprimer", Q_NULLPTR));
        textEdit_imp->setHtml(QApplication::translate("avocat", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        statt->setTabText(statt->indexOf(tab), QApplication::translate("avocat", "impression", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("avocat", "statistique", Q_NULLPTR));
        statt->setTabText(statt->indexOf(tab_2), QApplication::translate("avocat", "statistique", Q_NULLPTR));
        statt->setTabText(statt->indexOf(tab_3), QApplication::translate("avocat", "map", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("avocat", "actualiser historique", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("avocat", "effacer historique", Q_NULLPTR));
        statt->setTabText(statt->indexOf(tab_4), QApplication::translate("avocat", "historique", Q_NULLPTR));
        groupBox_9->setTitle(QApplication::translate("avocat", "arduino ", Q_NULLPTR));
        label_4->setText(QApplication::translate("avocat", "temperature", Q_NULLPTR));
        statt->setTabText(statt->indexOf(tab_5), QApplication::translate("avocat", "arduino", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class avocat: public Ui_avocat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVOCAT_H

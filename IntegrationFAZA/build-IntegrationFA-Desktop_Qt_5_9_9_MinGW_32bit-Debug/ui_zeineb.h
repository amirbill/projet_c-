/********************************************************************************
** Form generated from reading UI file 'zeineb.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZEINEB_H
#define UI_ZEINEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_zeineb
{
public:
    QTabWidget *PDF;
    QWidget *Ajouter;
    QGroupBox *groupBox_Ajouter;
    QLabel *label_CIN;
    QLabel *label_nom;
    QLabel *label_prenom;
    QLineEdit *CIN;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *addresse;
    QLineEdit *datedemboche;
    QLineEdit *datedenaissance;
    QLineEdit *note;
    QLineEdit *joursdeconges;
    QLineEdit *role;
    QLineEdit *telephone;
    QLineEdit *salaire;
    QLabel *label_datedenaissance;
    QLabel *label_addresse;
    QLabel *label_telephone;
    QLabel *label_note;
    QLabel *label_datedemboche;
    QLabel *label_joursdeconges;
    QLabel *label_salaire;
    QLabel *label_role;
    QPushButton *pushButton_ajouter;
    QWidget *Afficher;
    QGroupBox *groupBox_5;
    QTableView *tab_employe;
    QLineEdit *lineEditCIN_8;
    QLabel *label_CIN_8;
    QPushButton *pushButton_chercher_4;
    QPushButton *trier;
    QGroupBox *groupBox_modifier;
    QLabel *label_CIN_2;
    QLabel *label_nom_2;
    QLabel *label_prenom_2;
    QLineEdit *CIN_2;
    QLineEdit *nom_2;
    QLineEdit *prenom_2;
    QLineEdit *addresse_2;
    QLineEdit *datedemboche_2;
    QLineEdit *datedenaissance_2;
    QLineEdit *note_2;
    QLineEdit *joursdeconges_2;
    QLineEdit *role_2;
    QLineEdit *telephone_2;
    QLabel *label_datedenaissance_2;
    QLabel *label_addresse_2;
    QLabel *label_telephone_2;
    QLabel *label_note_2;
    QLabel *label_datedemboche_2;
    QLabel *label_joursdeconges_2;
    QLabel *label_salaire_2;
    QLabel *label_role_2;
    QPushButton *pushButton_modifier;
    QLineEdit *salaire_2;
    QWidget *Supprimer;
    QGroupBox *groupBox_supprimer;
    QLabel *label_CIN_4;
    QLineEdit *lineEdit_CIN_4;
    QPushButton *pushButton_supprimer;
    QPushButton *pushButton_annuler_3;
    QWidget *tab_3;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit;
    QPushButton *imprimer;
    QWidget *tab_2;
    QGroupBox *groupBox_4;
    QTableView *tab_prime;
    QGroupBox *groupBox_supprimer_4;
    QLabel *label_CIN_7;
    QLineEdit *lineEditCIN_7;
    QPushButton *pushButton_chercher_3;
    QWidget *tab_4;
    QTableView *recherche_2;
    QTableView *tableView_2;
    QGroupBox *groupBox_supprimer_3;
    QLabel *label_CIN_6;
    QLineEdit *lineEditCIN_6;
    QPushButton *pushButton_chercher_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *cin;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *nj;
    QLineEdit *type;
    QLineEdit *id;
    QPushButton *ajouter_conge;
    QTableView *sum;
    QWidget *tab_5;
    QGroupBox *groupBox_2;
    QLineEdit *rcpt_2;
    QLineEdit *subject;
    QLineEdit *mail_pass;
    QLineEdit *file;
    QPushButton *browseBtn;
    QTextEdit *msg;
    QPushButton *sendBtn;

    void setupUi(QDialog *zeineb)
    {
        if (zeineb->objectName().isEmpty())
            zeineb->setObjectName(QStringLiteral("zeineb"));
        zeineb->resize(1396, 957);
        PDF = new QTabWidget(zeineb);
        PDF->setObjectName(QStringLiteral("PDF"));
        PDF->setGeometry(QRect(20, 10, 1021, 941));
        PDF->setContextMenuPolicy(Qt::PreventContextMenu);
        PDF->setStyleSheet(QLatin1String("QToolTip\n"
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
        Ajouter = new QWidget();
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        groupBox_Ajouter = new QGroupBox(Ajouter);
        groupBox_Ajouter->setObjectName(QStringLiteral("groupBox_Ajouter"));
        groupBox_Ajouter->setGeometry(QRect(100, 50, 691, 571));
        label_CIN = new QLabel(groupBox_Ajouter);
        label_CIN->setObjectName(QStringLiteral("label_CIN"));
        label_CIN->setEnabled(true);
        label_CIN->setGeometry(QRect(50, 40, 171, 21));
        label_nom = new QLabel(groupBox_Ajouter);
        label_nom->setObjectName(QStringLiteral("label_nom"));
        label_nom->setGeometry(QRect(50, 80, 171, 21));
        label_prenom = new QLabel(groupBox_Ajouter);
        label_prenom->setObjectName(QStringLiteral("label_prenom"));
        label_prenom->setGeometry(QRect(50, 120, 171, 21));
        CIN = new QLineEdit(groupBox_Ajouter);
        CIN->setObjectName(QStringLiteral("CIN"));
        CIN->setGeometry(QRect(300, 40, 271, 21));
        nom = new QLineEdit(groupBox_Ajouter);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(300, 80, 271, 21));
        prenom = new QLineEdit(groupBox_Ajouter);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(300, 120, 271, 21));
        addresse = new QLineEdit(groupBox_Ajouter);
        addresse->setObjectName(QStringLiteral("addresse"));
        addresse->setGeometry(QRect(300, 200, 271, 21));
        datedemboche = new QLineEdit(groupBox_Ajouter);
        datedemboche->setObjectName(QStringLiteral("datedemboche"));
        datedemboche->setGeometry(QRect(300, 320, 271, 21));
        datedenaissance = new QLineEdit(groupBox_Ajouter);
        datedenaissance->setObjectName(QStringLiteral("datedenaissance"));
        datedenaissance->setGeometry(QRect(300, 160, 271, 21));
        note = new QLineEdit(groupBox_Ajouter);
        note->setObjectName(QStringLiteral("note"));
        note->setGeometry(QRect(300, 400, 271, 21));
        joursdeconges = new QLineEdit(groupBox_Ajouter);
        joursdeconges->setObjectName(QStringLiteral("joursdeconges"));
        joursdeconges->setGeometry(QRect(300, 440, 271, 21));
        role = new QLineEdit(groupBox_Ajouter);
        role->setObjectName(QStringLiteral("role"));
        role->setGeometry(QRect(300, 280, 271, 21));
        telephone = new QLineEdit(groupBox_Ajouter);
        telephone->setObjectName(QStringLiteral("telephone"));
        telephone->setGeometry(QRect(300, 240, 271, 21));
        salaire = new QLineEdit(groupBox_Ajouter);
        salaire->setObjectName(QStringLiteral("salaire"));
        salaire->setGeometry(QRect(300, 360, 271, 21));
        label_datedenaissance = new QLabel(groupBox_Ajouter);
        label_datedenaissance->setObjectName(QStringLiteral("label_datedenaissance"));
        label_datedenaissance->setGeometry(QRect(50, 160, 171, 21));
        label_addresse = new QLabel(groupBox_Ajouter);
        label_addresse->setObjectName(QStringLiteral("label_addresse"));
        label_addresse->setGeometry(QRect(50, 200, 171, 21));
        label_telephone = new QLabel(groupBox_Ajouter);
        label_telephone->setObjectName(QStringLiteral("label_telephone"));
        label_telephone->setGeometry(QRect(50, 240, 171, 21));
        label_note = new QLabel(groupBox_Ajouter);
        label_note->setObjectName(QStringLiteral("label_note"));
        label_note->setGeometry(QRect(50, 400, 171, 21));
        label_datedemboche = new QLabel(groupBox_Ajouter);
        label_datedemboche->setObjectName(QStringLiteral("label_datedemboche"));
        label_datedemboche->setGeometry(QRect(50, 320, 171, 21));
        label_joursdeconges = new QLabel(groupBox_Ajouter);
        label_joursdeconges->setObjectName(QStringLiteral("label_joursdeconges"));
        label_joursdeconges->setGeometry(QRect(50, 440, 171, 21));
        label_salaire = new QLabel(groupBox_Ajouter);
        label_salaire->setObjectName(QStringLiteral("label_salaire"));
        label_salaire->setGeometry(QRect(50, 360, 171, 21));
        label_role = new QLabel(groupBox_Ajouter);
        label_role->setObjectName(QStringLiteral("label_role"));
        label_role->setGeometry(QRect(50, 280, 171, 21));
        pushButton_ajouter = new QPushButton(groupBox_Ajouter);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(500, 490, 111, 31));
        PDF->addTab(Ajouter, QString());
        Afficher = new QWidget();
        Afficher->setObjectName(QStringLiteral("Afficher"));
        groupBox_5 = new QGroupBox(Afficher);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 10, 981, 851));
        tab_employe = new QTableView(groupBox_5);
        tab_employe->setObjectName(QStringLiteral("tab_employe"));
        tab_employe->setGeometry(QRect(10, 110, 961, 261));
        lineEditCIN_8 = new QLineEdit(groupBox_5);
        lineEditCIN_8->setObjectName(QStringLiteral("lineEditCIN_8"));
        lineEditCIN_8->setGeometry(QRect(320, 20, 281, 21));
        label_CIN_8 = new QLabel(groupBox_5);
        label_CIN_8->setObjectName(QStringLiteral("label_CIN_8"));
        label_CIN_8->setGeometry(QRect(70, 20, 241, 21));
        pushButton_chercher_4 = new QPushButton(groupBox_5);
        pushButton_chercher_4->setObjectName(QStringLiteral("pushButton_chercher_4"));
        pushButton_chercher_4->setGeometry(QRect(670, 10, 111, 31));
        trier = new QPushButton(groupBox_5);
        trier->setObjectName(QStringLiteral("trier"));
        trier->setGeometry(QRect(670, 50, 111, 31));
        groupBox_modifier = new QGroupBox(groupBox_5);
        groupBox_modifier->setObjectName(QStringLiteral("groupBox_modifier"));
        groupBox_modifier->setGeometry(QRect(50, 410, 801, 381));
        label_CIN_2 = new QLabel(groupBox_modifier);
        label_CIN_2->setObjectName(QStringLiteral("label_CIN_2"));
        label_CIN_2->setEnabled(true);
        label_CIN_2->setGeometry(QRect(80, 40, 301, 21));
        label_nom_2 = new QLabel(groupBox_modifier);
        label_nom_2->setObjectName(QStringLiteral("label_nom_2"));
        label_nom_2->setGeometry(QRect(50, 90, 171, 21));
        label_prenom_2 = new QLabel(groupBox_modifier);
        label_prenom_2->setObjectName(QStringLiteral("label_prenom_2"));
        label_prenom_2->setGeometry(QRect(420, 90, 171, 21));
        CIN_2 = new QLineEdit(groupBox_modifier);
        CIN_2->setObjectName(QStringLiteral("CIN_2"));
        CIN_2->setGeometry(QRect(390, 40, 251, 21));
        nom_2 = new QLineEdit(groupBox_modifier);
        nom_2->setObjectName(QStringLiteral("nom_2"));
        nom_2->setGeometry(QRect(240, 90, 131, 21));
        prenom_2 = new QLineEdit(groupBox_modifier);
        prenom_2->setObjectName(QStringLiteral("prenom_2"));
        prenom_2->setGeometry(QRect(610, 90, 131, 21));
        addresse_2 = new QLineEdit(groupBox_modifier);
        addresse_2->setObjectName(QStringLiteral("addresse_2"));
        addresse_2->setGeometry(QRect(610, 130, 131, 21));
        datedemboche_2 = new QLineEdit(groupBox_modifier);
        datedemboche_2->setObjectName(QStringLiteral("datedemboche_2"));
        datedemboche_2->setGeometry(QRect(240, 210, 131, 21));
        datedenaissance_2 = new QLineEdit(groupBox_modifier);
        datedenaissance_2->setObjectName(QStringLiteral("datedenaissance_2"));
        datedenaissance_2->setGeometry(QRect(240, 130, 131, 21));
        note_2 = new QLineEdit(groupBox_modifier);
        note_2->setObjectName(QStringLiteral("note_2"));
        note_2->setGeometry(QRect(240, 250, 131, 21));
        joursdeconges_2 = new QLineEdit(groupBox_modifier);
        joursdeconges_2->setObjectName(QStringLiteral("joursdeconges_2"));
        joursdeconges_2->setGeometry(QRect(610, 250, 131, 21));
        role_2 = new QLineEdit(groupBox_modifier);
        role_2->setObjectName(QStringLiteral("role_2"));
        role_2->setGeometry(QRect(240, 170, 131, 21));
        telephone_2 = new QLineEdit(groupBox_modifier);
        telephone_2->setObjectName(QStringLiteral("telephone_2"));
        telephone_2->setGeometry(QRect(610, 170, 131, 21));
        label_datedenaissance_2 = new QLabel(groupBox_modifier);
        label_datedenaissance_2->setObjectName(QStringLiteral("label_datedenaissance_2"));
        label_datedenaissance_2->setGeometry(QRect(50, 130, 171, 21));
        label_addresse_2 = new QLabel(groupBox_modifier);
        label_addresse_2->setObjectName(QStringLiteral("label_addresse_2"));
        label_addresse_2->setGeometry(QRect(420, 130, 171, 21));
        label_telephone_2 = new QLabel(groupBox_modifier);
        label_telephone_2->setObjectName(QStringLiteral("label_telephone_2"));
        label_telephone_2->setGeometry(QRect(50, 170, 171, 21));
        label_note_2 = new QLabel(groupBox_modifier);
        label_note_2->setObjectName(QStringLiteral("label_note_2"));
        label_note_2->setGeometry(QRect(50, 250, 171, 21));
        label_datedemboche_2 = new QLabel(groupBox_modifier);
        label_datedemboche_2->setObjectName(QStringLiteral("label_datedemboche_2"));
        label_datedemboche_2->setGeometry(QRect(50, 210, 171, 21));
        label_joursdeconges_2 = new QLabel(groupBox_modifier);
        label_joursdeconges_2->setObjectName(QStringLiteral("label_joursdeconges_2"));
        label_joursdeconges_2->setGeometry(QRect(420, 250, 171, 21));
        label_salaire_2 = new QLabel(groupBox_modifier);
        label_salaire_2->setObjectName(QStringLiteral("label_salaire_2"));
        label_salaire_2->setGeometry(QRect(420, 210, 171, 21));
        label_role_2 = new QLabel(groupBox_modifier);
        label_role_2->setObjectName(QStringLiteral("label_role_2"));
        label_role_2->setGeometry(QRect(420, 170, 171, 21));
        pushButton_modifier = new QPushButton(groupBox_modifier);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(560, 330, 111, 31));
        salaire_2 = new QLineEdit(groupBox_modifier);
        salaire_2->setObjectName(QStringLiteral("salaire_2"));
        salaire_2->setGeometry(QRect(610, 210, 131, 21));
        PDF->addTab(Afficher, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        groupBox_supprimer = new QGroupBox(Supprimer);
        groupBox_supprimer->setObjectName(QStringLiteral("groupBox_supprimer"));
        groupBox_supprimer->setGeometry(QRect(100, 80, 721, 251));
        label_CIN_4 = new QLabel(groupBox_supprimer);
        label_CIN_4->setObjectName(QStringLiteral("label_CIN_4"));
        label_CIN_4->setGeometry(QRect(40, 70, 281, 31));
        lineEdit_CIN_4 = new QLineEdit(groupBox_supprimer);
        lineEdit_CIN_4->setObjectName(QStringLiteral("lineEdit_CIN_4"));
        lineEdit_CIN_4->setGeometry(QRect(390, 70, 281, 31));
        pushButton_supprimer = new QPushButton(groupBox_supprimer);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(390, 160, 111, 31));
        pushButton_annuler_3 = new QPushButton(groupBox_supprimer);
        pushButton_annuler_3->setObjectName(QStringLiteral("pushButton_annuler_3"));
        pushButton_annuler_3->setGeometry(QRect(560, 160, 111, 31));
        PDF->addTab(Supprimer, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 30, 671, 601));
        textEdit = new QTextEdit(groupBox_3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 40, 331, 461));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(103, 103, 103);\n"
"border-color: rgb(255, 255, 255);\n"
" padding:10px;\n"
"   /* border-style: solid;\n"
"  /*  border: 1px solid #1e1e1e;*/\n"
"    border-radius: 10;"));
        imprimer = new QPushButton(groupBox_3);
        imprimer->setObjectName(QStringLiteral("imprimer"));
        imprimer->setGeometry(QRect(450, 520, 93, 28));
        PDF->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 10, 921, 541));
        tab_prime = new QTableView(groupBox_4);
        tab_prime->setObjectName(QStringLiteral("tab_prime"));
        tab_prime->setGeometry(QRect(60, 200, 551, 321));
        groupBox_supprimer_4 = new QGroupBox(groupBox_4);
        groupBox_supprimer_4->setObjectName(QStringLiteral("groupBox_supprimer_4"));
        groupBox_supprimer_4->setGeometry(QRect(20, 30, 731, 161));
        label_CIN_7 = new QLabel(groupBox_supprimer_4);
        label_CIN_7->setObjectName(QStringLiteral("label_CIN_7"));
        label_CIN_7->setGeometry(QRect(40, 50, 241, 21));
        lineEditCIN_7 = new QLineEdit(groupBox_supprimer_4);
        lineEditCIN_7->setObjectName(QStringLiteral("lineEditCIN_7"));
        lineEditCIN_7->setGeometry(QRect(300, 50, 281, 21));
        pushButton_chercher_3 = new QPushButton(groupBox_supprimer_4);
        pushButton_chercher_3->setObjectName(QStringLiteral("pushButton_chercher_3"));
        pushButton_chercher_3->setGeometry(QRect(430, 100, 111, 31));
        PDF->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        recherche_2 = new QTableView(tab_4);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(30, 590, 551, 211));
        tableView_2 = new QTableView(tab_4);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(30, 400, 731, 161));
        groupBox_supprimer_3 = new QGroupBox(tab_4);
        groupBox_supprimer_3->setObjectName(QStringLiteral("groupBox_supprimer_3"));
        groupBox_supprimer_3->setGeometry(QRect(20, 220, 731, 161));
        label_CIN_6 = new QLabel(groupBox_supprimer_3);
        label_CIN_6->setObjectName(QStringLiteral("label_CIN_6"));
        label_CIN_6->setGeometry(QRect(40, 50, 231, 21));
        lineEditCIN_6 = new QLineEdit(groupBox_supprimer_3);
        lineEditCIN_6->setObjectName(QStringLiteral("lineEditCIN_6"));
        lineEditCIN_6->setGeometry(QRect(300, 50, 281, 21));
        pushButton_chercher_2 = new QPushButton(groupBox_supprimer_3);
        pushButton_chercher_2->setObjectName(QStringLiteral("pushButton_chercher_2"));
        pushButton_chercher_2->setGeometry(QRect(430, 100, 111, 31));
        groupBox = new QGroupBox(tab_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 40, 731, 181));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 121, 21));
        cin = new QLineEdit(groupBox);
        cin->setObjectName(QStringLiteral("cin"));
        cin->setGeometry(QRect(180, 40, 113, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(420, 40, 101, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 90, 121, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 90, 101, 21));
        nj = new QLineEdit(groupBox);
        nj->setObjectName(QStringLiteral("nj"));
        nj->setGeometry(QRect(180, 90, 113, 21));
        type = new QLineEdit(groupBox);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(540, 90, 113, 22));
        id = new QLineEdit(groupBox);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(540, 40, 113, 22));
        ajouter_conge = new QPushButton(groupBox);
        ajouter_conge->setObjectName(QStringLiteral("ajouter_conge"));
        ajouter_conge->setGeometry(QRect(460, 130, 121, 28));
        sum = new QTableView(tab_4);
        sum->setObjectName(QStringLiteral("sum"));
        sum->setGeometry(QRect(590, 600, 331, 121));
        PDF->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 30, 801, 581));
        rcpt_2 = new QLineEdit(groupBox_2);
        rcpt_2->setObjectName(QStringLiteral("rcpt_2"));
        rcpt_2->setGeometry(QRect(20, 30, 491, 21));
        subject = new QLineEdit(groupBox_2);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(20, 60, 651, 16));
        mail_pass = new QLineEdit(groupBox_2);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(530, 30, 141, 20));
        mail_pass->setEchoMode(QLineEdit::Password);
        file = new QLineEdit(groupBox_2);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(20, 90, 571, 23));
        browseBtn = new QPushButton(groupBox_2);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(610, 90, 75, 24));
        msg = new QTextEdit(groupBox_2);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(20, 130, 651, 291));
        sendBtn = new QPushButton(groupBox_2);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(20, 430, 651, 23));
        PDF->addTab(tab_5, QString());

        retranslateUi(zeineb);

        PDF->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(zeineb);
    } // setupUi

    void retranslateUi(QDialog *zeineb)
    {
        zeineb->setWindowTitle(QApplication::translate("zeineb", "Dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PDF->setToolTip(QApplication::translate("zeineb", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        PDF->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        Ajouter->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        groupBox_Ajouter->setTitle(QApplication::translate("zeineb", "Ajouter un employ\303\251", Q_NULLPTR));
        label_CIN->setText(QApplication::translate("zeineb", "CIN                                 :", Q_NULLPTR));
        label_nom->setText(QApplication::translate("zeineb", "Nom                                :", Q_NULLPTR));
        label_prenom->setText(QApplication::translate("zeineb", "Prenom                            :", Q_NULLPTR));
        label_datedenaissance->setText(QApplication::translate("zeineb", "Date de naissance             :", Q_NULLPTR));
        label_addresse->setText(QApplication::translate("zeineb", "Addresse                          :", Q_NULLPTR));
        label_telephone->setText(QApplication::translate("zeineb", "Telephone                        :", Q_NULLPTR));
        label_note->setText(QApplication::translate("zeineb", "Note                               :", Q_NULLPTR));
        label_datedemboche->setText(QApplication::translate("zeineb", "Date d'emboche               :", Q_NULLPTR));
        label_joursdeconges->setText(QApplication::translate("zeineb", "Jours de Cong\303\251s Permis     :", Q_NULLPTR));
        label_salaire->setText(QApplication::translate("zeineb", "Salaire                            :", Q_NULLPTR));
        label_role->setText(QApplication::translate("zeineb", "Role                                :                                ", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("zeineb", "Ajouter", Q_NULLPTR));
        PDF->setTabText(PDF->indexOf(Ajouter), QApplication::translate("zeineb", "Ajouter", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("zeineb", "Afficher", Q_NULLPTR));
        label_CIN_8->setText(QApplication::translate("zeineb", "CIN de l'employ\303\251 \303\240 cherch\303\251             :", Q_NULLPTR));
        pushButton_chercher_4->setText(QApplication::translate("zeineb", "chercher", Q_NULLPTR));
        trier->setText(QApplication::translate("zeineb", "Trier", Q_NULLPTR));
        groupBox_modifier->setTitle(QApplication::translate("zeineb", "Modifier un employ\303\251", Q_NULLPTR));
        label_CIN_2->setText(QApplication::translate("zeineb", "CIN de l'employe \303\240 modifier                                :", Q_NULLPTR));
        label_nom_2->setText(QApplication::translate("zeineb", "Nom                            :", Q_NULLPTR));
        label_prenom_2->setText(QApplication::translate("zeineb", "Prenom                        :", Q_NULLPTR));
        label_datedenaissance_2->setText(QApplication::translate("zeineb", "Date de naissance         :", Q_NULLPTR));
        label_addresse_2->setText(QApplication::translate("zeineb", "Addresse                      :", Q_NULLPTR));
        label_telephone_2->setText(QApplication::translate("zeineb", "Telephone                    :", Q_NULLPTR));
        label_note_2->setText(QApplication::translate("zeineb", "Note                            :", Q_NULLPTR));
        label_datedemboche_2->setText(QApplication::translate("zeineb", "Date d'emboche            :", Q_NULLPTR));
        label_joursdeconges_2->setText(QApplication::translate("zeineb", "Jours de Cong\303\251s Permis   :", Q_NULLPTR));
        label_salaire_2->setText(QApplication::translate("zeineb", "Salaire                          :", Q_NULLPTR));
        label_role_2->setText(QApplication::translate("zeineb", "Role                             :       ", Q_NULLPTR));
        pushButton_modifier->setText(QApplication::translate("zeineb", "Modifier", Q_NULLPTR));
        PDF->setTabText(PDF->indexOf(Afficher), QApplication::translate("zeineb", "Afficher", Q_NULLPTR));
        groupBox_supprimer->setTitle(QApplication::translate("zeineb", "Supprimer un employ\303\251", Q_NULLPTR));
        label_CIN_4->setText(QApplication::translate("zeineb", "CIN de l'employ\303\251 \303\240 supprimer                        :", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("zeineb", "Supprimer", Q_NULLPTR));
        pushButton_annuler_3->setText(QApplication::translate("zeineb", "Annuler", Q_NULLPTR));
        PDF->setTabText(PDF->indexOf(Supprimer), QApplication::translate("zeineb", "Supprimer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("zeineb", "PDF", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("zeineb", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">Tunis en 2022</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margi"
                        "n-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:600;\">PDF personnalis\303\251</span></h1>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;&quot;</span></p>\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;   &quot;document content document content document content document content document content document content document content document content document content document content &quot;   &quot;document content document content document content document content document content document content document content document content document content document content &quot;&quot;</span></p>\n"
"<p style=\" margin-top:0p"
                        "x; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">&quot;&quot;</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\">signature&quot;;</span></p></body></html>", Q_NULLPTR));
        imprimer->setText(QApplication::translate("zeineb", "Imprimer", Q_NULLPTR));
        PDF->setTabText(PDF->indexOf(tab_3), QApplication::translate("zeineb", "PDF", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("zeineb", "Prime", Q_NULLPTR));
        groupBox_supprimer_4->setTitle(QApplication::translate("zeineb", "chercher un employ\303\251", Q_NULLPTR));
        label_CIN_7->setText(QApplication::translate("zeineb", "CIN de l'employ\303\251 \303\240 cherch\303\251             :", Q_NULLPTR));
        pushButton_chercher_3->setText(QApplication::translate("zeineb", "chercher", Q_NULLPTR));
        PDF->setTabText(PDF->indexOf(tab_2), QApplication::translate("zeineb", "Prime", Q_NULLPTR));
        groupBox_supprimer_3->setTitle(QApplication::translate("zeineb", "chercher un employ\303\251", Q_NULLPTR));
        label_CIN_6->setText(QApplication::translate("zeineb", "CIN de l'employ\303\251 \303\240 cherch\303\251             :", Q_NULLPTR));
        pushButton_chercher_2->setText(QApplication::translate("zeineb", "chercher", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("zeineb", "Ajouter un cong\303\251", Q_NULLPTR));
        label->setText(QApplication::translate("zeineb", "CIN de l'employe :", Q_NULLPTR));
        label_2->setText(QApplication::translate("zeineb", "ID de cong\303\251  :", Q_NULLPTR));
        label_3->setText(QApplication::translate("zeineb", "Nombre de jours  :", Q_NULLPTR));
        label_4->setText(QApplication::translate("zeineb", "Type             :", Q_NULLPTR));
        ajouter_conge->setText(QApplication::translate("zeineb", "Ajouter cong\303\251", Q_NULLPTR));
        PDF->setTabText(PDF->indexOf(tab_4), QApplication::translate("zeineb", "Cong\303\251s", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("zeineb", "Mailing", Q_NULLPTR));
        rcpt_2->setPlaceholderText(QApplication::translate("zeineb", "recipient", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("zeineb", "subject", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("zeineb", "your mail password", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("zeineb", "attachement here", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("zeineb", "Browse ...", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("zeineb", "type your message here ...", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("zeineb", "Send", Q_NULLPTR));
        PDF->setTabText(PDF->indexOf(tab_5), QApplication::translate("zeineb", "mailing", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class zeineb: public Ui_zeineb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZEINEB_H

#include "notification.h"
#include <QSystemTrayIcon>
#include<QString>
notification::notification()
{

}

void notification::notification_ajoutercitoyen()
{

    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("D:/iconP/ajout"));
    notifyIcon->show();
    notifyIcon->showMessage("Gestion des citoyens ","nouveau citoyen est ajouté ",QSystemTrayIcon::Information,15000);
}
void notification::notification_supprimercitoyen(){
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

notifyIcon->setIcon(QIcon("D:/iconP/supp"));
notifyIcon->show();
    notifyIcon->showMessage("Gestion des  citoyens ","Un  citoyen est supprimé",QSystemTrayIcon::Information,15000);
}
void notification::notification_modifiercitoyen(){
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

notifyIcon->setIcon(QIcon("D:/iconP/modif"));

notifyIcon->show();
    notifyIcon->showMessage("Gestion des  citoyens ","nouveau  citoyen est modifié",QSystemTrayIcon::Information,15000);

}
void notification::notification_carte()
{QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("D:/iconP/cartele"));
     notifyIcon->show();
     notifyIcon->showMessage("Courtland ","carte acceptée",QSystemTrayIcon::Information,15000);

}
void notification::notification_ouverture()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("D:/iconP/ouvert"));
    notifyIcon->show();
    notifyIcon->showMessage("Courtland ","la porte est ouverte",QSystemTrayIcon::Information,15000);

}
void notification::notification_fermeture()
{
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

    notifyIcon->setIcon(QIcon("D:/iconP/ferme"));
    notifyIcon->show();
    notifyIcon->showMessage("Courtland","la porte est fermée",QSystemTrayIcon::Information,15000);

}

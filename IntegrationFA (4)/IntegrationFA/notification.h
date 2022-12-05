#ifndef NOTIFICATION_H
#define NOTIFICATION_H


#include <QSystemTrayIcon>
#include<QString>
class notification
{
public:
    notification();
    void notification_ajoutercitoyen();

    void notification_supprimercitoyen();

    void notification_modifiercitoyen();
    void notification_carte();
    void notification_ouverture();
    void notification_fermeture();



};


#endif // NOTIFICATION_H



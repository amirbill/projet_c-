QT       += core gui
QT       += sql charts
QT       += sql charts
QT       +=printsupport
QT       +=network
QT       +=svg
QT       +=serialport
QT       +=charts multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    affaires.cpp \
    arduino.cpp \
    camera.cpp \
    citoyen.cpp \
    connection.cpp \
    excel.cpp \
    huissier.cpp \
    main.cpp \
    mainarijcpp.cpp \
    mainfarahcpp.cpp \
    mainwindow.cpp \
    notification.cpp \
    oussema.cpp \
    qrcode.cpp \
    smtp.cpp

HEADERS += \
    affaires.h \
    arduino.h \
    camera.h \
    citoyen.h \
    connection.h \
    excel.h \
    huissier.h \
    mainarijcpp.h \
    mainfarahcpp.h \
    mainwindow.h \
    notification.h \
    oussema.h \
    qrcode.h \
    smtp.h

FORMS += \
    camera.ui \
    mainarijcpp.ui \
    mainfarahcpp.ui \
    mainwindow.ui \
    oussema.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=

DISTFILES +=
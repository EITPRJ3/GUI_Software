#-------------------------------------------------
#
# Project created by QtCreator 2016-10-15T12:27:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtest
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    psocif.cpp \
    statistik.cpp \
    makingscreen.cpp \
    status.cpp \
    database.cpp \
    admin.cpp \
    spicontroller.cpp \
    spiworker.cpp

HEADERS  += mainwindow.h \
    psocif.h \
    statistik.h \
    makingscreen.h \
    status.h \
    database.h \
    admin.h \
    spicontroller.h \
    enums.h \
    spiworker.h

FORMS    += mainwindow.ui \
    statistik.ui \
    makingscreen.ui \
    status.ui \
    admin.ui

target.path = /home/root/$${TARGET}
INSTALL += target
# Default rules for deployment.
include(deployment.pri)

DISTFILES +=

RESOURCES += \
    billeder.qrc

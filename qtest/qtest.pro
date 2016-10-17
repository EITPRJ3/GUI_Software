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
    psocif.cpp

HEADERS  += mainwindow.h \
    psocif.h

FORMS    += mainwindow.ui

target.path = /home/root/$${TARGET}
INSTALL += target
# Default rules for deployment.
include(deployment.pri)

#-------------------------------------------------
#
# Project created by QtCreator 2016-09-28T12:49:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

target.path = /home/root/$${TARGET}
INSTALL += target
# Default rules for deployment.
include(deployment.pri)

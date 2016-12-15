#-------------------------------------------------
#
# Project created by QtCreator 2016-12-14T13:11:01
#
#-------------------------------------------------

QT       += widgets testlib

TARGET = tst_prj3_unittesttest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += "~/home/stud/devel/PRJ3_UnitTest"

SOURCES += tst_prj3_unittesttest.cpp psocif.cpp database.cpp \
    spicontroller.cpp \
    spiworker.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

HEADERS += \
    psocif.h \
    spicontroller.h \
    spiworker.h

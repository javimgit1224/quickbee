#-------------------------------------------------
#
# Project created by QtCreator 2018-05-02T11:00:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = expensereport
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    reportexpense.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    reportexpense.h \
    qcustomplot.h

FORMS    += mainwindow.ui \
    reportexpense.ui

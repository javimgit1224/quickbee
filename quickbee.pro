#-------------------------------------------------
#
# Project created by QtCreator 2018-05-01T16:07:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = quickbee
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    invoice.cpp \
    viewinvoice.cpp

HEADERS  += mainwindow.h \
    invoice.h \
    viewinvoice.h

FORMS    += mainwindow.ui \
    invoice.ui \
    viewinvoice.ui

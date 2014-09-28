#-------------------------------------------------
#
# Project created by QtCreator 2014-09-27T11:00:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qlogout
TEMPLATE = app


SOURCES += main.cpp\
        logout.cpp \
    reboot.cpp \
    suspend.cpp \
    shutdown.cpp

HEADERS  += logout.h \
    reboot.h \
    suspend.h \
    shutdown.h

FORMS    += logout.ui

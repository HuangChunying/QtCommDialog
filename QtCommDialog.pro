#-------------------------------------------------
#
# Project created by QtCreator 2020-05-15T17:53:55
#
#-------------------------------------------------

QT       += core gui
QT += webenginewidgets webchannel

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtCommDialog
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        dialog.cpp \
    dialog.cpp \
    main.cpp

HEADERS += \
        dialog.h \
    dialog.h

FORMS += \
        dialog.ui

DISTFILES += \
    demo1/echarts.js \
    demo1/test.js \
    demo1/a.html

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Exception.cpp \
    IndexException.cpp

HEADERS += \
    Exception.h \
    IndexException.h

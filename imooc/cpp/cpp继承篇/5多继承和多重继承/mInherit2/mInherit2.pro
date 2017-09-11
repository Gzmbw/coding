TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Farmer.cpp \
    Migrantworker.cpp \
    Worker.cpp

HEADERS += \
    Farmer.h \
    Migrantworker.h \
    Worker.h

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Person.cpp \
    Worker.cpp \
    Dustman.cpp

HEADERS += \
    Person.h \
    Worker.h \
    Dustman.h

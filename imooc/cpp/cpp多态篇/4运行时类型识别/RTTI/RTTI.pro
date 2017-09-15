TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Plane.cpp \
    Bird.cpp

HEADERS += \
    Flyable.h \
    Plane.h \
    Bird.h

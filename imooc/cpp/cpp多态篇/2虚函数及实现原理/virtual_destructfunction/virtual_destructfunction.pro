TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Coordinate.cpp \
    Shape.cpp \
    Circle.cpp \
    Rect.cpp

HEADERS += \
    Coordinate.h \
    Circle.h \
    Shape.h \
    Rect.h

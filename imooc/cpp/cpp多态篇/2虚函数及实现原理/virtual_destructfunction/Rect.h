#ifndef RECT_H
#define RECT_H
#include<iostream>
#include"Shape.h"
using namespace std;

class Rect:public Shape
{
public:
    Rect(double width,double height);
     ~Rect();
     double calcArea();
private:
    double m_dWidth;
    double m_dHeight;

};

#endif // RECT_H

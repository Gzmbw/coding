#ifndef SHAPE_H
#define SHAPE_H
#include<iostream>
using namespace std;
class Shape
{
public:
    Shape();
    //~Shape();
    double calcArea();
    virtual ~Shape();
    //virtual double calcArea();//Shape具有虚函数指针，原来具有1个内存的大小，现在具有虚函数表指针
    //那么Shape就占有4个内存的大小，由于一个指针占有4个内存单元
};

#endif // SHAPE_H

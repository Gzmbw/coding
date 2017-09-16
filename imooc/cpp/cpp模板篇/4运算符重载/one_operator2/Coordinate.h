#ifndef COORDINATE_H
#define COORDINATE_H
#include<iostream>
using namespace std;
class Coordinate{
    friend Coordinate &operator-(Coordinate &c);
public:
    Coordinate(int x,int y);
    Coordinate &operator++();
    //后置++
    Coordinate operator++(int);
    int getX();
    int getY();
private:
    int m_iX;
    int m_iY;
};

#endif // COORDINATE_H

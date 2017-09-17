#ifndef COORDINATE_H
#define COORDINATE_H
#include<iostream>
using namespace std;
class Coordinate{
    //+号的友元函数重载
    friend Coordinate operator+(Coordinate &c1,Coordinate &c2);//这里注意operator前面没有&号
    //<<号的友元函数重载(它只能写为友元函数)
    friend ostream &operator<<(ostream &output,Coordinate &coor);
public:
    Coordinate(int x,int y);
   // Coordinate operator+(Coordinate &c);//成员函数的重载
    //索引运算符重载[]，只能用成员函数重载
    int operator [](int index);
    int getX();
    int getY();
private:
    int m_iX;
    int m_iY;
};

#endif // COORDINATE_H

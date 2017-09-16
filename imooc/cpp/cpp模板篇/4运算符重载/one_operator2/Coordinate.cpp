#include<iostream>
#include"Coordinate.h"
using namespace std;

Coordinate::Coordinate(int x,int y)
{
    m_iX=x;
    m_iY=y;
}
int Coordinate::getX()
{
    return m_iX;
}
int Coordinate::getY()
{
    return m_iY;
}
Coordinate &Coordinate::operator++()
{
    m_iX++;//++m_iX;
    m_iY++;//++m_iY;
    return *this;
}
//后置++
Coordinate Coordinate::operator++(int)
{
    Coordinate old(*this);
    this->m_iX++;
    this->m_iY++;
    return old;
}

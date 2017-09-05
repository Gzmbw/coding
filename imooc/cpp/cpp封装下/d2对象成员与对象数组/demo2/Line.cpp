#include<iostream>
#include"Line.h"
using namespace std;
Line::Line()
{
    cout<<"Line"<<endl;
}
Line::~Line()
{
    cout<<"~Line"<<endl;
}
void Line::setA(int x,int y)
{
    m_coorA.setX(x);//注意这里的形式，一个对象成员调用set函数
    m_coorA.setY(y);
}
void Line::setB(int x,int y)
{
    m_coorB.setX(x);
    m_coorB.setY(y);
}
void Line::printInfo()
{
    cout<<"("<<m_coorA.getX()<<","<<m_coorA.getY()<<")"<<endl;
    cout<<"("<<m_coorB.getX()<<","<<m_coorB.getY()<<")"<<endl;
}

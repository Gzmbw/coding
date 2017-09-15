#include<iostream>
#include"Tank.h"
using namespace std;
//首先把静态的数据成员进行初始化，注意初始化的过程是在函数的外边进行的，在构造函数的里边我们传入了一个参数

int Tank::s_iCount=0;
Tank::Tank(char code)
{
    m_cCode=code;
    s_iCount++;
    cout<<"Tank"<<endl;
}
Tank::~Tank()
{
    s_iCount--;
    cout<<"~Tank"<<endl;
}
void Tank::fire()
{
    getCount();//试试普通函数可不可以调用静态成员函数？是可以的
    cout<<"Tank----fire"<<endl;
}
int Tank::getCount()//这里不用写static
//int Tank::getCount() const
{
    //fire();//试试在静态的成员函数中调用非静态的成员函数?是不可以的
    //m_cCode='c';//在静态成员函数中访问非静态数据成员也是错误的
    return s_iCount;
}

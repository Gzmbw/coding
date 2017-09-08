#include<iostream>
#include"Array.h"
using namespace std;

Array::Array(int len)
{
    this->len=len;
}
Array::~Array()
{

}
Array* Array::setLen(int len)//Array & Array::setLen(int len)
{
    this->len=len;
    return this;//return *this;
}
int Array::getLen()
{
    return len;
}
Array* Array::printInfo()//Array& Array::printInfo()
{
    cout<<"len = "<<len<<endl;
    cout<<this<<endl;//输出this指针的地址
    return this;//return *this;//this本身是一个指针加*之后就是一个对象，要求返回就是对象
}

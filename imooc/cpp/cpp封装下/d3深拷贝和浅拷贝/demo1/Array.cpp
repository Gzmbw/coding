#include<iostream>
#include"Array.h"
using namespace std;

Array::Array()
{
    cout<<"Array()"<<endl;
}
Array::Array(const Array &arr)
{
    //m_iCount=arr.getCount();写这样是不对的
    m_iCount=arr.m_iCount;//我们应将传入的arr这个对象的m_iCount赋值给当前对象的m_iCount
    cout<<"Array &"<<endl;
}
Array::~Array()
{
    cout<<"~Array"<<endl;
}

void Array::setCount(int count)
{
    m_iCount=count;
}
int Array::getCount()
{
    return m_iCount;
}


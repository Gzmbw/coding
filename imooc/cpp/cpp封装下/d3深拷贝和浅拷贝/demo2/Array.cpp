#include<iostream>
#include"Array.h"
using namespace std;

Array::Array(int count)
{
    m_iCount=count;
    m_pArr=new int[m_iCount];//在构造函数中申请一块内存,记得在析构函数释放,注意申请内存的形式
    cout<<"Array"<<endl;
}
Array::Array(const Array &arr)//深拷贝
{
    m_pArr=arr.m_pArr;//这个就是浅拷贝，指向了同一块内存
    m_iCount=arr.m_iCount;
    cout<<"Array &"<<endl;
}
Array::~Array()
{
    delete []m_pArr;
    m_pArr=NULL;
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
void Array::printAddr()
{
    cout<<"m_pArr的值是"<<m_pArr<<endl;
}

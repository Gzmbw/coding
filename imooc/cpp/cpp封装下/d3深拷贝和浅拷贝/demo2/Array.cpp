#include<iostream>
#include"Array.h"
using namespace std;

Array::Array(int count)
{
    m_iCount=count;
    m_pArr=new int[m_iCount];//在构造函数中申请一块内存,记得在析构函数释放,注意申请内存的形式
    //给申请的内存赋初始值
    for(int i;i<m_iCount;i++)
    {
        m_pArr[i]=i;
    }
    cout<<"Array"<<endl;
}
Array::Array(const Array &arr)//深拷贝，需要给当前的指针分配内存
{
    m_iCount=arr.m_iCount;//为了把正确的内存分配到，先进行这行代码，先把传入的arr的m_iCound赋值给当前的m_iCound
   //这样在分配内存时就可以分配到与arr一样多的内存
    m_pArr=new int[m_iCount];
    //然后进行拷贝，这个时候的拷贝是将arr对象的m_pArr里面的值一个一个拷贝到当前对象m_pArr
    for(int i=0;i<m_iCount;i++)
    {
        m_pArr[i]=arr.m_pArr[i];
    }
    //m_pArr=arr.m_pArr;//这个就是浅拷贝，指向了同一块内存
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
void Array::printArr()
{
    for(int i=0;i<m_iCount;i++)
    {
        cout<<m_pArr[i] ;
    }
    cout<<endl;
}

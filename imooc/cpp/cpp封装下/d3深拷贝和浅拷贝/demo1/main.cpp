#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;

/*
 * 示例安排：
 *   1.定义一个Array类，数据成员为m_iCount,
 *     成员函数包括数据封装函数、构造函数、拷贝
 *      构造函数和析构函数，通过此示例会浅拷贝原理
 *   2.增加数据成员m_pArr,并增加m_pArr地址查看函数，
 *     同时改造构造函数、拷贝构造函数和析构函数，体会
 *     深拷贝的原理和必要性。
 */
int main()
{
    Array arr1;
    arr1.setCount(5);

    Array arr2=arr1;
    cout<<"arr2.m_iCount="<<arr2.getCount()<<endl;
    return 0;
}

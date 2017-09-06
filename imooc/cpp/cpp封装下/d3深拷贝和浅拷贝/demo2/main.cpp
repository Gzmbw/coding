//深拷贝例子
#include<iostream>
#include"Array.h"
using namespace std;

/*
 * 2. 增加数据成员m_pArr,并增加m_pArr地址查看函数，
 *    同时改造构造函数、拷贝构造函数和析构函数，体会
 *    深拷贝的原理和必要性。
 */
int main()
{
    Array arr1(5);
    //arr1.setCount(5);
    Array arr2=arr1;
    //cout<<"arr2.m_iCount="<<arr2.getCount()<<endl;
    return 0;
}

#ifndef ARRAY_H
#define ARRAY_H

#endif // ARRAY_H
#include<iostream>
using namespace std;

class Array
{
public:
    Array();
    Array(const Array &arr);//这里就是一个拷贝构造函数吗？
    ~Array();
    void setCount(int count);
    int getCount();
    //指针怎么写封装函数？指针就没有封装函数

private:
    int m_iCount;
    //int *m_pArr;
};

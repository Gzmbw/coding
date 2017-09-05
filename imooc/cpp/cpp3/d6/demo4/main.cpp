#include<iostream>
#include<stdlib.h>
#include<string>
#include"Teacher.h"
using namespace std;

/*
*Teacher类
*    1.自定义析构函数。
*    2.普通方式实例化对象，在销毁对象时是否自动调用析构函数
*    3.通过拷贝构造函数实例化对象，在销毁对象时是否自动调用析构函数
* 数据：
*    名字
*    年龄
* 成员函数：
*    数据成员的封装函数
*/
int main()
{
    Teacher t1;//从栈中实例化一个对象
    //Teacher t2=t1;
    //Teacher *p=new Teacher();//从堆中实例化一个对象
    //delete p;
    Teacher t2(t1);

    return 0;
}

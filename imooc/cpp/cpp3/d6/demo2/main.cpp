#include<iostream>
#include<string>
#include<stdlib.h>
#include"Teacher.h"
using namespace std;

/*
*Teacher类
* 自定义有参默认构造函数
* 使用初始化列表初始化数据
* 数据：
*   名字
*   年龄
* 成员函数：
*    数据成员的封装函数
* 拓展：
*   定义可以带最多学生的个数，此为常量
*/
int main()
{
    //Teacher t1;
    Teacher t1("merry",22,150);
    cout<<t1.getName()<<" "<<t1.getAge()<<" "<<t1.getMax()<<endl;
    return 0;
}

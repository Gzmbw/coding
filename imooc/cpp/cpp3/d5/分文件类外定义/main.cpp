#include<iostream>
#include<stdlib.h>
#include<string>
#include"Teacher.h"
using namespace std;
/*
 *定义一个Teacher类，要求分别采用同文件类定义和分文件类外定义
 * 的方式完成，具体要求如下：
 * 数据成员：
 * 名字
 * 年龄
 * 性别
 * 成员函数：
 *   数据成员的封装函数
 *   授课teach
 */


int main()
{
    Teacher t;
    t.setName("jian");
    t.setGender("man");
    t.setAge(30);
    cout<<t.getName()<<" "<<t.getGender()<<" "<<t.getAge();
    t.teach();
    return 0;
}

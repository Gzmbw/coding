//#ifndef TEACHER_H
//#define TEACHER_H

//#endif // TEACHER_H
#include<iostream>
#include<string>
using namespace std;//注意要加头文件
//声明了类。接下来写声明构造函数，注意在Teacher.h只是声明
//在Teacher.cpp在进行构造函数定义
class Teacher{
public:
    Teacher();//无参构造函数
    //这里可以赋默认值
    Teacher(string name,int age=20);//构造有参函数，名字和年龄
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
private:
    string m_strName;
    int m_iAge;
};
//结论：我们的构造函数除了可以重载外，构造函数还可以给参数赋默认值
//但是注意如果参数都赋有默认值，调用Teacher t1;是就会出错，计算机不知道该调用哪个构造函数

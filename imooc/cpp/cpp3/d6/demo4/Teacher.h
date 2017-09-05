#ifndef TEACHER_H
#define TEACHER_H

#endif // TEACHER_H
#include<iostream>
#include<string>
//#include<stdlib.h>
using namespace std;

class Teacher{
public:
    Teacher(string name="guoo",int age=23);
    Teacher(const Teacher &t);//注意这里不能把括号里的Teacher丢了
    ~Teacher();//这是析构函数，没有参数
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge();
private:
    string m_strName;
    int m_iAge;
};

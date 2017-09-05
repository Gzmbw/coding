//#include<iostream>
//#include<string>//定义函数文件这里只要加上头文件就OK
#include"Teacher.h"
using namespace std;

Teacher::Teacher()//给两个成员变量赋初始值
{
    m_strName="guoo";//如果我们不通过setName函数改变它的值，那它就是guoo
    m_iAge=17;
    cout<<"Teacher()"<<endl;//只是为了刷刷存在感；
}
Teacher::Teacher(string name,int age)//不是在这里赋默认值，是在定义类的时候。
{
    m_strName=name;
    m_iAge=age;
    cout<<"Teacher(string name,int age)"<<endl;
}
void Teacher::setName(string _name)
{
    m_strName=_name;
}
string Teacher::getName()
{
    return m_strName;
}
void Teacher::setAge(int _age)
{
    m_iAge=_age;
}
int Teacher::getAge()
{
    return m_iAge;
}
//思考：在我们构造函数定义的时候，能不能给构造函数赋一个默认值？

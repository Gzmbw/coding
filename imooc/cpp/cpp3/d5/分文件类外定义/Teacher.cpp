#include"Teacher.h"
#include<iostream>
using namespace std;
void Teacher::setName(string _name)
{
    m_strName=_name;
}
string Teacher::getName()
{
    return m_strName;
}
void Teacher::setGender(string _gender)
{
    m_strGender=_gender;
}
string Teacher::getGender()
{
    return m_strGender;
}
void Teacher::setAge(int _age)
{
    m_iAge=_age;
}
int Teacher::getAge()
{
    return m_iAge;
}
void Teacher::teach()//哥啊，注意形式啊
{
    cout<<"现在上课...."<<endl;
}
/*
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
*/

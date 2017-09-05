#include"Teacher.h"

//由于声明的时候已经加了默认值，所以这里不需要在初始化
Teacher::Teacher(string _name,int _age,int m):m_strName(_name),m_iAge(_age),m_iMax(m)
{
    cout<<"Teacher(string _name,int _age)"<<endl;
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
int Teacher::getMax()
{
    return m_iMax;
}

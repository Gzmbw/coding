#include<iostream>
#include<string>
using namespace std;
class Teacher
{
public:
    Teacher(string _name="jian",int _age=23,int m=100);//注意这里已经有初始值，所以构造函数是默认构造函数
    void setName(string _name);
    string getName();
    void setAge(int _age);
    int getAge();
    int getMax();
private:
    string m_strName;
    int m_iAge;
    int m_iMax;
};

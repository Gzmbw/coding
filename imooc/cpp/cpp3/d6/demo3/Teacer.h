#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    Teacher(string name="guoo",int age=12);
    Teacher(const Teacher &t);//声明拷贝构造函数
    void setName(string name);
    string getName();
    void setAge(int age);
    int  getAge();
private:
    string m_strName;
    int m_iAge;
};

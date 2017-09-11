#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    Person();
    ~Person();
    void eat();
    //做一个实验把数据成员分为public,protected,private
protected:
    string m_strName;
    int m_iAge;
//private:
  //  int m_iAge;
};

#endif // PERSON_H

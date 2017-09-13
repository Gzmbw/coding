#include"Person.h"
#include<iostream>
using namespace std;

Person::Person(string name)
{
    m_strName=name;
}


Person::~Person()
{
    cout<<"~Person"<<endl;
}

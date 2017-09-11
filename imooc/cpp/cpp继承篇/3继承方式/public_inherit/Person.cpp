#include<iostream>
#include"Person.h"
using namespace std;

Person::Person()
{
    cout<<"Person()"<<endl;
}
Person::~Person()
{
    cout<<"~Person()"<<endl;
}
void Person::eat()
{
    m_strName="guoo";
    m_iAge=20;
    cout<<"eat()"<<endl;
}

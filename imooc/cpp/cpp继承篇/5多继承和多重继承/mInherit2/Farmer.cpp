#include<iostream>
#include"Farmer.h"
using namespace std;

Farmer::Farmer(string name)
{
    m_strName=name;
    cout<<"Farmer()"<<endl;
}
Farmer::~Farmer()
{
    cout<<"~Faimer()"<<endl;
}
void Farmer::sow()
{
    cout<<m_strName<<endl;
    cout<<"Farmer---sow()"<<endl;
}



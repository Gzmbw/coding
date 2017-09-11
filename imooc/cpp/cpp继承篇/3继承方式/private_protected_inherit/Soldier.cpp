#include"Soldier.h"
#include"Person.h"
#include<iostream>
using namespace std;

Soldier::Soldier()
{
    cout<<"Soldier()"<<endl;
}
Soldier::~Soldier()
{
    cout<<"~Soldier()"<<endl;
}
void Soldier::work()
{
    m_strName="guoo";
    m_iAge=20;
    cout<<m_strName<<endl;
    cout<<m_iAge<<endl;
    cout<<"Soldier--work()"<<endl;
}

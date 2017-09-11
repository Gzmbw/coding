#include<iostream>
#include<string>
#include"Soldier.h"
using namespace std;

Soldier::Soldier()
{

}
void Soldier::play(int x)
{
    cout<<m_strName<<endl;
    cout<<Person::m_strName<<endl;
    cout<<"Soldier----play()"<<endl;
}
void Soldier::work()
{
    m_strName="guoo";//这样只能给soldier下面的m_strName赋值
    Person::m_strName="james";//访问父类的m_strName
    cout<<"Soldier--work()"<<endl;
}

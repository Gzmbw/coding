#include<iostream>
#include"Worker.h"
using namespace std;

Worker::Worker(string name,int age):Person(name)
{
    m_iAge=age;
}
/*
void Worker::work()//在Worker这个类，我们对work进行了实现
{
    cout<<"work"<<endl;
}
*/

#include<iostream>
#include"Worker.h"
using namespace std;

Worker::Worker()
{
    cout<<"Worker"<<endl;
}
Worker::~Worker()
{
    cout<<"~Worker"<<endl;
}
void Worker::work()
{
    m_strName="jim";
    m_iAge=30;
    cout<<"work"<<endl;
}

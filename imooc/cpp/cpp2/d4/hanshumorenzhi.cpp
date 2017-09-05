#include<iostream>
using namespace std;
void fun(int i=10,int j=20,int k=30);
int main()
{
    fun();
    fun(100);
    fun(100,200);
    fun(100,200,300);
    return 0;
}
void fun(int i,int j,int k)//不建议写初值
{
    cout<<i<<" "<<j<<" "<<k<<endl;
}


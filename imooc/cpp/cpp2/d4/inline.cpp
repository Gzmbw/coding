#include<iostream>
using namespace std;
inline void fun(int i=10,int j=20,int k=30);
inline void fun(double i=0.0,double j=1.0);
int main()
{
    //fun();如果两个重载函数都有默认值，那么就不能写这种函数，因为不知道该调用哪个函数
    fun(5,8,10);
    fun(5.6,7.8);
    return 0;
}
void fun(int i,int j,int k)//不建议写初值
{
    cout<<i<<" "<<j<<" "<<k<<endl;
}
void fun(double i,double j)
{
    cout<<i<<" "<<j<<endl;
}


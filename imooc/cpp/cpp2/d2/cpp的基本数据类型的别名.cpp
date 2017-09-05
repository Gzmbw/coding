//基本数据类型的引用
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int &b=a;//引用必须初始化
    b=9;     //b的变化会引起a的变化
    cout<<a<<endl;
    return 0;
}


//指针类型的引用
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p;
    p=&a;//这里直接可以int *p=&a;
    int *&q=p;
    *q=20;
    cout<<a<<endl;
    return 0;
}


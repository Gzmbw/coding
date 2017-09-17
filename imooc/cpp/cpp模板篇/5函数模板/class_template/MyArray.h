#ifndef MYARRAY_H
#define MYARRAY_H
#include<iostream>
using namespace std;

template <typename T,int KSize,int KVal>//定义类模板，要写上参数列表
class MyArray{
public:
    MyArray();
    ~MyArray()
    {
        delete []m_pArr;
        m_pArr=NULL;
    }
    void display();
private:
    T *m_pArr;
};
//在函数外面写定义,要写上这句话，这里是构造函数
template <typename T,int KSize,int KVal>
MyArray<T,KSize,KVal>::MyArray()//这个时候参数前面什么也没有，只有参数的名字
{
    m_pArr=new T[KSize];
    for(int i=0;i<KSize;i++)
    {
        m_pArr[i]=KVal;
    }
}

//定义函数
template <typename T,int KSize,int KVal>
void MyArray<T,KSize,KVal>::display()
{
    for(int i=0;i<KSize;i++)
    {
        cout<<m_pArr[i]<<endl;
    }
}

#endif // MYARRAY_H

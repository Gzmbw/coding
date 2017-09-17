#include<iostream>
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>
using namespace std;

/*
 *通过使用标准模板库，学习其用法
 */
int main()
{
    //首先用vector定义一个数组
    vector<int> vec;//这样就定义了一个向量
    vec.push_back(3);//在元素后面插入3
    vec.push_back(4);
    vec.push_back(6);
    //vec.pop_back();//将尾部的删掉
  /*
    //普通的象访问数组一样的方法，遍历当前的向量
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    */

   //使用迭代器来遍历，迭代器是与类相关的
    vector<int>::iterator itor=vec.begin();//迭代器相当于是一个指针，通过指针指向第一个元素
    cout<<*itor<<endl;
    for(;itor!=vec.end();itor++)
    {
        cout<<*itor<<endl;
    }

    cout<<vec.front()<<endl;//打印第一个元素
    cout<<vec.back()<<endl;//打印最后一个元素

    return 0;


}

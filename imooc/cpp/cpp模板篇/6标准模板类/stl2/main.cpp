#include<iostream>
#include<stdlib.h>
#include<vector>
#include<list>
#include<map>
#include<string>
using namespace std;
/*
 * 通过使用标准模板库，学习其用法
 */
int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(6);
 /*
    //展示list的使用方法
    list<int> list1;
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(10);

    for(int i=0;i<list1.size();i++)
    {
        cout<<list1[i]<<endl;//这里不能使用[]，所以要使用迭代器
    }

    list<int>::iterator itor=list1.begin();
    for(;itor!=list1.end();itor++)
    {
        cout<<*itor<<endl;
    }

*/
    //map的使用方法,除了可以用数字做key,也可以用字符串来做key
    /*
    map<int,string> m;
    pair<int,string> p1(3,"hello");
    pair<int,string> p2(6,"world");
    pair<int,string> p3(8,"beijing");
    m.insert(p1);//在映射当中是没有push_back
    m.insert(p2);
    m.insert(p3);
    cout<<m[3]<<endl;
    cout<<m[6]<<endl;
    //遍历是使用迭代器
    map<int,string>::iterator itor=m.begin();
    for(;itor!=m.end();itor++)
    {
        cout<<itor->first<<endl;
        cout<<itor->second<<endl;
    }
    */
    //使用字符串来做key
    map<string,string> m;
    pair<string,string> p1("H","hello");
    pair<string,string> p2("W","word");
    pair<string,string> p3("B","beijing");

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    cout<<m["H"]<<endl;
    cout<<m["B"]<<endl;

    map<string,string>::iterator itor=m.begin();
    for(;itor!=m.end();itor++)
    {
        cout<<itor->first<<endl;
        cout<<itor->second<<endl;
        cout<<endl;
    }
    return 0;
}

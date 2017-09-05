/****************************************************/
/*题目描述：
 *    1.提示用户输入姓名
 *    2.接收用户的输入
 *    3.然后向用户问好，hello xxxx
 *    4.告诉用户名字的长度
 *    5.告诉用户名字的首字母是什么
 *    6.如果用户直接输入回车，那么告诉用户的输入为空
 *    7.如果用户输入的是imooc，那么告诉用户的角色是一个管理员*/
/*****************************************************/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"Please input your name:";
    string name;
    getline(cin,name);
    if(name.empty())
    {
        cout<<"input is null....."<<endl;
        return 0;
    }
    if(name=="imooc")
    {
        cout<<"you are a administrator"<<endl;
    }
    cout<<"hello"+name<<endl;
    cout<<"your name length :"<<name.size()<<endl;
    cout<<"your name first letter is:"<<name[0]<<endl;
    return 0;
}


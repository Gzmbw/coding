//数据封装
//定义一个Student类，含有如下信息：1姓名name,2,性别gender
//3.学分(只读)score,4.学习study,通过学习来增加学分
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
class Student{
public:
    void setName(string _name)
    {
        m_strName=_name;
    }
    string getName()
    {
        return m_strName;
    }
    void setGender(string _gender)//获取数据
    {
        m_strGender=_gender;
    }
    string getGender()//返回数据
    {
        return m_strGender;
    }
    int getScore()
    {
        return m_iScore;
    }
    void initScore()//初始化函数
    {
        m_iScore=0;
    }
    void study(int _score)
    {
        m_iScore += _score;

    }

//记住每个成员变量都写一个set函数用来获取数据值赋给成员变量，一个get函数用来返回成员变量。注意形式的，如果要求只读，那就不用写set函数。
private:
    string m_strName;//要求数据成员命名规则
    string m_strGender;
    int m_iScore;//因为分数是只读，所以只写它的get函数，不写它的set函数

};
int main()
{
    Student stu;
    stu.initScore();//初始化
    stu.setName("jianguo");//赋值调用的是set函数
    stu.setGender("man");
    stu.study(5);
    stu.study(8);
    cout<<stu.getName()<<" "<<stu.getGender()<<" "<<stu.getScore()<<endl;//输出调用的是get函数

    return 0;
}


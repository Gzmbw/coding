#ifndef MAZEPERSON_H
#define MAZEPERSON_H


#include<string>
#include<iostream>
#include"MazeMap.h"

enum Faceto{_up,_down,_left,_right};
enum Speed{LOW,MID,FAST};

class Mazer{
public:
    Mazer();
    Mazer(MazeMap _mazeMap);
    ~Mazer();
    void setPersonPosition(int x,int y);//人当前位置
    void setPersonSpeed(Speed _speed);//人移动的速度
    void setPersonChar(char person);//表示人的字符
    void start(Faceto _faceto);//游戏开始函数
    void gotoxy(int x,int y);//动画控制
    Faceto turn(Faceto _faceto);//人转向之后的朝向
    int getSteps();//获取步数
    MazeMap m_mazeMap;
private:
    char m_cPerson;//表示人的字符
    Faceto m_cFaceto;//表示人的朝向
    COORD m_iNowLocal;//人当前位置
    COORD m_PreviousLocal;//人的前一个位置
    //int destination[2]={0,0};
    //int orignPoint[2]={0,0};
    Speed m_speed;//人的速度
    int m_iSteps;//记录人走了多少步
};

#endif // MAZEPERSON_H

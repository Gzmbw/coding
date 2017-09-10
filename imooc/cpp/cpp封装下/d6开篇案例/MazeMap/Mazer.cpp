#include<iostream>
#include<stdlib.h>
#include<string>
#include"Mazer.h"


using namespace std;

Mazer::Mazer()
{
    m_cPerson='Y';
    m_cFaceto=_up;
    m_speed=LOW;
    m_iNowLocal.X=0;//行
    m_iNowLocal.Y=1;//列
    m_iPreviousLocal.X=0;
    m_iPreviousLocal.Y=0;
    m_iSteps=0;
    MazeMap m_mazeMap;
    m_mazeMap.getMap();
}
Mazer::Mazer(MazeMap _mazeMap)
{
    m_cPerson='Y';
    m_cFaceto=_up;
    m_speed=LOW;
    m_iNowLocal.X=0;//行
    m_iNowLocal.Y=1;//列
    m_iPreviousLocal.X=0;
    m_iPreviousLocal.Y=0;

    m_mazeMap=_mazeMap;
    m_mazeMap.getMap();
    //m_mazeMap.getExitPosition();
    //m_mazeMap.detTerpoint(originPoint,destination);
}
Mazer::~Mazer()
{

}
void Mazer::setPersonPosition(int x,int y)//人的当前位置
{
    m_iNowLocal.X=x;
    m_iNowLocal.Y=y;
}
int Mazer::getSteps()//获取步数
{
    return m_iSteps;
}
void Mazer::setPersonSpeed(Speed _speed)//人移动的速度
{
    m_speed=_speed;
}
void Mazer::setPersonChar(char person)//表示人的字符
{
    m_cPerson=person;
}
Faceto Mazer::turn(Facto _faceto)//人转向之后的朝向，基于右手算法，定义下一步往哪走
{
    m_cFaceto=_faceto;
    if(m_cFaceto==_up)
    {
        if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y+1]!=WALL)//右边界不是墙
        {
            m_cFaceto=_right;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X-1][m_iNowLocal.Y]!=WALL)//上边界不是墙
        {
            m_cFaceto=_up;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y-1]!=WALL)//左边界不是墙
        {
            m_cFaceto=_left;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X+1][m_iNowLocal.Y]!=WALL)//下边界不是墙
        {
            m_cFaceto=_down;
        }
    }
    else if(m_cFaceto==_right)
    {
        if(m_mazeMap.getMap()[m_iNowLocal.X+1][m_iNowLocal.Y]!=WALL)//下边界不是墙
        {
            m_cFaceto=_down;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y+1]!=WALL)//右边界不是墙
        {
            m_cFaceto=_right;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X-1][m_iNowLocal.Y]!=WALL)//上边界不是墙
        {
            m_cFaceto=_up;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y-1]!=WALL)//左边界不是墙
        {
            m_cFaceto=_left;
        }
    }
    else if(m_cFaceto==_down)
    {
        if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y-1]!=WALL)//左边界不是墙
        {
            m_cFaceto=_left;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X+1][m_iNowLocal.Y]!=WALL)//下边界不是墙
        {
            m_cFaceto=_down;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y+1]!=WALL)//右边界不是墙
        {
            m_cFaceto=_right;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X-1][m_iNowLocal.Y]!=WALL)//上边界不是墙
        {
            m_cFaceto=_up;
        }
    }
    else if(m_cFaceto==_left)
    {
        if(m_mazeMap.getMap()[m_iNowLocal.X-1][m_iNowLocal.Y]!=WALL)//上边界不是墙
        {
            m_cFaceto=_up;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y-1]!=WALL)//左边界不是墙
        {
            m_cFaceto=_left;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X+1][m_iNowLocal.Y]!=WALL)//下边界不是墙
        {
            m_cFaceto=_down;
        }
        else if(m_mazeMap.getMap()[m_iNowLocal.X][m_iNowLocal.Y+1]!=WALL)//右边界不是墙
        {
            m_cFaceto=_right;
        }
    }
    return m_cFaceto;
}
void Mazer::start(Faceto_facero)//游戏函数开始
{
    char tempcPer='Y';
    tempcPer=m_cPerson;
    m_iSteps=1;

    double speed_num=0;
    if(m_speed==LOW)
        speed_num=2;
    else if(m_speed==MID)
        speed_num=1;
    else if(m_speed==FAST)
        speed_num=0.5;

    m_cFaceto=_faceto;
    //画第一个点的位置
    setPersonChar(tempcPer);
    gotoxy(m_iNowLocal.Y,m_iNowLocal.X);
    cout<<m_cPerson;

    //从二维数组下面的二行输出当前走的步数
    gotoxy(0,m_mazeMap.getRow()+2);
    cout<<"步数统计："<<m_iSteps<<endl;
    Sleep(speed_num *1000);
    while(1)
    {
        m_iPreviousLocal=m_iNowlocal;
        switch (m_cFaceto)
        {
        case 0:m_iNowLocal.X=m_iNowLocal.X-1;break;//_up
        case 1:m_iNowLocal.X+=1;break;//_down
        case 2:m_iNowLocal.Y=m_iNowLocal.Y-1;break;//_left
        case 3:m_iNowLocal.y += 1;break;//_right
        }
        m_iSteps++;//记录步长
        //从二维数组下面的二行输出当前走的步数
        gotoxy(0,m_mazeMap.getRow()+2);
        cout<<"步数统计："<<m_iSteps<<endl;

        //边界测试，四个任何一个等于边界值就会退出
        if((m_iNowLocal.X==0||m_iNowLocal.X==m_mazeMap.getRow()-1)||m_iNowLocal.Y==m_mazeMap.getCol()-1||(m_iNowLocal.Y==0))
        {
            //判断有没有走到出口的位置，到了，就结束循环
            setPersonChar(' ');
            gotoxy(m_iPreviousLocal.Y,m_iPreviousLocal.X);
            cout<<m_cPerson;
            Sleep(0.05*1000);
            setPersonChar(tempcPer);
            gotoxy(m_iNowLocal.Y,m_iNowLocal.X);
            cout<<m_cPerson;
            Sleep(speed_num *1000);
            break;
        }
        //当前要走的位置不是出口位置，移动位置
        m_cFaceto=turn(m_cFaceto);//判断当前位置的下一个位置的方向

        setPersonChar(' ');
        gotoxy(m_iPreviousLocal.Y,m_iPreviousLocal.X);
        cout<<m_cPerson;
        Sleep(0.05*1000);
        setPersonChar(tempcPer);
        gotoxy(m_iNowLocal.Y,m_iNowLocal.X);
        cout<<m_cPerson;

        //从控制台的第二十行输出当前走的步数
        //gotoxy(0,m_mazeMap.getRow()+2);
        //cout<<"步数统计:"<<m_iSteps<<endl;

        Sleep(speed_num *1000);
    }
    setPersonChar(' ');
    gotoxy(0,m_mazeMap.getCol());
    cout<<endl<<endl<<endl<<endl;
    cout<<"走的步数："<<m_iSteps<<endl;
    cout<<"出口坐标: "<<"("<<m_iNowLocal.X<<","<<m_iNowLocal.Y<<")"<<endl;
    cout<<"Finally the maze!"<<endl;
}
void Mazer::gotoxy(int x,int y)//动画控制
{
    COORD cd;
    cd.X=x;
    cd.Y=y;
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle,cd);
}

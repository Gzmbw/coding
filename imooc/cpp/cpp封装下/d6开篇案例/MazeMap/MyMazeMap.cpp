#include<iostream>
#include"MazeMap.h"
#include"Mazer.h"

using namespace std;

const int SUCCESS=0;
int main()
{
    int map[8][9]={
        {WALL,WALL,WALL,WALL,WALL,WALL,WALL,ROAD,WALL},
        {WALL,WALL,WALL,WALL,ROAD,WALL,WALL,ROAD,WALL},
        {WALL,WALL,WALL,WALL,ROAD,WALL,WALL,ROAD,WALL},
        {WALL,WALL,WALL,WALL,ROAD,WALL,WALL,ROAD,WALL},
        {WALL,WALL,ROAD,ROAD,ROAD,ROAD,WALL,ROAD,WALL},
        {WALL,WALL,ROAD,WALL,WALL,ROAD,ROAD,ROAD,WALL},
        {WALL,ROAD,ROAD,WALL,WALL,WALL,WALL,WALL,WALL},
        {WALL,ROAD,WALL,WALL,WALL,WALL,WALL,WALL,WALL},
    };
    MazeMap maze;

    //maze.defaultMode();
    maze.setMazeMap(&map[0][0],8,9);//创建map的一个迷宫
    maze.setMazeWall("*");//墙的表示字符
    maze.drawMap();//绘制迷宫
    Mazer mazer;//迷宫人
    mazer.setPersonPosition(1,7);//人的位置
    mazer.setPersonSpeed(FAST);
    mazer.setPersonChar('T');
    mazer.start(faceto);
    return 0;
}

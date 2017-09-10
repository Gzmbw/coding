#include<iostream>
#include"MazeMap.h"
using namespace std;

MazeMap::MazeMap()
{
    m_cRoad=' ';
    m_cWall=' ';
    m_iMapCol=0;
    m_iMapRow=0;
    m_ExitPosition.X=0;
    m_ExitPosition.Y=0;
    m_pMap=NULL;
}
MazeMap::~MazeMap()
{
    for(int i=0;i<m_iMapRow;i++)
    {
        delete []m_pMap[i];
        m_pMap[i]=NULL;
    }
}
void MazeMap::setMazeMap(int *map,int row,int col)//设置指向地图二维数组的指针
{
    m_pMap=map;
    m_iMapCol=col;
    m_iMapRow=row;

    m_pMap=new int*[m_iMapRow];
    for(int i=0;i<m_iMapRow;i++)
    {
        m_pMap[i]=new int[m_iMapCol];
    }

    int *p=map;
    for(int i=0;i<m_iMapRow;i++)
    {
        for(int j=0;j<m_iMapCol;j++)
        {
            m_pMap[i][j]=*p;
            p++;
        }
    }
}

void MazeMap::setMazeWall(char _wall)//设置墙壁字符表示
{
    m_cWall= _wall;
}
void MazeMap::drawMap()//打印地图
{
    for(int i=0;i<m_iMapRow;i++)
    {
        for(int j=0;j<m_iMapCol;j++)
        {
            if(m_pMap[i][j]==WALL)
                cout<<m_cWall;
            else
                cout<<m_cRoad;
        }
        cout<<endl;
    }
}
int **MazeMap::getMap()
{
    return m_pMap;
}
int MazeMap::getCol()
{
    return m_iMapCol;
}
int MazeMap::getRow()
{
    return m_iMapRow;
}
void MazeMap::setExitPosition(COORD coo)
{
    m_ExitPostion=coo;
}
COORD MazeMap::getExitPosition()//获得出口位置
{
    return m_ExitPosition;
}

#ifndef MAZEMAP_H
#define MAZEMAP_H

#define WALL 1
#define ROAD 0
class MazeMap
{
public:
    MazeMap();
    MazeMap(const MazeMap &_mazemap);
    ~MazeMap();
    void setMazeMap(int *map,int row,int col);//设置指向地图二维数组的指针
    void setMazeWall(char _wall);//设置墙壁字符表示
    void drawMap();//打印地图
    int **getMap();//获取地图二维数组的指针
    int getCol();//获得二维数组的列数
    int getRow();//获得二维数组的行数
    void setExitPosition(COORD coo);//设置出口位置
    COORD getExitPosition();//获取出口位置
private:
    char m_cWall;//代表墙的字符
    char m_cRoad;//代表路的字符
    int m_iMapRow;//二维数组的行数
    int m_iMapCol;//二维数组的列数
    int **m_pMap;//指向地图二维数组的指针
    COORD m_ExitPosition;//迷宫出口坐标
};

#endif // MAZEMAP_H



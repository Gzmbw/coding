
#include"Coordinate.h"

class Line
{
public:
    Line(int x1,int y1,int x2,int y2);//往往先在头文件传入参数，这里是a点的横纵坐标b点的横纵坐标
    ~Line();
    void setA(int x,int y);//你丢了这两个函数了；注意
    void setB(int x,int y);
    void printInfo();
private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};


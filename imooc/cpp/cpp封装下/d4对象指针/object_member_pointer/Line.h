#include"Coordinate.h"
class Line
{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void printInfo();
public:
    Coordinate *m_pCoorA;//是对象指针
    Coordinate *m_pCoorB;
};

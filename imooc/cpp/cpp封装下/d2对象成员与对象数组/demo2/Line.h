
#include"Coordinate.h"

class Line
{
public:
    Line();
    ~Line();
    void setA(int x,int y);//你丢了这两个函数了；注意
    void setB(int x,int y);
    void printInfo();
private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};


#ifndef LINE_H
#define LINE_H

#endif // LINE_H
#include"Coordinate.h"

class Line{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void setA(int x,int y);
    //int getA();没有这个
    void setB(int x,int y);
    //int getB();
    void printInfo();
    void printInfo() const;
     const Coordinate m_coorA;//把A点定义为常对象成员，const可以写在类名Coordinate前或者后
     Coordinate m_coorB;
};

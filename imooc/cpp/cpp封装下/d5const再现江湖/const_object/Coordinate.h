#ifndef COORDINATE_H
#define COORDINATE_H
class Coordinate{
public:
    Coordinate(int x,int y);
    ~Coordinate();
    void setX(int x);
    int getX() const ;//在声明的时候写上const，在定义上也要写上.这里就变成常成员函数
    void setY(int y);
    int getY() const;
private:
    int m_iX;
    int m_iY;
};
#endif // COORDINATE_H



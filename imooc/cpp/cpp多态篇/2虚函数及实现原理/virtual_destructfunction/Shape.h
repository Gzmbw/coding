#ifndef SHAPE_H
#define SHAPE_H
class Shape{
public:
    Shape();
    //加上virtual有时候会出现奇妙的错误，试着先清理项目！
    virtual ~Shape();//如果不加virtual，不执行coordinate的析构函数，造成内存泄露。虚析构函数
    virtual double calcArea();
    //virtual static void test(){}这里不可以在静态函数前面加virtual
};

#endif // SHAPE_H

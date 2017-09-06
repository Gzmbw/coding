class Array{
public:
    Array(int count);
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    int getCount();
    void printAddr();//增加一个m_pArr地址查看函数
private:
    int m_iCount;
    int *m_pArr;//这个数据成员是指针
};

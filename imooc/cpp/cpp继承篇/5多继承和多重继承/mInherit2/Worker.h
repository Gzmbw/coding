#ifndef WORKER_H
#define WORKER_H
#include<string>
using namespace std;
class Worker{
public:
    Worker(string code="001");
    virtual ~Worker();//虚析构函数
    void carry();
protected:
    string m_strCode;
};

#endif // WORKER_H

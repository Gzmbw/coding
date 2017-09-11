#ifndef MIGRANTWORKER_H
#define MIGRANTWORKER_H
#include"Worker.h"
#include"Farmer.h"
class MigrantWorker:public Farmer,public Worker
{
public:
    MigrantWorker(string name,string code);
    ~MigrantWorker();
};

#endif // MIGRANTWORKER_H

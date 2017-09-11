#ifndef FARMER_H
#define FARMER_H
#include<string>
using namespace std;
class Farmer{
public:
    Farmer(string name="Jack");
    virtual ~Farmer();
    void sow();
protected:
    string m_strName;
};

#endif // FARMER_H

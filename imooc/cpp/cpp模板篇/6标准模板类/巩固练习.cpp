//使用vector存储数字3，6,8,4，并遍历。
//使用map存储S-Shang Hai   B-Bei Jing    G-Guang Zhou，并遍历
#include <vector>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(void)
{
    // 使用vector存储数字：3、4、8、4
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(4);
    //循环打印数字
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<endl;
    }
    
    // 使用map来存储字符串键值对
    map<string, string> m;
    pair<string,string> p1("S","Shang Hai");
    pair<string,string> p2("B","Bei Jing");
    pair<string,string> p3("G","Guang Zhou");
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    // 打印map中数据
    map<string,string>::iterator itor=m.begin();//注意进行遍历的时候，别忘了这句
    for(;itor!=m.end();itor++)
    {
        cout<<itor->first<<"-"<<itor->second<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    char *p=new char[1000]; //分配字符串空间
    cin>>p; //输入字符串
    cout<<p; //输出字符串
    delete [] p; //释放字符串空间
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    char str[100],*p=str;
    cin>>str;       //输入字符串
    while (*p) p++; //指针p指向到字符串结束符
    cout<<"strlen="<<p-str<<endl;  //计算字符串的长度

    return 0;
    
}
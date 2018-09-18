#include <iostream>
#include <math.h>
using namespace std;
template <class T> T add(T a,T b)
{
    return a+b;
}
int main()
{
    cout<<"int_add="<<add(10,20)<<endl; //生成整型版本的add函数
    cout<<"double_add="<<add(10.2,20.5)<<endl;//生成实型版本的add函数
    cout<<"char_add="<<add('A','\2')<<endl;//生成字符型版本的add函数
    cout<<"int_add="<<add(100,200)<<endl;
    return 0;
}
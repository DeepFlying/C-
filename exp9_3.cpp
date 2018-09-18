#include <iostream>
using namespace std;
inline int fun(int a,int b) //内联函数
{
    return a*a+b*b;
}
int main()
{
    int n=5,m=8,k;
    k = fun(n,m); //调用点嵌入 a*a+b*b 代码
    cout<<"k="<<k<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int IsPrime(int m) //求素数函数
{ 
    //枚举法求m是否素数
    int i;
    for (i=2 ; i<=m-1 ; i++)
    if (m % i==0) return 0; //不是素数返回0
    return 1; //是素数返回1
}
int main()
{
    int m;
    cin>>m;
    if (IsPrime(m)) cout<<"Yes"<<endl; //是素数输出Yes
    else cout<<"No"<<endl; //不是素数输出No
    return 0;
}

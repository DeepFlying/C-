#include <iostream>
using namespace std;
int main()
{
    int n=1,k=1;
    do {
        k=k*n;
        cin>>n;
    } while (n!=0); //输入0时结束循环
    cout<<k<<endl; //输出乘积
    return 0;
}

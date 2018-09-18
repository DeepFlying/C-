#include <iostream>
using namespace std;
int fa(int a,int b); //fa函数原型
int fb(int x); //fb函数原型
int main()
{
    int a=5,b=10,c;
    c = fa(a,b); cout<<c<<endl;
    c = fb(a+b); cout<<c<<endl;
    return 0;
}

int fa(int a,int b)
{
    int z;
    z= fb(a*b);
    return z;
}
int fb(int x)
{
    int a=15,b=20,c;
    c=a+b+x;
    return c;
}

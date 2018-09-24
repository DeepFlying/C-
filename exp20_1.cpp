#include <iostream>
using namespace std;
int *f1(int n)          //分配n个整型内存，返回首地址
{
    int *p, i;
    p = new int [n];    //分配
    for(i=0; i<n; i++)
        p[i] = i;       //赋初始值
    return p;
}

void f2(int *p, int n)      //输出动态内存中的n个数据
{
    while (n-->0)   cout <<*p++<<' ';
    cout << endl;
}

void f3(int *p)
{
    delete [] p;    //释放内存
}

int main()
{
    int *pi;
    pi = f1(5);     //分配 
    f2(pi,5);       //输出
    f3(pi);         //释放
    return 0;
}

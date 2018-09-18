#include <iostream>
using namespace std;
void swap(int *p1, int *p2)
{
    int t;
    t=*p1 , *p1=*p2, *p2=t; //交换*p1和*p2
    }
int main()
{
    int a, b;
    cin>>a>>b; //输入
    if (a>b) swap(&a, &b);
    cout<<"min="<<a<<",max="<<b; //输出
    return 0;
}
/*
#include <iostream>      //这种方法无法进行数据的交换
using namespace std;
void swap(int p1, int p2)
{
    int t;
    t=p1 , p1=p2, p2=t;
}
int main()
{
    int a, b;
    cin>>a>>b;
    if(a>b) swap(a, b);
    cout<<"min="<<a<<",max="<<b;
    return 0;
}*/
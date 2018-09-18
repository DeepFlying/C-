//使用多种方法遍历一维数组
//1.下表法
#include <iostream>
using namespace std;
int main()
{
#if 0
int a[10], i;
for (i=0;i<10;i++) cin>>a[i];
for (i=0;i<10;i++) cout<<a[i]<<" ";
cout << endl;
return 0;

#elif 0
int a[10], i;
for (i=0;i<10;i++) cin>>*(a+i);
for (i=0;i<10;i++) cout<<*(a+i)<<" ";
cout << endl;
return 0;

#else 
int a[10], *p;
for (p=a;p<a+10;p++) cin>>*p;
for (p=a;p<a+10;p++) cout<<*p<<" ";
cout << endl;
return 0;
#endif 
}
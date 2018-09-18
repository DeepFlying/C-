
#include <iostream>
using namespace std;

int main()
{
int i=100, j=200;
int *p1, *p2;
p1=&i, p2=&j; //p1指向i,p2指向j
*p1 = *p1 + 1; //等价于i=i+1
cout <<"i="<<*p1<<endl;
p1=p2; //将p2的值赋值给p1,则p1指向j
*p1 = *p1 + 1; //等价于j=j+1
cout <<"j="<<*p2<<endl;
return 0;
}
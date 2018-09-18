#include <iostream>
using namespace std;
double average(double *a, int n)
{ //等价于average(double a[], int n)
    double avg=0.0, *p=a;
    int i;
    for (i=1;i<=n;i++,p++) avg+=*p ; //等价于avg=avg+p[i]
    return n<=0 ? 0 : avg/n ;
}
int main()
{
    double x[10]={66,76.5,89,100,71.5,86,92,90.5,78,88};
    cout<<"average="<<average(x,10)<<endl;
    return 0;
}
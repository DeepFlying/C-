//求a,b的定积分
#include <iostream>
#include <cmath>
using namespace std;
double integral(double a,double b,double (*f)(double x))
{ //求定积分
    int n=1000, i;
    double h, x, s=0.0;
    h=(b-a)/n;
    for(i=1;i<=n;i++) {
    x=a+(i-1)*h;
    s=s+(f(x)+f(x+h))*h/2; //调用f函数求f(x)、f(x+h)
    }
    return s;
}
double f1(double x)
{ 
    return 1+x;
}

double f2(double x)
{ 
    return exp(-x*x/2);
}

double f3(double x)
{ 
    return x*x*x;
}
int main()
{
    double a,b;
    cin>>a>>b;
    cout<<(integral(a,b,f1)+integral(a,b,f2)+integral(a,b,f3))<<endl;
    return 0;
}

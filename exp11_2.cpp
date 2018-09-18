#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{ //所要求解的函数公式,可改为其他公式
    return x*x*x-5*x*x+16*x-79;
}
double point(double a,double b)
{ //求解弦与x轴的交点
    return (a*f(b)-b*f(a))/(f(b)-f(a));
}
double root(double a, double b)
{ //弦截法求方程[a,b]区间的根
    double x,y,y1;
    y1=f(a);
    do {
        x=point(a,b); //求交点x坐标
        y=f(x);//求y
        if (y*y1>0) y1=y, a=x;
        else b=x;
    } while (fabs(y)>=0.00001); //计算精度E
    return x;
 }

int main()
{
    double a,b;
    cin>>a>>b;
    cout<<"root="<<root(a,b)<<endl;
    return 0;
}

//计算a和b的平方和、自然对数和、几何平均数、和的平方根ss
#include <iostream>
#include <cmath>
using namespace std;
double fun(double a, double b, double *sqab, double *lnab, double *avg)
{
    *sqab=a*a+b*b; //*sqab返回平方和
    *lnab=log(a)+log(b); //*lnab返回自然对数和
    *avg=(a+b)/2; //*avg返回几何平均数
    return (sqrt(a+b)); //函数返回和的平方根
}
int main()
{
    double x=10,y=12,fsq,fln,favg,fsqr;
    fsqr=fun(x, y, &fsq, &fln, &favg);
    cout<<x<<","<<y<<","<<fsq<<","<<fln<<","<<favg<<","<<fsqr<<endl;
    return 0;
}
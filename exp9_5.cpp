#include <iostream>
using namespace std;
int max(int a, int b) //整型版本
{
    return (a>b ? a : b);
}
double max(double a, double b) //双精度版本
{
    return (a>b ? a : b);
}
long max(long a, long b) //长整型版本
{
    return (a>b ? a : b);
}

int main()
{
    int i=12 , j=-12 , k;
    k = max(i,j) ; //调用整型版本max
    cout << "int max=" << k << endl;
    double x=123.4 , y=65.43 , z;
    z = max(x,y) ; //调用双精度版本max
    cout << "double max=" << z << endl;
    long a=7654321 , b=1234567, c;
    c = max(a,b) ; //调用长整型版本max
    cout << "long max=" << c << endl;
    return 0;
}

/*#include <iostream>
using namespace std;
int max(int a, int b) //两个参数版本
{
    return (a>b ? a : b); 
}

int max(int a, int b, int c) //三个参数版本
{
    a = a>b ? a : b ; a = a>c ? a : c ;
    return (a);
}

int main()
{
    int a , b, i=10, j=8 , k=12;
    a = max(i,j) ; //调用两个参数版本max
    b = max(i,j,k) ; //调用三个参数版本max
    cout <<a<<"\n"<<b<<endl;
    return 0;
}
*/
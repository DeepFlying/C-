//求n的阶乘
#include <iostream>
using namespace std;
int f(int n)
{
    if (n>1) return f(n-1)*n; //递归调用
    return 1;
}
int main()
{
    cout<<f(5)<<endl;
    return 0;
}

//求1！+2！+...+n!
/*#include <iostream>
using namespace std;
int f(int n)
{
    if (n>1) return f(n-1)*n; //递归调用
    return 1;
}
int main()
{
    int sum=0,i,n;
    cin>>j;
    for(i=1;i<=n;i++)
    {
        sum = f(i) + sum;

    }
    cout<<sum<<endl;
    return 0;
}
*/
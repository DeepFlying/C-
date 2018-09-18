//交换两个数字
//方法一
/*#include <iostream>
using namespace std;
void swap(int x,int y)
{   
    int t;
    t=x; x=y; y=t; 
}
int main( )
{
    int a,b;
    cin>>a>>b; swap(a,b);
    cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}
*/
//方法二
#include <iostream>
using namespace std;
int a,b;
void swap()
{ 
    int t;
    t=a; a=b; b=t; 
}
int main( )
{
    cin>>a>>b;
    swap(a,b); cout<<"a="<<a<<",b="<<b<<endl;
    return 0;
}


#if 0
//程序1 函数返回值
#include <iostream>
using namespace std;
int max(int a,int b)
{ 
    return (a>b?a:b); 
}

int main()
{ 
    int x=10,y=20,z;
    z = max(x,y);
    cout << z<< endl;
    return 0;
}

#elif 1
//程序2 函数返回指针
#include <iostream>
using namespace std;
int* max(int a, int b)
{
    return (a>b? &a:&b);
} 

int main()
{
    int x = 10, y = 20, *z,*a;
    z = max(x,y);
    cout << *z <<endl;
    return 0;
}
#else
//程序3 函数返回引用
#include <iostream>
using namespace std;
int& max(int &a, int &b)
{
    return (a>b? a:b);
}

int main()
{
    int x = 10, y = 20, z;
    z = max(x,y);
    cout<<z<<endl;
    return 0;
}
#endif

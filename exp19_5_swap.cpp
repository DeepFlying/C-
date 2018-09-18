/*//程序1 传递对象本身
#include <iostream>
using namespace std;
//对象作为函数形参
void swap(int a,int b)
{ 
    int t;
    t=a, a=b, b=t;
}

int main()
{ 
    int x=10, y=20;
    swap(x,y);
    cout<<x<<","<<y;
    cout<<endl;
    return 0;
}
*/
//程序2 传递对象的指针
#include <iostream>
using namespace std;
//指针作为函数形参
/*
void swap(int *a,int *b)
{ 
    int t;
    t=*a, *a=*b, *b=t;
}

int main()
{ 
    int x=10, y=20;
    swap(&x,&y);
    cout<<x<<","<<y;
    cout<<endl;
    return 0;
}
*/
//程序3 传递对象的引用
#include <iostream>
using namespace std;
//引用作为函数形参
void swap(int &a,int &b)
{ 
    int t;
    t=a, a=b, b=t;
}

int main()
{   
    int x=10, y=20;
    swap(x,y);
    cout<<x<<","<<y;
    cout<<endl;
    return 0;
}

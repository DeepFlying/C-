//指针的定义
#include <iostream>
using namespace std;

int main()
{
    int a, *p=&a;
    a = 100;                //直接访问a,（对象直接访问）
    cout <<"a="<<a<<endl;

    *p = 100;               //*p就是a,间接访问a(指针间接访问)
    cout <<"a="<<a<<endl;

    *p = *p + 1;            //等价于a = a + 1
    cout <<"a="<<a<<endl;
    return 0;
}
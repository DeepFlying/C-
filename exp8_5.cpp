#include <iostream>
using namespace std;
int main()
{
    int i, f1=1, f2=1,fn;//迭代变量
    for(i=1; i<=40; i++) {  //迭代次数
        fn = f1 + f2; //迭代关系式
        f1 = f2, f2 = fn;    //f1和f2迭代前进
        cout <<f1<<endl;
    }
    return 0;
}

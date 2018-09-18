#include <iostream>
using namespace std;

int main ()
{
    #if 1
    char str[]="C Language", *p=str; //p指向字符串的指针
    cout<<p<<endl;                  //输出:C Language
    cout<<p+2<<endl;                //输出:Language
    cout<<&str[7]<<endl;            //输出:age

    while (*p) cout<<*p++;          //输出:C Language
    cout <<endl;
    
    #else
    char str[]="C Language", *p=str; //p指向字符串的指针
    while (*p) cout<<*p++;
    cout <<endl;
    #endif
    return 0;
}

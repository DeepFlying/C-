#include <iostream>
using namespace std;
int main()
{
    int s,n,t,num;
    cout<<"please input a number:";
    cin>>num;
    for (s=0,t=1,n=1; n<=num; n++)
        t = t * n, s = s + t; //t=n!
    cout<<s<<endl;
    return 0;
}

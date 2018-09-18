#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double s=1,pi=0,n=1,t=1;
    while (fabs(t)>1e-7)
    pi=pi+t, n=n+2, s=-s, t=s/n;
    cout<<pi*4<<endl;
    return 0;
}

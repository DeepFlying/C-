#include <iostream>
using namespace std;

int main()
{
    int a[5]={1,4,2,5,3},i,j,k,t;
    for(i=0; i<4; i++)
    {
        k = i;
        for(j=i+1; j<5; j++)
            if(a[j] < a[k])
                k = j;
            if(i != k)
            t = a[i],a[i] = a[k],a[k] = t;
    }
    for(i=0; i<5; i++)
    cout<<a[i]<<" ";
    return 0;
}

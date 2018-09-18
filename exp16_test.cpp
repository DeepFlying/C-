#include <iostream>
using namespace std;
#define N 5

void maopao(int a[], int n);
void xuanze(int a[], int n);

int main ()
{
    int i,j,t;
    int a[N];
    for(i=0; i<N ;i++)
    {
        cin>>a[i];
    }
    
    //maopao(a,N);
    xuanze(a, N);
    for(i=0; i<N; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
//封装成函数
void maopao(int a[], int n)
{
    int i,j,t;
    for(i=0; i<n-1; i++)        //冒泡法排序
        for(j=0; j<n-1-i; j++)
            if(a[j]>a[j+1])
                t = a[j], a[j] = a[j+1],a[j+1] = t;
}

void xuanze(int a[], int n)
{
    int i,j,k,t;
    for(i=0; i<n-1; i++)
    {
        k = i;
        for(j=i+1; j<n; j++)
            if(a[k] > a[j])
                k = j;

        if(i != k)
            t = a[i],a[i] = a[k], a[k] = t;
    }    
        
        

}

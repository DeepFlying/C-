#include <iostream>
using namespace std;
#define N 10
int search(int A[], int n, int find)
{
    int i;
    for(i=0; i<n; i++)
        if(A[i] == find)
            return i;
        return -1;
}

int main()
{
    int A[N] = {18,-3,-12,34,101,211,12,90,77,45},i,find;
    cin>>find;
    i = search(A,N,find);
    if(i>=0) 
        cout <<"A["<<i<<"]="<<find<<endl;
    else
        cout <<"not found"<<endl;
    return 0;
}

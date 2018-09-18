#include <iostream>
using namespace std;
int main()
{
    int A[5]={1,2,3,4,5} , B[5] , i;
    for (i=0; i<5; i++)
    B[i] = A[i]; //元素一一复制
    for (i=0; i<5; i++)
        cout<<B[i]<<" ";
    cout<<endl;
    return 0;
}

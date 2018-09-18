#include <iostream>
using namespace std;
int main()
{
    int A[2][3]={{1,2,3},{4,5,6}},AT[3][2], i, j;
    for (i=0; i<2; i++) //求矩阵A的转置
    for(j=0;j<3;j++) AT[j][i]=A[i][j];
    cout<<"A="<<endl;
    for (i=0; i<2; i++) { //输出矩阵A
        for(j=0;j<3;j++) 
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
    cout<<"AT="<<endl;
    for (i=0; i<3; i++) { //输出转置矩阵AT
        for(j=0;j<2;j++) 
            cout<<AT[i][j]<<" ";
        cout<<endl;
    }
return 0;
}

//给二维数组输入数据，并以行列输出
#include <iostream>
using namespace std;
int main()
{
    int A[3][4],i,j;
    for (i=0;i<3;i++)
    for (j=0;j<4;j++) cin >> A[i][j];
    for (i=0;i<3;i++) {
        for (j=0;j<4;j++) //内循环输出一行
            cout<<A[i][j]<<" ";
        cout<<endl; //每输出一行换行
    }
    return 0;
}

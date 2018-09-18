#include <iostream>
using namespace std;
int findmax(int A[3][4],int B[2])
{
    int i,j,max,r=0,c=0;
    max=A[r][c]; //max初值设为A[0][0]
    for (i=0; i<3; i++) //枚举二维数组所有元素
    for (j=0; j<4; j++)
    if (A[i][j]>max) {
        r = i , c = j; //记录此时的下标
        max = A[r][c]; //新的最大元素值;
    }
    B[0]=r, B[1]=c; //下标行、列通过B数组返回到主调函数中
    return max; //最大值通过函数值返回到主调函数中
}
int main()
{
    int A[3][4]={{7,5,-2,4},{5,1,9,7},{3,2,-1,6}},B[2],max;
    max=findmax(A,B);
    cout<<"max:A["<<B[0]<<"]["<<B[1]<<"]="<<max<<endl;
    return 0;
}
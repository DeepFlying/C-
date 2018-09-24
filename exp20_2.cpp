#include <iostream>
using namespace std;
double AVE(double *A,int N) //计算N*N二维数组元素的平均值
{
    double sum=0;
    int i,j;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++) sum=sum+*(A+i*N+j);
    return sum/(N*N);
}
int main()
{
    int i,j,n; 
    cin>>n;
    double *A=new double[n*n]; //分配“数组”A[n][n]
    for (i=0;i<n;i++)
        for (j=0;j<n;j++) cin>>*(A+i*n+j); //输入数据到A[i][j]
    cout<<"detA="<<AVE(A,n)<<endl;
    delete [] A; //释放“数组”
    return 0;
}
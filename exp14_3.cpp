//计算A、B数组元组的平均值
#include <iostream>
using namespace std;
double average(double A[],int n)
{
    int i; double s=0; //累加初值为0
    for (i=0; i<n; i++) s=s+A[i]; //先累加
    return n!=0 ? s/n : 0.0; //计算平均值
}
int main()
{
    double A[3]={1,2,3};
    double B[5]={1,2,3,4,5};
    cout<<"A="<<average(A,3)<<endl; //传递数组长度即可正确计算
    cout<<"B="<<average(B,5)<<endl; //传递数组长度即可正确计算
    return 0;
}

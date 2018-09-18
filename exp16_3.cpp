#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
void SelectionSort(int A[],int n);
#define N 10
int main()
{
    int A[N],i;
    srand((unsigned int)time(0)); //设置随机数种子
    
    for(i=0; i<N; i++) { //随机产生N个数
        A[i] = rand()%100;
        cout<<A[i]<<" ";
    }
    cout<<endl;

    SelectionSort(A,N);
    for(i=0; i<N; i++) cout<<A[i]<<" "; //输出排序结果
    cout << endl;
    return 0;
}
void SelectionSort(int A[],int n) //选择排序 n为数组元素个数
{
    int i,j,k,t;
    for(i=0; i<n-1; i++) { //选择排序法
        k = i;
    for(j=i+1; j<n; j++) //一趟选择排序        
        if (A[j] < A[k]) //<升序 >降序
            k = j;
        if(i!=k)        
            t=A[i], A[i]=A[k], A[k]=t;
    }
}

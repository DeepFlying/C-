//排序问题 冒泡法
#include <iostream>
using namespace std;
#define N 5 //数组元素个数
int main()
{
    int A[N], i, j, t; //注意数组下标从0开始
    for (i=0; i<N; i++) 
        cin>>A[i]; //输入N个数
    for(j=0; j<N-1; j++) //冒泡排序法
        for(i=0; i<N-1-j; i++) //一趟冒泡排序
            if(A[i] > A[i+1]) //A[i]与A[i+1]比较 <升序 >降序
                t=A[i], A[i]=A[i+1], A[i+1]=t; //交换
    for (i=0; i<N; i++) 
        cout<<A[i]<<" "; //输出排序结果
    return 0;
}



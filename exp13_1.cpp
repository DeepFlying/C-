//对输入的元素进行输出
#include <iostream>
using namespace std;
int main() //一维数组的输入输出
{
    int i, A[3];
    for(i=0;i<3;i++) cin>>A[i];
    for(i=0;i<3;i++) cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}

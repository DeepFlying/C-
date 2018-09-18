#include <iostream>
using namespace std;
int main()
{
    int i,m;
    cin>>m;
    //从2到m-1之间逐一检查是否被m整除
    for (i=2 ; i<=m-1 ; i++)
    if (m % i==0) break; //如果整除则结束检查
    if (i==m) cout<<"Yes"<<endl; //根据循环结束位置判断是否素数
    else cout<<"No"<<endl;
    return 0;
}

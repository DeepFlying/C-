#include <iostream>
using namespace std;
int main()
{
    int y,m,d,Days;
    cin>>y>>m>>d;
    //输入日期
    switch(m) {
        //计算每月的天数
        case 2 : Days=28;
        if((y%4==0&&y%100!=0)|| (y%400==0)) Days++; //闰年天数加1
        break;
        case 4 : Days=30;break;
        case 6 : Days=30;break;
        case 9 : Days=30;break;
        case 11 : Days=30;break;
        default: Days=31; //其余月份为31天
        d++;
        if (d>Days) d=1,m++; //判断月末
        if (m>12) m=1,y++;
        //判断年末
        cout<<y<<"-"<<m<<"-"<<d<<endl; //输出第二天的日期
        return 0;
    }
    
}

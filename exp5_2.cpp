#include <iostream>
using namespace std;
#define PI 3.1415926 //定义符号常量PI
int main()
{
	double r,area;//定义圆半径r,圆面积area
	cout<<"please input radius:";	
	cin>>r;//输入圆半径
	area=PI*r*r;//求圆面积
	cout<<"area="<<area<<endl;//输出圆面积
	return 0;
}

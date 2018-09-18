#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	double a,b,c;
	cin>>a>>b>>c; //输入三角形三边长
	
	//判断三边长是否构成三角形
	if (a+b>c && a+c>b && b+c>a) {
	double s,t;
	t=(a+b+c)/2.0;
	s=sqrt(t*(t-a)*(t-b)*(t-c)); //Heron公式计算三角形面积
	cout<<"area="<<s<<endl;
	}
	else cout<<"error"<<endl;
	return 0;
}

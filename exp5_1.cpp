#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	bool v; int a,m,n;
	double x,y,z,p,f; float f1;
	cin>>boolalpha>>v; //输入:true
	cin>>oct>>a>>hex>>m>>dec>>n;//输入:144 46 -77
	cin>>p>>f>>f1>>x>>y>>z;//输入:3.14 3.14 3.14 3.14159 0.1 0.1e1
	cout<<v<<' '<<boolalpha<<v<<' '<<noboolalpha<<v<<endl;//输出:1 true 1
	cout<<a<<' '<<p<<' '<<a*p<<endl;//输出:100 3.14 314
	cout<<hex<<m<<' '<<oct<<m<<' '<<dec<<m<<endl;//输出:46 106 70
	cout<<showbase<<hex<<m<<' '<<oct<<m<<' '<<dec<<m<<endl;//输出:0x46 0106 70
	cout.precision(5); cout<<x<<' '<<y<<' '<<z<<endl;//输出:3.1416 0.1 1
	cout<<fixed<<x<<' '<<y<<' '<<z<<endl;//输出:3.14159 0.10000 1.00000
	cout<<scientific<<x<<' '<<y<<' '<<z<<endl;
	//输出:3.14159e+000 1.00000e-001 1.00000e+000
	cout<<left<<setw(6)<<n<<endl; //输出:-77
	cout.width(6); cout<<right<<n<<endl; //输出:_ _ _-77
	cout<<setw(10)<<77<<' '<<setfill('0')<<setw(10)<<77<<endl;
	//输出:_ _ _ _ _ _ _77 0000000077
	cout<<fixed<<setprecision(5)<<f<<' '<<setprecision(9)<<f<<endl;
	//输出:3.14000 3.140000000
	cout<<showpos<<1<<' '<<0<<' '<<-1<<endl; //输出:+1 +0 -1
	cout<<noshowpos<< 1<<' '<<0<<' '<<-1<<endl; //输出:1 0 -1
	return 0;
}

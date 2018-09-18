#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char g;
	cin>>g; //输入成绩等级
	switch(g)
	{
	    case 'A':cout<<"85~100\n"; break;
	    case 'B':cout<<"70~84\n"; break;
	    case 'C':cout<<"60~69\n"; break;
	    case 'D':cout<<"<60\n"; break;
	    default: cout<<"error\n";
	}
	return 0;
}

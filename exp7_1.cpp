#include<iostream>
using namespace std;
int main()
{
    int n=1,sum=0;
    while(n<=100) {
    sum = sum + n;
    n++;    
    }
    cout << "sum=" << sum << endl;
    return 0;
}

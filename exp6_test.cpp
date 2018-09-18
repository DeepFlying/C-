#include <iostream>
using namespace std;
int main()
{
    int a=15, b=21, m=0;
    switch(a%3) {
    case 0: m++;
    switch(b%2) {
    default: m++;
    case 0 : m++; break;
    }
    case 1: m++;
    }
    cout << m <<endl;
    
    return 0;
}

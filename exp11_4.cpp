#include <iostream>
using namespace std;
void Hanoi(int n, char A, char B, char C)
{
    if (n==1) cout<<A<<"->"<<C<<" ";
    else {
            Hanoi(n-1, A, C, B);
            cout<<A<<"->"<<C<<" ";
            Hanoi(n-1, B, A, C);
         }
}

int main()
{
    int n;
    cin>>n;
    Hanoi(n, 'A', 'B', 'C');
    cout<<endl;
    return 0;
} 

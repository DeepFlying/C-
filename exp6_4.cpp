#include <iostream>
#include <cmath>
using namespace std;
int main( )
{
    double x, y;
    cout << "please input x:" << endl <<"x=";
    cin>>x;
    if(x<-3.0) 
        y=x-1.0;
    else
        if(x>= -3.0 && x<=3.0)
            y=9.0-x*x;
        else
            y=x+1;
    cout<<"x="<<x<<",y="<<y<<endl;
   
    return 0;
}

/*#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x,y;
    cout << "please input x:" << endl <<"x=";
    cin >> x;
        
    if(x < -3.0)
        y = x - 1.0;
    else if(x<=3.0 && x>=-3.0)
        y = 9.0 - x*x;    
    else
        y = x + 1.0;
    cout << "y=" << y << endl;
    
    return 0;
}
*/

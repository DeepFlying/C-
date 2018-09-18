//求数组中的最大值和最小值
#include <iostream>
using  namespace std;
int main ()
{
    int i, a[5],x,y,max, min;
    for (i=0; i<5; i++)
        cin>>a[i];
        max = a[0];
        min = a[0];
    for (i=0; i<5; i++){ 
        if(a[i]>max){
            max = a[i];
            x = i;
        }
            
        else
            max = max;
    } 
    for (i=0; i<5; i++){
        if(a[i]<min){
            min = a[i];
            y = i;
        }
            
        else
            min = min;
    } 
    cout <<"max a["<<x<<"]="<<max<<"\nmin a["<<y<<"]="<<min<<endl;
    return 0;
}


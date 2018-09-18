/*#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    for (x=0; x<=20; x++) //枚举公鸡的可能数量,最多为20
        for (y=0; y<=33; y++) //枚举母鸡的可能数量,最多为33
            for (z=0; z<=100; z++)//枚举小鸡的可能数量,最多为100
                if(z%3==0&&x+y+z==100&&5*x+3*y+z/3==100)//约束条件
                    cout<<"公鸡="<<x<<",母鸡="<<y<<",小鸡="<<z<<endl;
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
int x,y,z;
for (x=0; x<=20; x++) //枚举公鸡的可能数量,最多为20
    for (y=0; y<=33; y++) { //枚举母鸡的可能数量,最多为33
        z=100-x-y; //小鸡的数量根据约束条件求得
        if (z%3==0 && 5*x+3*y+z/3==100) //约束条件
            cout<<"公鸡="<<x<<",母鸡="<<y<<",小鸡="<<z<<endl;
    }
    return 0;
}


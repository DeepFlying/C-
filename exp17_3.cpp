//指向指针的指针
/*指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。
当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。*/
#include <iostream>
using namespace std;
 
int main ()
{
   int  var;
   int  *ptr;
   int  **pptr;

   var = 3000;

   /* 获取 var 的地址 */
   ptr = &var;

   /* 使用运算符 & 获取 ptr 的地址 */
   pptr = &ptr;

   /* 使用 pptr 获取值 */
   cout<<"Value of var = "<<var<<endl;
   cout<<"Value available at *ptr =  "<<*ptr<<endl;
   cout<<"Value available at **pptr = "<<**pptr<<endl;

   return 0;
}
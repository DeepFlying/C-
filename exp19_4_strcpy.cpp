#include <iostream>
using namespace std;
char *stringcpy(char *strDest, const char *strSrc)
{
    char *p1 = strDest;
    const char *p2 = strSrc;
    while (*p2!='\0') *p1=*p2, p1++, p2++;
    *p1 = '\0';
    return strDest;
}

int main()
{
    char s1[80],s2[80],s3[80]="string=";
    cin>>s1;
    stringcpy(s2,s1);
    cout << "s2:" << s2 << endl;
    stringcpy(&s3[7],s1);
    cout << "s3:" << s3 << endl;
    return 0;

}





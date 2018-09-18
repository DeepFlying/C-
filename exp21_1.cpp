#include <iostream>
using namespace std;
#define N 2
struct tagSTUDENT { //学生信息类型
    int no; //学号
    char name[21]; //姓名
    double score; //成绩
};

int main()
{
    struct tagSTUDENT A[N], t;
    int i,j;
    for(i=0; i<N; i++)
        cin>>A[i].no>>A[i].name>>A[i].score;
    for(i=0; i<N-1; i++)
        for(j=i; j<N; j++)
            if(A[i].score<A[j].score || (A[i].score==A[j].score&&A[i].no>A[j].no))
                t=A[i], A[i]=A[j], A[j]=t;
    for(i=0; i<N; i++)
        cout<<A[i].no<<","<<A[i].name<<","<<A[i].score<<endl;
        return 0;           
}

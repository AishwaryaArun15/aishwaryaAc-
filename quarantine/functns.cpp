#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
//inline,default args,const args,functn overloading;
//GETI DEFAULT ARGT;
inline int geti(int* a,int i=1)
{
    return a[i-1];
}
//CGETI CONST ARGT;
inline int  cgeti(int *a, const int i)
{
    return a[i];

}
//OVERLOADING CGETI() FUNCTION;
inline int cgeti(int *a)
{
    return a[0];//ALWAYS RETURN 1ST ELEMENT;
}
int main()
{
    int a[]={1,2,3,4,5},n;
    cout<<"ARRAY=\n";
    for(int i=0;i<5;i++)
    cout<<a[i]<<"\t";
    cout<<"\n\nENTER AN INDEX NUMBER [1-5]\n";
    cin>>n;
    cout<<"\n---------------default argument---------------\n";
    cout<<"a[0]="<<geti(a);
        cout<<"\n---------------sending argument n ---------------\n";
        cout<<"a[n]="<<geti(a,n);
                cout<<"\n---------------constant argument ---------------\n";
                cout<<"a[n]="<<cgeti(a,n);
                        cout<<"\n---------------overloading cgeti---------------\n";
                        cout<<"a[0]="<<cgeti(a);
                        return 0;

}

#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
//functn prototype,returning reference,inline ;
void swap(int &x, int &y);
int& ret_ref(int *,int);
int main()
{
    int a,b;
    cout<<"------------CALL BY REFERENCE------------\n\n";
    cout<<"ENTER A AND B\n";
    cin>>a>>b;
    cout<<"BEFORE SWAPPING\n"<<"a="<<a<<"\nb="<<b<<"\n";
    swap(a,b);
    cout<<"AFTER SWAPPING\n"<<"a="<<a<<"\nb="<<b<<"\n";
        cout<<"------------RETURN BY REFERENCE------------\n\n";

  int ar[]={1,2,3,4,5},i,n;
  cout<<"BEFORE CHANGING array=\n";
  for(i=0;i<5;i++)
  cout<<ar[i]<<"\t";
  cout<<"\nENTER THE INDEX YOU NEED TO MAKE CHANGE IN [1-5]\n";
  cin>>i;
  cout<<"ENTER THE VALUE\n";
  cin>>n;
  ret_ref(ar,i-1)=n;//returning thr reference;
    cout<<"BEFORE CHANGING array=\n";
  for(i=0;i<5;i++)
  cout<<ar[i]<<"\t";

return 0;
}
void swap(int &x,int &y)
{

    int t;
    t=x;
    x=y;
    y=t;
}
int& ret_ref(int *ar,int i)
{

    return ar[i];
}

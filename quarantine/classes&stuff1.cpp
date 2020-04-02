#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdlib>

using namespace std;
//array in class,dynamic memory ,friend function;
class Box
{
    int *a;
    int n;
    public:
    void set(int i)
    {int j;
        a=new int[i];
        n=i;
        cout<<"\n ENTER\n";
        for(j=0;j<n;j++)
        cin>>a[j];
    }
    void get()
    {   cout<<"ARRAY=\n";
        for(int i=0;i<n;i++)
        cout<<a[i]<<"\t";
    }
    friend int sum(Box b);//friend funcn
    void ffree()
    {
        free(a);
    }

};
int sum(Box b)
{
    int i,s=0;
    for(i=0;i<b.n;i++)
    s+=b.a[i];
    return s;
}
int main()
{
    Box b;
    int n;
    cout<<"ENTER THE SIZE\n";
    cin>>n;
    b.set(n);
    b.get();
    cout<<"\nSUM OF ELEMENTS="<<sum(b);
    b.ffree();
}

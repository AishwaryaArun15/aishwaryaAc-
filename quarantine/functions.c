#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
//functn prototype,returning reference,inline ;
void swap(int &x, int &y);
int main()
{
    int a,b;
    cout<<"ENTER A AND B\n";
    cin>>a>>b;
    cout<<"BEFORE SWAPPING\n"<<"a="<<a<<"\nb="<<b<<"\n";
    swap(a,b);
    cout<<"AFTER SWAPPING\n"<<"a="<<a<<"\nb="<<b<<"\n";
    return 0;

}
void swap(int &x,int &y)
{

    int t;
    t=x;
    x=y;
    y=t;
}

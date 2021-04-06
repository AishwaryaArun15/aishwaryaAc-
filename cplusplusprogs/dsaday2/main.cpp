//	Merge 2 sorted arrays without using Extra space.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int small(int* a , int n )
{   int s=a[0];
    int index =0;

    for(int i=1;i<n;i++)
    {
        if(s>a[i])
        {
            s=a[i];
            index=i;
        }
    }
    return index;
}
int main()
{
int a[] = {0,5,1,3};
int b[] = {2,4,6};
int na = sizeof(a)/sizeof(a[0]);
int nb =sizeof(b)/sizeof(a[0]);
sort(a,a+na);
for(int i=0;i<nb;i++)
{
    int index = small(b,nb);
    cout<<"\nsmall="<<b[index]<<endl;
    for(int j=0;j<na;j++)
    {
        if(a[j]>b[index])
        {   //swap

            int t = a[j];
            a[j] = b[index];
            b[index] = t;
            break;
        }
        cout<<"\nb\t";
        for(int h=0;h<nb;h++)
            cout<<b[h]<<" ";

    }
    cout<<"\na\t";
     for(int h=0;h<na;h++)
            cout<<a[h]<<" ";



}
sort(b,b+nb);
cout<<"\nA: ";
for(int h=0;h<na;h++)
    cout<<a[h]<<"\t";
cout<<"\nB: ";
for(int h=0;h<nb;h++)
    cout<<b[h]<<"\t";



}

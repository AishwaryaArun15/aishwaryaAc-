//Minimize the maximum difference between heights
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int a[] = {3,7,10};
int k=3;
int n= sizeof(a)/sizeof(a[0]);
sort(a,a+n);
int ans = a[n-1]-a[0];
int small = a[0]+k;
int big = a[n-1]-k;
for(int i=1;i<n-1;i++)
{
    int sub = a[i]-k;
    int add =a[i]+k;


    // since if sub is greater then it is not the smallest height same goes with add...
    if(sub>=small || add<=big)
        continue;


    if(big-sub <= add-small)
        small=sub;
    else
        big=add;




}
for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
cout<<"big="<<big;
cout<<"\nsmall="<<small<<endl;

cout<<min(ans,big-small);


}

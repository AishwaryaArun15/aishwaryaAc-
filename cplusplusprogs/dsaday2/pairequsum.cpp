// k =a[i] + a[j]
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int a[] = {1,8,5,3,7,2};
int n = sizeof(a)/sizeof(a[0]);
int k = 10;

for(int i=0;i<n-1;i++)
{
    cout<<"a[i]="<<a[i]<<endl;
    for(int j=i+1;j<n;j++)
    { cout<<"a[j]="<<a[j]<<endl;

        if(a[i]+a[j]==k)
            cout<<a[i]<<"+"<<a[j]<<endl;
    }
}


}

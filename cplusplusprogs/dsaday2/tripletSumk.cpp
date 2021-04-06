
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,5,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    int k=7;

    for(int i=0;i+2<n;i++)
    {cout<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;

        if((a[i]+a[i+1]+a[i+2])==k)
        {
            cout<<"ans "<<a[i]<<" "<<a[i+1]<<" "<<a[i+2]<<endl;
        }
        cout<<a[i]<<endl;
    }


}

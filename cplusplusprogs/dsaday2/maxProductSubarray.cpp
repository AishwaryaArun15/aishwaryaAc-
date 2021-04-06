// similar to maximum subarray sum  Kadane's algo;
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,5,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_local=1,max_global=1;

    for(int i=0;i<n;i++)
    {
        max_local*=a[i];
        if(max_global<max_local)
            max_global = max_local;
        if(max_local<=0)
            max_local=1;

    }

cout<<max_global;

}

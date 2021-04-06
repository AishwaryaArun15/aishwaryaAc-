
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3,4,5,8};
    int n = sizeof(a)/sizeof(a[0]);
    int index=-1;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(i+1 != a[i]){
            index = i;
            cout<<index<<"\t"<<a[i]<<"\t"<<i<<endl;
            break;
            }

    }
    cout<<"1 to "<<index;

}

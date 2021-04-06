// https://www.geeksforgeeks.org/factorial-large-number/     IMP IMP IMP IMP IMP IMP

//-----------------------------------------------------------------
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {4,2,-3,1,6};
    int n = sizeof(a)/sizeof(a[0]);
    int flag=0,sum=0;

    //simple soln // refer hash approch

    for(int i=0;i<n;i++)
    {sum=a[i];

        for(int j=i+1;j<n;j++)
        {

            sum+=a[j];
            if(sum==0)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }

}

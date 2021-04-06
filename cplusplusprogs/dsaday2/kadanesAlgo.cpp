/*Initialize:
    max_so_far = 0
    max_ending_here = 0

Loop for each element of the array
  (a) max_ending_here = max_ending_here + a[i]
  (b) if(max_so_far < max_ending_here)
            max_so_far = max_ending_here
  (c) if(max_ending_here < 0)
            max_ending_here = 0
return max_so_far
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1,2,3,5,-4,-2};
    int n =6;
    int max_local = 0, max_global = 0;
    for(int i=0;i<n;i++)
    {
        max_local+=a[i];
        if(max_global<max_local)
            max_global=max_local;
        if(max_local<0)
            max_local=0;

    }
    cout<<max_global;



}

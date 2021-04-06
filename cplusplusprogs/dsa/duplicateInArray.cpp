//find duplicate in an array of N+1 Integers
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int arr[] = {1,4,1,4,5,5};
int n= sizeof(arr)/sizeof(arr[0]);
int i;
    cout << "The repeating elements are:" << endl;
    for (i = 0; i < n; i++) {
            // I have no idea how this works...
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];
        else
            cout << abs(arr[i]) << " ";
    }


}

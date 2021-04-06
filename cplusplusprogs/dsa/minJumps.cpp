//Minimum no. of Jumps to reach end of an array
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int a[] = {1,4};
int n= sizeof(a)/sizeof(a[0]);
int i=a[0];
int steps=1;
while(i<n-1)
{
    i +=a[i];
    steps++;

}
cout<<steps;
}

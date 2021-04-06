#include <iostream>

using namespace std;

int main()
{

    int k;
    int n;
    cout<<"size & k\n";
    cin>>n>>k;
    int a[n];
    cout<<"Enter\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    k=k%n;
    cout<<a[k]<<endl;
    for(int i=k+1;i!=k;i=(i+1)%n)
        cout<<a[i]<<endl;



}

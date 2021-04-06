
#include <iostream>

using namespace std;

int main()
{

    int a[8]={0,1,2,3,-4,-5,5,1};
    int max_global =0 , max_current=0,start,last,s=0;
    for(int i=0;i<8;i++)
    {
        max_current += a[i];
        cout<<a[i]<<endl;
        cout<<"current="<<max_current<<endl;

        if(max_global < max_current){

            max_global = max_current;
            start=s;
            last = i;
            }
        cout<<"global="<<max_global<<endl;
        if(max_current<0){

            max_current=0;
            s=i+1;
        }



    }
    cout<<max_global;
cout<<"start="<<start;
    cout<<"last="<<last;
}

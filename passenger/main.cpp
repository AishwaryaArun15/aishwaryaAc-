#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
using namespace std;

void notfound(string str[][6],int n)
{int x;
    for(int i=0;i<n;i++)
    {
        if(str[i][0]=="delhi")
        {
            for(int y=i+1;y<n;y++)
            {
             for( x=0;str[y][x+2]!="0";x++);
             if(str[y][x]=="chennai");
             return;

            }
        }
    }
    cout<<"NO PATH FOUND\n";

}


void  find1(string str[6])
{
int j=0,d=0;

    if(str[0]=="delhi")
    {
    while(str[j+1]!="0")
    j++;
    if(str[j-1]=="chennai")
    {
        cout<<"\n\nPOSSIBLE STRAIGHT ROUTES\n";


        for(j=0;str[j]!="0";j++)
        {
            cout<<str[j]<<"\t";
        }
        //d=1;
    }


    }
return ;
}

int main()
{int n,d=0;
    cout<<"NUMBER OF LINES\n";
    cin>>n;
    string str[n][6];
    cout<<"ENTER THE LIST\n";
    for(int i=0;i<n;i++)
    {cout<<"ENTER THE "<<i+1<<"LINE\n";
    for(int j=0;j<6;j++)
    {
    cin>>str[i][j];
    }
    }
       for(int i=0;i<n;i++)
    {cout<<"THE "<<i+1<<"LINE\n";
    for(int j=0;str[i][j]!="0";j++)
    {
    cout<<str[i][j]<<"\n";
    }
    }
     for(int i=0;i<n;i++){
     find1(str[i]);
    //notfound(str,n);


}
notfound(str,n);
}

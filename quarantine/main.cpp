#include <iostream>
#include <iomanip>
#include <string.h>
//reference variable,deferencing operator(*) ,manipulators
using namespace std;
int main()
{   cout<<"----------------reference variable----------------\n";
    string str="AISHWARYA";
    string &str1=str;

    cout<<"NORMAL_VAR="<<str;
    cout<<"\nREF_VAR="<<str1;
    str1="ARUN";
     cout<<"\nNORMAL_VAR AFTER CHANGE IN REF_VAR="<<str;
    cout<<"\n\n----------------deferencing operator----------------\n";
    int a=10;
    int *ptr=&a;
    cout<<"A="<<a;
    cout<<"\n*POINTER="<<*ptr;
    cout<<"\n\n----------------Manipulators----------------\n";
    string str0="AISHWARYA";
    string str3=" ARUN";
    string str2=str0+str3;
    float f=3.1467228364;
    cout<<"WITHOUT MANIPULATORS="<<str2;
    cout<<"\nWITH MANIPULATORS_setw(35)="<<setw(35)<<str2<<"\n\n";
    cout<<"WITHOUT MANIPULATORS FLOAT f="<<f;
    cout<<"\nWITH MANIPULATORS_setprecision(9)="<<setprecision(9)<<f<<"\n\n";
    return 0;
}



#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstdlib>

using namespace std;
//static concept,array objs,obj_args, returning objs;

class transport
{   int *n;
    string name;
    static int id;
   static int t;
   int h;//seats;
    //string from;
    int to;
    float p;
    int status;
    public:
    void set()
    {//int h;
        cout<<"\n\n-------------------------WELCOME----------------------------\n\n";
        cout<<"ENTER THE NUMBER OF SEATS\n";
        cin>>h;
        n=new int[h];
        cout<<"ENTER YOUR NAME\n";
        cin>>name;
        cout<<"1.MYSORE\n2.MUMBAI\n3.NEW DELHI\n4.PUNE\nENTER THE DESTINATION\n";
        cin>>to;
        p=dest();
        id=idn();
        t++;
    }
    void get()
    {
        cout<<"\n\n-------------------------TICKET-------------------------------\n\n";
        cout<<"NUMBER OF SEATS: "<<h;
        cout<<"\nNAME: "<<name;
        cout<<"\nTRANSACTION ID: "<<id;
        cout<<"\nTOTAL PRICE: Rs"<<p<<"only.\n\n";
    }
    static int idn()
    {
        return ++id;
    }
    void cancel()
    {
        cout<<"\n\n------------------TRANSACTION CANCELLED-----------------------\n\n";
        t--;
    }
    float dest()
    {
        if(to==1)
        return (h*100.67);
        else if(to==2)
        return (h*256.3);
        else if(to==3)
        return (h*567.89);
        else
        return (h*378.78);

    }

static void tra()
{
    cout<<"\n\n\nNUMBER OF TRANSACTIONS TODAY= "<<t<<"\n";
}
};
 int transport::id=0;
  int transport::t=0;

int main()
{
transport t[3];
int i,j,k;
//for(i=0;i<3;i++)
for(i=0;i<3;i++)
{t[i].set();

    cout<<"CONTINUE TRANSACTION?\n1.YES\n2.NO\n";
    cin>>j;
    if(j==2)
    t[i].cancel();
    else
    t[i].get();
}
transport::tra();//calling sattic funtn;

}

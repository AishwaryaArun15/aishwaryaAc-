#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
//classes,outside functn inline,nesting member functs,private mem_funcs;
class student
{
    string f_name;
    string l_name;
    int r_no;
    int m[3];

    void get_per()
    {   float f;
        cout<<"\nTOTAL PERCENTAGE=";
     f=(m[0]+m[1]+m[2])/150;
     cout<<f<<"\n";
    }

    public:
        void get_total();

    void set()
    {

        cout<<"ENTER FIRST NAME\nLAST NAME\nROLL NUMBER\nMARKS OF THREE SUBJECTS INORDER\n";
        cin>>f_name>>l_name;
        cin>>r_no;
        for(int i=0;i<3;i++)
        cin>>m[i];
    }
    void get()
    {

        cout<<"FIRST NAME :"<<f_name;
        cout<<"\nLAST NAME :"<<l_name;
        cout<<"\nROLL NUMBER :"<<r_no;
        cout<<"\nMARKS:\n";
         for(int i=0;i<3;i++)
        cout<<m[i]<<"\t";
        get_total();
        get_per();
    }
};
inline void student::get_total()
    {
        cout<<"\nTOTAL SCORE="<<(m[0]+m[1]+m[2])<<"\n";
    }
int main()
{

    student s;
    s.set();
    s.get();
    return 0;
}

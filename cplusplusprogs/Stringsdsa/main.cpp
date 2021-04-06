

#include <iostream>
#include <string>

using namespace std;

int main()
{
   string str = "Harshu";
   // reverse
   string p="aa",p1="";
   for(int i=str.length()-1;i>=0;i--)
   {
       cout<<str[i];

   }
   // palindrome
   /*for(int i=p.length()-1;i>=0;i--)
   {
       p1.push_back(p[i]);

   }

   if(p==p1)
    cout<<"\nPalindrome";
   else
    cout<<"\nNope";*/

    for(int i=0;i<p.length()/2 ; i++)
    {

        if(p[i]!=p[p.length()-i-1])
        {
           cout<<"Nope";
           return 0 ;

        }


    }
    cout<<"Palindrome";




}

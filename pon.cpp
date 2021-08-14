#include<iostream>
using namespace std;
int main()
{  int x,i;
   cin>>x;
   for(i=2;i<=x;i++)
   {
       if(x%i==0)
       {
           break;
       }

   }if(i==x)
   {
       cout<<"x is prime"<<x;
   }
   return 0;
}
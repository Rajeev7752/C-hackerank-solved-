#include<iostream>
using namespace std;
int prime(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        for(int j=2;j<i;j++)
        {
        
            if(i%2==0)
            {
                cout<<"not prime"<<i<<endl;
                break;
            }
            else
            {
                cout<<"prime"<<i<<endl;
                break;
            }
        }
        
    }
    return 0;
}
int main()
{
    int a,b;
    cin>>a>>b;
    prime(a,b);
    return 0;
}
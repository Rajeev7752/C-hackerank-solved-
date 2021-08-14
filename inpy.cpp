#include<iostream>
using namespace std;
int main()
{
    int n,sum=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {cout<<endl;
        for(int j=1;j<=i;j++)
        {   
            cout<<sum;
            sum=sum+1; 
        }
    }
    return 0;
}
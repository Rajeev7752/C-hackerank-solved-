#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s,i,j;
    cin>>s;
    int sum1=0;
    for(i=0;i<n;i++)
    {sum1=a[i]; 
        for(j=i+1;j<=n;j++)
        {
            if(sum1==s)
            {
                cout<<i<<j-1;
                return 1;
            }
            else if(sum1>s||j==n)
            {
                break;
            } 
            sum1=sum1+a[j]; 
        }
    }
    return 0;
} 
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
    int mx=-1;
    int curr=0;
    if(n==1)
    {
        cout<<"wrong input";
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>mx&&a[i]>a[i+1])
        {
            curr++;
        } 
        mx=max(mx,a[i]);
    }
    cout<<curr;
    return 0;
} 
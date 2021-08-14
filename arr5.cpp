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
    const int N=1e6+2;
    bool ar[N];
    for(int i=0;i<N;i++)
    {
        cin>>ar[i];
        ar[i]=false;
    } 
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            ar[a[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++)
    {
        if(ar[i]==false)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;

}
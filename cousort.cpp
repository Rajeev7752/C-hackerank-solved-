#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int n;
    // cin>>n;
    int arr[]={1,3,2,3,4,1,6,4,3};
    int maxi=arr[0];
    for(int i=0;i<9;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    int a[10]={0};
    for(int i=0;i<10;i++)
    {
        a[arr[i]]+=1;
    }
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    } 
    return 0;
}
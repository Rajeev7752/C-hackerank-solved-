#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int curr=2;
    int pd=arr[1]-arr[0];
    for(int  i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=2;
    while(j<n)
    {
        if((arr[j+1]-arr[j])==pd)
        {
            curr=curr+1;
        }
        else{
            pd=arr[j+1]-arr[j];
        }
        j=j+1;
    }
    cout<<curr;
    return 0;

}
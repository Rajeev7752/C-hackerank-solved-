#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int k=0;k<n-k;k++)
    {
        for(int i=0;i<n-1;i++)
        {int temp=0;
            for(int j=i;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    
    
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    
    return 0;

}
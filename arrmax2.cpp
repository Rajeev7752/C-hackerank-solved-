#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int c;
    cin>>c;
    int arr[c];
    int maxno;
    int minno;
    for(int i=0;i<c;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<c;j++)
    {
        if(arr[j]>arr[j+1])
        {
            maxno=arr[j];
        }
        else{
            maxno=arr[j+1];
        }
    }
    cout<<maxno;
    return 0;
}
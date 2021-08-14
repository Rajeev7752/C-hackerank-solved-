#include<iostream>
#include<limits.h>
#include<algorithm>
 using namespace std;

 int main()
 {
     int sum=0;
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     { 
         cin>>a[i];
         sum+=a[i];
    } 
    sort(a,a+n);
    cout<<sum-a[0]<<" "<<sum-a[n-1];

 }
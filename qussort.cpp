#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int l,int r){
    int pi=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j<arr[pi]])
        {i++
        swap(i,j);
        }
    }swap(i+1,r)
}

void quicksort(int arr[],int r,int l)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }

}


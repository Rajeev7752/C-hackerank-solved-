#include<bits/stdc++.h>

using namespace std;

int count(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int count1=0;
    for(int i=1;i<=6;i++)
    {
        count1+=count(s+i,e);
    }
    return count1;
}


int main() 
{
    cout<<count(0,3);
    return 0;

} 
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,qu,rem;
    cin>>n;
    qu=0;
    rem=0;
    while(qu>0)
    {
        qu=n/2;
        rem=n%2;
        cout<<rem;
    }
    return 0;
}
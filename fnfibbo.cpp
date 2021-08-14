#include<iostream>
using namespace std;
int fibbo(int x)
{   int i=0;
    int sum=0;
    while(i<=x)
    {
        sum=sum+i;
        ++i;
    }
    return sum;

}
int main()
{
    int a;
    cin>>a;
    cout<<fibbo(a);
    return 0; 
}
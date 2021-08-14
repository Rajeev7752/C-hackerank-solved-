#include<iostream>
using namespace std;
void add(int *a)
{
    a++;

}
int main()
{
    int a;
    cin>>a;
    int aptr=&a;
    add(&a);
    cout<<a;
    return 0; 
    



}
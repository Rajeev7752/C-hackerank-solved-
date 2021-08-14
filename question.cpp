#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *px=&x,**ppx=&px;
    **ppx=x+(**ppx)+(-(*px))+x;
    printf("%d",x);
    return 0;
}

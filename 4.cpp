#include<iostream>

using namespace std;

int main()
{
    int d1,m1,y1;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cin>>d2>>m2>>y2;
    int price=0;
    if(y2=y1)
    {
        price=(d1-d2)*15;
        price+=(m1-m2)*500;
    }
    else if(y2>y1)
    {
        cout<<0;
    }
    else if(y2<y1)
    {
        price=(d1-d2)*15;
        price+=(m1-m2)*500;
        price+=(y1-y2)*10000;
    }

    cout<<price;
    return 0;
    
}

#include<bits/stdc++.h>


bool solvemaze(int** arr,int x,int y,int n)
{
    if(x<n-1&&y<n-1&&arr[x][y]==1)
    {
    return true;
    }
    return false;
}
bool ratinmaze(int** arr,int x,int y,int n,int**sol)
{
    if((x==n-1)&&(y==n-1)){
        sol[x][y]=1;
        return true;
    }
    if(solvemaze(arr,x,y,n))
    {
        sol[x][y]=1;
        {
            if(ratinmaze(arr,x+1,y,n,sol))
            {
                return true;
            }
             if(ratinmaze(arr,x,y+1,n,sol))
            {
                return true;
            }
            sol[x][y]=0;
            return false;
        }
    }
    return false;
}








int main()
{

}

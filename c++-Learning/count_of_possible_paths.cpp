//Once review this logic and do this again

#include<iostream>

using namespace std;

int grid_paths(int n, int m)
{
    if(n==1 || m==1)
    {
        return 1;
    }
    else{
        return grid_paths(n-1,m) + grid_paths(n,m-1)
;    }
}

int main()
{
    int m,n;
    cin>>m>>n;
    int possible=grid_paths(n,m);
    cout<<possible;
}
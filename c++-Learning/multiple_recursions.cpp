//fibonacci seq

#include<bits/stdc++.h>

using namespace std;

//try this in ipad once and clarify
//very interesting problem without doing much

int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n-1);
    
}
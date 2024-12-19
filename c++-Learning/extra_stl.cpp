#include<bits/stdc++.h>

using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2)
{
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    // they are the same
    if(p1.first>p2.first) return true;
    if(p1.first<p2.first) return false;
}

int main()
{
    //sorting in a way we want for example we sort in a where 
    //the values are sorted first then keys are sorted in descending
    pair<int,int>  a[] {{1,2}, {2,1}, {4,1}};

     //comp is another function which we define
}
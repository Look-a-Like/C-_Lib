#include<bits/stdc++.h>

using namespace std;

int main()
{
    list<int> ls; //this is very similar to vector but it more efficient than vector in some cases 
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(); //{2,4}

    //and all other functions are the same
}
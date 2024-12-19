#include<bits/stdc++.h>

using namespace std;

// multi set stores multiple same elements unlike a set which stores only a single element of the same kind

int main()
{
    multiset<int> ms;
    ms.insert(1); //inserts 1 {1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    for(auto it: ms)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    int cnt =ms.count(1); //prints 3
    cout<<cnt<<endl;
    ms.erase(1); //erase all one's
    
    ms.erase(ms.find(1)); // erase only one 1
    for(auto it: ms)
    {
        cout<<it<<" ";
    }
    return 0;
}
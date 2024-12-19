#include<bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> dq {5,6,7};
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}
    for(auto it: dq)
    {
        cout<<it<<" ";
    }

    int d=dq.back();
    int f=dq.front();
    cout<<endl;
    cout<<d<<" "<<f<<endl;
}
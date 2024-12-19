#include<bits/stdc++.h>

using namespace std;

int main()
{
    priority_queue<int> pq ;
    pq.push(5); //pushes 5 {5}
    pq.push(2); //pushes 2 {2,5}
    pq.push(8); //pushes 8 {8,2,5}
    pq.emplace(10); //pushes 10 {10,8,2,5}

    cout<<pq.top()<<endl; //prints 10
    pq.pop(); //{8,5,2}
    cout<<pq.top()<<endl; //prints 8


}
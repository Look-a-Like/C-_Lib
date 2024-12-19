#include<bits/stdc++.h>
 
//creating and using a min heap

/*
the time comlexity of push(),pop() and  top() is O(logn)
*/
using namespace std;

int main()
{
    priority_queue<int, vector<int> , greater<int>> pq; //creating a min heap pq
    pq.push(5); //pushes 5 {5}
    pq.push(2); //pushes 2 {2,5}
    pq.push(8); //pushes 8 {2,5,8}
    pq.emplace(10); //pushes 10 {2,5,8,10}
    cout<<pq.top()<<endl; //prints 2
    //taking user input

    int n;
    cin>>n;
    int d=0;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        pq.push(d);
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}
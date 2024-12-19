#include<bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q ;
    q.push(1); //pushes 1 {1}
    q.push(2); //pushes 2 {1,2}
    q.push(4); //pushes 4 {1,2,4}
    q.back()+=5; //adds 5 to 4 {1,2,9}
    cout<<q.back()<<endl; //prints the back element
    cout<<q.front()<<endl; //prints the frot element
    q.pop(); //pops the front element
    cout<<q.front()<<endl; 
}
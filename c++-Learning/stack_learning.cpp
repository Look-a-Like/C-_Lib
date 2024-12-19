#include<bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    st.push(1); //pushes {1}
    st.push(2); // pushes 2 {2,1}
    st.push(3); // pushes 3 {3,2,1}
    st.push(3);
    st.emplace(5); //pushes 5 {5,3,3,2,1}

    cout<<st.top()<<endl; //returs the top element (5)
    st.pop(); // takes the first element in the stack (5)
    cout<<st.top()<<endl; //prints 3 ater removing 5
    cout<<st.size()<<endl; //prints 4
    stack<int> st1; //creating a stack st1 with the same elements of st
    st1.swap(st);
    cout<<st.empty(); //clears the stack
    cout<<st.top()<<endl;
    cout<<st1.top()<<endl;

    
}
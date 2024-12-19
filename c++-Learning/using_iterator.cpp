#include <bits/stdc++.h>
using namespace std;

/*
This is the iterator study. The iterator is the one which is known as pointer in c and is used to point the location of what we used to point and can be accessed in the other function*/

int main() {
    vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator it = v.begin(); //this points to the beginning of the vector v
    
    it++;
    cout << *(it) << endl;
    
    vector<int>::iterator it1 = v.end(); // this points to the end of the vector v which is a null charecter to access the last element we need to -1 the position of the end pointer
    it1--;
    cout << *(it1) << endl;
    
    vector<int>::reverse_iterator it2 = v.rend();  // Using rend() here
    it2--;  // Moving reverse_iterator back by one position
    cout << *(it2) << endl;
    v.erase(v.begin()); //removes the first element(syntax for it)
    v.erase(v.begin()+2,v.begin()+4); //removes the thrid and the fourth element
    v.insert(v.begin(),250); ///Adds the first element(syntax for it)
    v.insert(v.begin()+1,2,10); //adds two 10's at the position of mentioned(begin+1);

 for(auto it : v) //This is used to used print all the elements at once without using all the other syntax
    {
        cout<<it<<" "; 
    }
    vector<int> c {1,1,1,1};
    v.insert(v.begin(),c.begin(),c.end()); //copies the whole given other vector to the given vector at the beginning

    cout<<endl;
    for(auto it: v)
    {
        cout<<it<<" ";
    }

    v.pop_back(); //removees the last element in the vector given
    v.swap(c); //swaps two vectors c becomes v and v becomes c
    v.clear(); // clears v(which is c now)
    cout<<endl;
    cout<<"c:";
    for(auto it: c)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"v:";
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

//using map (the storing and fetching of a character from the map takes O(logn) time so to give input and fetch it back we will need nlogn)
//implementation:- map<key,value> 
//key and value can not only be integers they can be string,string or integer,integer
//key :- this is the unique address given to access a value stored in it
// value:- This is the value given to a certain specific key to be stored in it
// map stores the elements in a sorted order according to keys not values
int main()
{
    map <int,int> mapp; //implementing a map with key and value integer
    map <pair<int,int>,int> map1; //implementing a map with pair integer(key) and a integer(value) 
    map <int,pair<int,int>> map2; //implementing a map with pair integer(value) and a integer(key)

    mapp[1]=2; //key=1 and value=2 {{1,2}}
    mapp.emplace(3,1); //{{1,2},{3,1}}
    mapp.insert({2,4}); //{{1,2}{2,4},{3,1}}
    for(auto it: mapp) //prints in a sorted order of keys
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mapp[1]<<" ";  //prints 2 as mapp[1] means the value of the key(1)
    cout<<mapp[5]<<" "<<endl; //prints 0 as there is no value for the key(5)

    auto it =mapp.find(3); //searches for key value 3
    cout<< (*it).second<<endl; //printin the value of the found key

    auto it1 =mapp.find(5); //as there is no key(5) it goes top mapp.end() which is (0,0)
    cout<<(*it1).second; //prints 0 as there is no key(5)
}
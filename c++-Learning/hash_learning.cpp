//hashing numbers

/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int hash[100000]={0}; //what we are basically doing is that we are creating an array of size of the maximum element it can be there
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1; //what we are doing here is that we are taking the frequency of each and every element into the hash array
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        cout<<hash[number];
    }
}*/


//hashing strings alphabets

/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    string inp;
    cin>>inp;
    int hash[26]={0};
    for(int i=0;i<inp.size();i++)
    {
        hash[inp[i]-'a']++;
    }
    char c;
    cin>>c;
    cout<<hash[c-'a']<<endl;
    return 0;
}*/


//hashing by maps
//we should and try use the unordered map first before using map because the input and fetch of unordered
// is O(1) and O(n) which is better than O(logn) and O(logn)
//if unordered doesn't work then use map(unordered may not work due to internal collisions)

/*#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int hash[n];
    for(int i=0;i<n;i++)
    {
        cin>>hash[i];
    }
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        mpp[hash[i]]++;
    }
    for(auto it : mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
}*/


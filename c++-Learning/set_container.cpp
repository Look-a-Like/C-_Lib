
#include <bits/stdc++.h>
using namespace std;


// For everything it takes O(logn)

int main()
{
    set<int> st {1, 2};
    st.insert(4); // inserts 4 into the set {1, 2, 4}
    st.emplace(3); // inserts 3 but in a sorted order (1, 2, 3, 4)
    st.insert(3); // this won't get inserted as the element is already in the set
    st.insert(7); //{1,2,3,4,7}

    auto it = st.find(3); // gives the iterator to the element in the set
    if (it != st.end()) {
        cout << *it << " ";
    } else {
        cout << "Element not found ";
    }
    return 0;}
    

    /*
    cout<<endl;
    auto it2 = st.find(6); // as the element is not there, it points to end()
    if (it2 != st.end()) {
        cout << *it2 << " ";
    } else {
        cout << "Element not found ";
    }
    int cnt = st.count(1); //counts the number of one's or simply just checks if the element is there or not in the set
    auto it1= st.find(2);
    auto it2= st.find(4);
    st.erase(it1,it2); //erases all the elements with the included elements in the set present


    return 0;
}
*/

/*Iterator lower_bound (Iterator first, Iterator last, const val)  
lower_bound returns an iterator pointing to the first element in the range [first,last)
which has a value not less than ‘val’  and if the value is not present in the vector 
then it returns the end iterator.

Iterator upper_bound (Iterator first, Iterator last, const val)
upper_bound returns an iterator pointing to the first element in the range [first,last) 
which has a value greater than ‘val’  and if the value is not present in the vector 
then it returns the end iterator.*/

// lower_bound and upper_bound in vector
/*
#include <algorithm> // for lower_bound, upper_bound and sort
#include <iostream>
#include <vector> // for vector

using namespace std;

int main()
{
	int gfg[] = { 5, 5, 5, 6, 6, 6, 7, 7 };
    int s = sizeof(gfg)/sizeof(gfg[0]);

	vector<int> v(gfg, gfg + 8); // 5 5 5 6 6 6 7 7

	vector<int>::iterator lower, upper;
	lower = lower_bound(v.begin(), v.end(), 6);
	upper = upper_bound(v.begin(), v.end(), 6);

	cout << "lower_bound for 6 at index "
		<< (lower - v.begin()) << '\n';
	cout << "upper_bound for 6 at index "
		<< (upper - v.begin()) << '\n';

	return 0;
}
*/



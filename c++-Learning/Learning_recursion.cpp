//This is the code to check if the given array is sorted or not
/*
#include<iostream>

using namespace std;

bool sorted(int *arr,int n)
{
    if(n==1)
    {
        return true;
    }

    bool restArray = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

int main()
{
    int arr[]={1,2,3,5,4};
    cout<<sorted(arr,5);

}*/

//printing numbers in increasing and decreasing order
/*#include<iostream>

using namespace std;

void increasing(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
     return ;   
    }
   increasing(n-1);
   cout<<n<<endl;
}
void decreasing(int n)
{
    if(n==0)
    {
     return ;   
    }
    cout<<n<<endl;
   decreasing(n-1);
}

int main()
{
    int n;
    cin>>n;
    decreasing(n);
    cout<<endl;
    increasing(n);
}*/

// Finding the first and the last occurence of a given number in the array

#include<iostream>
using namespace std;

int findingmin_occurences(int array[], int i, int n, int f)
{
    if (i == n)
    {
        return -1;
    }

    int value = findingmin_occurences(array, i + 1, n, f);
    if (value != -1)
    {
        return value;
    }
    if (array[i] == f)
    {
        return i;
    }
    return -1;
}

int findingmax_occurences(int array[], int i, int n, int f)
{
    if (i == n)
    {
        return -1;
    }
    if (array[i] == f)
    {
        return i;
    }
    return findingmax_occurences(array, i + 1, n, f);
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int inp;
    cout << "Give the number to be found:";
    cin >> inp;
    int min = findingmin_occurences(array, 0, n, inp);
    int max = findingmax_occurences(array, 0, n, inp);
    cout << max << " " << min << endl;
}


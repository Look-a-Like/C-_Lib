
//printing till 9 using recursion


/*#include<bits/stdc++.h>

using namespace std;


void f(int d)
{
    if(d==9)
    {
        return ;
    }
    cout<<d++<<" ";
    f(d);
}

int main()
{
    f(1);
} */

//printing the name n times


/* #include<bits/stdc++.h>

using namespace std;

void f(int i,int n)
{
    if(i==n)
    {
        return;
    }
    cout<<"Dheeran "<<endl;
    f(i+1,n);
}

int main()
{
    int n;
    cin>>n;
    f(0,n);
} */

//prinitng in decreasing order

/*#include<bits/stdc++.h>

using namespace std;

void f(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<" ";
    f(n-1);
    }

int main()
{
    int n;
    cin>>n;
    f(n);
}*/

//prining the decreasing order using backtrack


/*#include<bits/stdc++.h>

using namespace std;

void f(int i,int n)
{
    if(n==i)
    {
        cout<<n<<" ";
        return ;
    }
    f(i+1,n);
    cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    f(1,n);
} */

//summing numbers using recursion

/*
#include<bits/stdc++.h>

using namespace std;

int sum(int i,int n)
{
    if(i==n)
    {
        return n;
    }
    int d=sum(i+1,n);
    return i+d;
}

//more simpler code

int esum(int n)  // less space complexity
{
    if(n==0)
    {
        return 0;
    }
    return n + esum(n-1);
}

//Striver's code

void ssum(int n,int s) //s=sum(0 initially)
{
    if(i<1)
    {
        cout<<s<<endl;
        return;
    }
    ssum(i-1,s+i)
}


int main()
{
    int n;
    cin>>n;
    int d=sum(1,n);
    cout<<d;
}
*/

//factorial

/*
#include<bits/stdc++.h>

using namespace std;

int f(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*f(n-1);
}

int main()
{
    int n;
    cin>>n;
    int d=f(n);
    cout<<d<<endl;   
}
*/

//reversing an array

/*#include<bits/stdc++.h>

using namespace std;

void reverse_array(int *arr,int n,int i){
    if(n<=i)
    {
        return;
    }
    swap((arr[i]),(arr[n-1]));
    reverse_array(arr,n-1,i+1);

}

int main()
{
    int n;
    cin>>n;
    int *arr =(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr,n,0);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}*/

//checking palindrome using recursion it even checks for integer palindromes

/*#include<bits/stdc++.h>

using namespace std;

bool palindrome(string s,int n, int i)
{

    if(i>n)
    {
        return true;
    }
    if(s[i]!=s[n-1])
    {
        return false;
    }
    else{
       return palindrome(s,n-1,i+1);
    }
}

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    if(palindrome(s,n,0))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}*/

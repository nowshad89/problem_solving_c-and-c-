// Problem Statement

// You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Constraints

// 1 <= N <= 100000
// 0 <= A[i] <= 10^9; Where 0 <= i < N
// Output Format

// Output "YES" or "NO" without the quotation marks according to the problem statement.


// //////////////////duplicate checking solution//////////////////


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a, a+n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int l = i+1;
        int r = n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(a[mid]==a[i])
            {
                flag = true;
                break;
            }
            if(a[i]>a[mid])
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }   
    }
    if(flag == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;  
    return 0;
}
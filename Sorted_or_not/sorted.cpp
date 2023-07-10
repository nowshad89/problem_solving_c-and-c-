// Problem Statement

// You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".

// Input Format

// First line will contain T, the number of test cases.
// The first line of each test case will contain N.
// The second line of each test case will contain the array A.
// Constraints

// 1 <= T <= 1000
// 1 <= N <= 1000
// 0 <= A[i] <= 1000; Where 0 <= i < N
// Output Format

// Output "YES" or "NO" without the quotation marks according to the problem statement.


// ////////////sorted or not solution//////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool flag = true;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
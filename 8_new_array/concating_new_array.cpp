// Given two arrays A
//  and B
//  of size N
// . Print a new array C
//  that holds the concatenation of array B
//  followed by array A
// .

// Note: Solve this problem using function.

// Input
// First line will contain a number N
//  (1≤N≤103)
// .

// Second line will contain N
//  numbers (1≤Ai≤105)
//  array A
//  elements.

// Third line will contain N
//  numbers (1≤Bi≤105)
//  array B
//  elements.



///////////////////////////////////////// concat two array///////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>B[i];
    }
    vector<int> C;
    C.insert(C.end(), B.begin(), B.end());
    C.insert(C.end(), A.begin(), A.end());
    for (int i = 0; i < C.size(); i++)
    {
        cout<<C[i]<<" ";
    }
    return 0;
}
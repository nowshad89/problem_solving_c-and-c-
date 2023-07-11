// Given 2 numbers N
//  and Q
// , an array A
//  of N
//  number and Q
//  number of pairs L
// , R
// . For each query Q
//  print a single line that contains the summation of all numbers from index L
//  to index R
// .

// Input
// First line contains two numbers N
// , Q
//  (1≤N,Q≤105)
//  where N
//  is number of elements in A
//  and Q
//  is number of query pairs.

// Second line contains N
//  numbers(1≤Ai≤109)
// .

// Next Q
//  lines contains L,R
//  (1≤L≤R≤N)
// .

// Output
// For each query Q
//  print a single line that contains the summation of all numbers from index L
//  to index R
// // 


// ///////////////////////////solution of range sum query/prefix sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin>>n>>q;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i]+pre[i-1];
    }
    while(q--) //0(q)
    {
        long long int c, d;
        cin>>c>>d;
        c--;
        d--;
        long long int sum = 0;
        if(c==0) sum = pre[d];
        else sum = pre[d]-pre[c-1];
        cout<<sum<<endl;
    }
    return 0;
}
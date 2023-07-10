// Problem Statement

// You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

// Input Format

// Input will contain only N.
// Constraints

// 1 <= N <= 20 and N is odd.
// Output Format

// Output the pattern.

// ////////////////////////////////solving x pattern printing//////////////

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(i == j)
            {
                
                if(i == (n/2)+1)
                {
                    cout<<"x";
                }
                else
                {
                    cout<<"\\";
                }
            }
            else if(j == n+1-i)
            {
                cout<<"/";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;   
    }
    return 0;
}


// #include <iostream>

// using namespace std;

// int main() {
//     int N = 5;  // Number of rows in the pattern

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             if (i == j || i + j == N - 1) {
//                 cout << "\\";
//             } else if (i < j && i + j < N - 1) {
//                 cout << " ";
//             } else if (i > j && i + j > N - 1) {
//                 cout << " ";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }



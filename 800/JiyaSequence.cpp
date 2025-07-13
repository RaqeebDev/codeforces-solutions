#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // cin.tie(nullptr);
    // ios_base::sync_with_stdio(false);

    

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = 1;

        int array[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
            k *= array[i];
        }
        if (k % 10 == 2 | k % 10 == 3 | k % 10 == 5)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
}

// Github : https://github.com/RaqeebDev
// Problem Link : https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

// pseudo (not organised)
/*
 1. Input t test cases
 2. For each test case:
   - Input n and sequence of n numbers
   - Multiply all numbers
   - Check if last digit of product is 2, 3, or 5
   - Print "YES" or "NO"
*/

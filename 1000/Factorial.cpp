//Question : Print Factorials for given test cases in o(n) Time Complexity





#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;

    fact[1] = fact[0] = 1;
    for (int i = 2; i < N; ++i)
    {
        fact[i] = fact[i - 1] * i;
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }
}

// Github : https://github.com/RaqeebDev
// Problem Link :

// pseudo (not organised)
/*

*/

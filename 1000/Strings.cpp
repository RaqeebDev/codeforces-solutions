
#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 5;
int freq[N];

int main()
 {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;

    cout << a.length() << " " << b.length()
         << endl
         << (a + b) << endl;

    swap(a[0], b[0]);

    cout << a << " " << b;
}

// Github : https://github.com/RaqeebDev
// Problem Link : https://www.hackerrank.com/challenges/c-tutorial-strings/problem

// pseudo (not organised)
/*

*/

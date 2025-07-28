#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string orignal = s;
    reverse(s.begin(), s.end());
    if (orignal == s)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

// Github : https://github.com/RaqeebDev
// Problem Link :https://codeforces.com/contest/1102/problem/A

/* Tips and Learnings (not organised)


*/

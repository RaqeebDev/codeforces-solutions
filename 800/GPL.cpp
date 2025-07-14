#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s;
        cin >> s;
        long long result = 0;
        long long power = 1;
        for (int i = (n - 1); i >= 0; --i)
        {
            int binary_digit = s[i] - '0';
            result = result + (binary_digit * power);
            power *= 2;
        }
        cout << result << endl;
    }
}

// Github : https://github.com/RaqeebDev
// Problem Link :https://www.hackerearth.com/problem/algorithm/gpl/
// pseudo (not organised)
/*

> Input t (number of test cases)
> Repeat for t test cases:
    > Input n (length of binary string)
    > Input binary string s
    > Initialize result = 0, power = 1
    > Loop from right to left over the string:
    > Convert s[i] to int (0 or 1)
    > result += binary_digit × power
    > power *= 2
    > Output result (decimal value)


*/

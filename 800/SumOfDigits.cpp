#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int count = 0;
        while (n)
        {
            count += n % 10;
            n /= 10;
        }
        cout << count << endl;
    }
}

// Github : https://github.com/RaqeebDev
// Problem Link :

/* Tips and Learnings (not organised)


*/

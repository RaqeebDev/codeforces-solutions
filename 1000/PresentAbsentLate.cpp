#include <bits/stdc++.h>
using namespace std;

bool award(string s)
{
    int absent = 0, late = 0;
    for (char c : s)
    {
        if (c == 'A')
        {
            absent++;
            late = 0; // reset here

            if (absent >= 2)
                return false;
        }
        else if (c == 'L')
        {
            late++;
            if (late >= 3)
                return false;
        }
        else
        {
            late = 0;
        }
    }
    return true;
}

int main()
{

    string s;
    cin >> s;
    cout << award(s);
}

// Github : https://github.com/RaqeebDev
// Problem Link :

/* Tips and Learnings (not organised)


*/

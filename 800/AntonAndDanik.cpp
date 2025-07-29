#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int A = 0;
    int D = 0;

    for (char x : s)
    {
        if (x == 'A')
        {
            A++;
        }
        else if(x == 'D')
        {
            D++;
        }
        
    }

    if (A > D)
    {
        cout << "Anton";
    }
    else if(D > A )
    {
        cout << "Danik";
    }
    else{
        cout<<"Friendship";
    }
}

// Github : https://github.com/RaqeebDev
// Problem Link :

/* Tips and Learnings (not organised)


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  n;
    cin >> n;
    int a[n];
    long long count = 0;
    cin>>a[0] ;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1])
        {
            count += a[i-1] - a[i] ;
            a[i] = a[i-1] ; 
        }
    }
    cout<<count;
}

// Github : https://github.com/RaqeebDev
// Problem Link :

/* Tips and Learnings (not organised)


*/

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
        int rev = 0;
       while (n){
        rev = rev*10 +(n%10);
        n /=10;
       }
       cout << rev <<'\n';
}}

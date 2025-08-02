#include <bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        map<char, int> mp;
        bool found = false;

        for (char c : s) {
            mp[c]++;
            if (mp[c] == 2) {
                cout << "Yes\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "No\n";
        }
    }
    return 0;
}

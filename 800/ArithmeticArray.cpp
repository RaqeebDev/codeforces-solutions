#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false)
#define endl '\n'

int main()
{
    fast;
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum == n) {
            cout << 0 << endl;
        }
        else if (sum < n) {
            cout << 1 << endl;
        }
        else {
            cout << sum - n << endl;
        }
    }

    return 0;
}

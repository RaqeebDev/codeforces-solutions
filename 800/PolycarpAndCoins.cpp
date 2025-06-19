#include <iostream>
using namespace std;



void solve() {
    long long n;
    cin >> n;
    long long a = n / 3, b = n / 3;
    if (n % 3 == 1) a++;
    else if (n % 3 == 2) b++;
    cout << a << " " << b << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

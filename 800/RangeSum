#include <iostream>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0);

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        if (l > r) swap(l, r); 

        long long count = r - l + 1;
        long long sum;

        
        if (count % 2 == 0) {
            sum = (count / 2) * (l + r);
        } else {
            sum = count * ((l + r) / 2);
        }

        cout << sum << '\n';
    }
}

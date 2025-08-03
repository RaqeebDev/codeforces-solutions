#include <bits/stdc++.h>
using namespace std;

vector<long long> pfx(vector<long long> &arr )
{
int n = arr.size() - 1;
    vector<long long> p(n+1 , 0);
    p[1] = arr[1];

    for (long long i = 1; i <= n; i++)
        p[i] = p[i - 1] + arr[i];

    return p;
}

int main()
{

    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<long long> arr(n+1 , 0);
    for (long long i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    vector <long long > prefix = pfx(arr);
    while (q--)
    {
        long long a, b;
        cin >> a >> b;

        cout << prefix[b] - prefix[a-1] << '\n';
    }
    return 0;
}

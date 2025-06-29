#include <bits/stdc++.h>
using namespace std;
int main()
{
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    vector<int> a(4);
    for (int i = 0; i < 4; i++)
    {
      cin >> a[i];
    }
    int k1 = max(a[0], a[1]);
    int k2 = max(a[2], a[3]);

    sort(a.begin(), a.end());
if ((k1 == a[2] && k2 == a[3]) || (k1 == a[3] && k2 == a[2]))
    {
      cout << "YES" <<endl;
    }
    else {
      cout <<"NO" <<endl;
    }
  }
}

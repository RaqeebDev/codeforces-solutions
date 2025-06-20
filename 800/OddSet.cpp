#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);

int main()
{
  // fast;
  // cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int x = 0;
    int even = 0, odd = 0;
    for (int i = 0; i < (2 * n); i++)
    {
      cin >> x;
      if (x % 2 == 0)
        even++;
      else
      {
        odd++;
      }
    }
    if (even == odd)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}

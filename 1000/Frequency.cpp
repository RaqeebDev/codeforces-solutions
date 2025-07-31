#include <bits/stdc++.h>
using namespace std;

const int x = 1e7 + 10;
int freq[x];

int main()
{
   int n;
   cin >> n;
   int a[n];

   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      freq[a[i]]++;
   }
   int t;
   cin >> t;
   while (t--)
   {
      int p;
      cin >> p;
      cout << freq[p] << "\n";
   }
}

// Github : https://github.com/RaqeebDev
// Problem Link :

/* Tips and Learnings (not organised)


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> arr(3);
  for (int i = 0; i < 3; i++)
  {
    cin >> arr[i];
  }
  vector<int> sorted = arr ;

sort(sorted.begin() , sorted.end()) ;
for (int x :sorted) cout <<x  <<endl;
cout <<endl ;
for (int y : arr) cout <<y  <<endl  ;


}

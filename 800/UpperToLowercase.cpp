#include <bits/stdc++.h>
using namespace std;
int main()
{
 char a ; cin >> a ;
 if (a >='A' && a <='Z' ) {
  a+=32;
 }
  else  {
   a-=32 ;
 }
 cout << a;
}

#include <iostream>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(0);

int main () {
long long a , b , c ,d ; cin >>a  >>b >>c >>d;



a %=100;
b %=100;
c %=100;
d %=100;


long long k = (a*b*c*d)%100 ;

if (k<10) cout <<"0" <<k ;
else cout <<k ;
 

}
//yo text me on ig (raqeeb.cx) if u see this *_*

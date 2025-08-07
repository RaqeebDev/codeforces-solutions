#include <bits/stdc++.h>
using namespace std;

/*



*/

int main()
{
    int n;
    cin >> n;

    int bill = 0;
    while (n)
    {
        if (n % 100 == 0)
        {
            n -= 100;
            bill++;
        }
        else if (n % 20 == 0)
        {
            n -= 20;
            bill++;
        }
        else if (n % 10 == 0)
        {
            n -= 10;
            bill++;
        }
        else if (n % 5 == 0)
        {
            n -= 5;
            bill++;
        }
        else
        {
            n--;
            bill++;
        }
    }

    cout << bill;
    return 0;
}

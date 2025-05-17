#include <iostream>
using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(0);

int main()
{

    int pos = 0;
    int neg = 0;
    int even = 0;
    int odd = 0;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (x > 0)
        {
            pos++;
        }
        else if (x < 0)
        {
            neg++;
        }
    }
    cout << "Even: " << even << '\n'
         << "Odd: " << odd << '\n'
         << "Positive: " << pos << '\n'
         << "Negative: " << neg << '\n';
}


/*
 * Number Properties Counter
 *
 * This program reads a list of integers and counts how many of them are:
 * even, odd, positive, and negative.
 *
 * It uses a simple loop to read `n` numbers from the user and increments
 * counters based on each number's properties.
 *
 * Zero is considered even but neither positive nor negative.
 *
 * Example:
 *     Input:
 *        5
 *        -3 0 2 -1 4
 *     Output:
 *         Even: 2
 *         Odd: 3
 *         Positive: 2
 *         Negative: 2
 *
 * Author: [Abdul Raqeeb]
 * Github: [RaqeebDev]
 */

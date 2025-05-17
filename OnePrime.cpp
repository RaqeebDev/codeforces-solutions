#include <bits/stdc++.h>
using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(0);



int main()
{
    bool isPrime = true;
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << "NO";
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
        cout << "YES";
    else
    {
        cout << "NO";
    }
    return 0;
}
/*
 * Prime Number Checker
 *
 * This program reads an integer input from the user and checks whether
 * it is a prime number or not using trial division up to the square root of the number.
 *
 * A prime number is defined as a number greater than 1 that has no positive divisors 
 * other than 1 and itself.
 * 
 * The program handles edge cases where the number is less than 2 by immediately
 * printing "NO". For all other numbers, it checks for any divisor from 2 to sqrt(n).
 *
 * Example:
 *     Input: 2
 *     Output: YES
 *
 *     Input: 4
 *     Output: NO
 *
 * Author: [Abdul Raqeeb]
 * Github: [RaqeebDev]
 */

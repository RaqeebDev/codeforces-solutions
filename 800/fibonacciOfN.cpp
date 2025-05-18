#include <iostream>
#include <string>
using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(0);

int main()
{
    long long n; cin >> n;
    
    long long f3;
    long long f1 = 0;
    long long f2 = 1;

    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 1;
    }
    else
    {
        while (n > 2)
        {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            n--;
        }
        cout << f3;
    }
}

/*
 * N-th Fibonacci Number Finder
 *
 * This program calculates the N-th term in the Fibonacci sequence using
 * an iterative approach.
 *
 * The Fibonacci sequence starts with:
 *     F(1) = 0, F(2) = 1, F(3) = 1, F(4) = 2, F(5) = 3, ...
 * Each term is the sum of the two preceding ones.
 *
 * Logic:
 * - For n = 1, print 0
 * - For n = 2, print 1
 * - For n > 2, iterate and calculate the Fibonacci value up to the n-th term.
 *
 * Example:
 *     Input: 6
 *     Output: 5
 *
 *     Input: 1
 *     Output: 0
 *
 * Author: Abdul Raqeeb
 * Github: RaqeebDev
 */

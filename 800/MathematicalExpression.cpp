#include <iostream>
using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(0);

int main()
{
    int a, b, c;
    char c1, c2;
    cin >> a >> c1 >> b >> c2 >> c;

    if (c1 == '+')
    {
        if (a + b == c)
            cout << "Yes";
        else
            cout << a + b;
    }
    if (c1 == '-')
    {
        if (a - b == c)
            cout << "Yes";
        else
            cout << a - b;
    }
    if (c1 == '*')
    {
        if (a * b == c)
            cout << "Yes";
        else
            cout << a * b;
    }
}

/*
 * Simple Arithmetic Expression Validator
 *
 * This program reads a simple arithmetic expression in the format:
 *     <int> <operator> <int> = <int>
 * and checks whether the result of the operation is correct.
 *
 * Supported operators: +, -, *
 * 
 * Example:
 *     Input: 3 + 4 = 7
 *     Output: Yes
 *
 *     Input: 5 * 2 = 11
 *     Output: 10
 *     (because 5 * 2 = 10, not 11)
 *
 * Author: [Abdul Raqeeb]
 * Github: [RaqeebDev]
 */

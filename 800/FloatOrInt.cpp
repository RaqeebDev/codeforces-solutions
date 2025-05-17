#include <bits/stdc++.h>
using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(0);

int main()
{
 long double a ; cin >>a ;
    if (ceil(a) == floor(a)) cout << "int " <<a ; 
    else cout <<"float " <<floor(a)  <<" " <<a-floor(a) ;

}

/*
 * Integer or Float Classifier
 *
 * This program reads a single floating-point number and determines whether it is an integer
 * or a floating-point number with a fractional part.
 *
 * If the number has no fractional part, it prints:
 *     int <value>
 * If the number has a fractional part, it prints:
 *     float <integer part> <fractional part>
 *
 * Example:
 *     Input: 5.0
 *     Output: int 5
 *
 *     Input: 3.14
 *     Output: float 3 0.14
 *
 * It uses the ceil() and floor() functions from the cmath library to compare the number’s
 * integer and rounded forms for classification.
 *
 * Author: Abdul Raqeeb
 * Github: RaqeebDev
 */

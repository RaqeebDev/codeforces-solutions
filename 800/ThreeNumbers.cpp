#include <iostream>
using namespace std;
// #define fastio ios::sync_with_stdio(false); cin.tie(0);

int main()
{
    int count = 0; 
    int k, s; 
    cin >> k >> s; 

    for (int y = 0; y <= k; y++) {
        for (int z = 0; z <= k; z++) {
            int x = s - y - z;
            if (x >= 0 && x <= k) {
                count++;
            }
        }
    }
    cout << count;
}


/*
 * Triple Sum Counter
 *
 * This program calculates how many integer triplets (x, y, z) satisfy:
 *     0 ≤ x, y, z ≤ k
 *     and x + y + z = s
 *
 * Instead of iterating all three values, it optimizes by computing x
 * from s - y - z, then checks if x lies within the valid range.
 *
 * This reduces the complexity from O(k^3) to O(k^2).
 *
 * Example:
 *     Input: 3 6
 *     Output: 7
 *     (Possible triplets: (0,3,3), (1,2,3), (2,1,3), (3,0,3), (2,2,2), (3,2,1), (3,3,0))
 *
 * Author: [Abdul Raqeeb]
 * Github: [RaqeebDev]
 */

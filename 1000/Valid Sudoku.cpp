#include <bits/stdc++.h>
using namespace std;

bool isValidSudoku(vector<vector<char>>& board) {
    vector<set<char>> rows(9), cols(9), boxes(9); // 3 sets for rules

    for (int i = 0; i < 9; ++i) {        // row
        for (int j = 0; j < 9; ++j) {    // col
            char curr = board[i][j];

            if (curr == '.') continue; // skip empty

            // box index = 0 to 8
            int boxIndex = (i / 3) * 3 + (j / 3);

            // if already in any set, invalid
            if (rows[i].count(curr) || cols[j].count(curr) || boxes[boxIndex].count(curr)) {
                return false;
            }

            // mark the digit as seen
            rows[i].insert(curr);
            cols[j].insert(curr);
            boxes[boxIndex].insert(curr);
        }
    }

    return true; // all good
}

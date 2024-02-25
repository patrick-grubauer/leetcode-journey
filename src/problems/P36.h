//
// Created by gruba on 2/25/2024.
//

#ifndef P36_VALIDSUDOKU_H
#define P36_VALIDSUDOKU_H
#include <vector>

namespace P36 {
    class Solution {
    public:
        static bool isValidSudoku(std::vector<std::vector<char>>& board) {
            const int number = 9;
            bool rows[number][number] = {false};
            bool columns[number][number] = {false};
            bool grid[number][number] = {false};
            for (int x = 0; x < number; ++x) {
                for (int y = 0; y < number; ++y) {
                    if (board[x][y] == '.') {
                        continue;
                    }
                    int index = board[x][y] - '0' - 1;
                    int subgridrowindex = x / 3 + y / 3 * 3;
                    if (rows[x][index] || columns[y][index] || grid[subgridrowindex][index]) { return false; }
                    rows[x][index] = true;
                    columns[y][index] = true;
                    grid[subgridrowindex][index] = true;
                }
            }
            return true;
        }
    };
}

#endif

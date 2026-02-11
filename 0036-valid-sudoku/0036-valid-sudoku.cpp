class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // rows[i][num] = true if num already exists in row i
        bool rows[9][9] = {false};
        // cols[j][num] = true if num already exists in column j
        bool cols[9][9] = {false};
        // boxes[k][num] = true if num already exists in box k
        bool boxes[9][9] = {false};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue; // skip empty cells

                int num = board[i][j] - '1'; // map '1'..'9' → 0..8
                int boxIndex = (i / 3) * 3 + (j / 3);

                if (rows[i][num] || cols[j][num] || boxes[boxIndex][num]) {
                    return false; // duplicate found
                }

                rows[i][num] = cols[j][num] = boxes[boxIndex][num] = true;
            }
        }
        return true;
    }
};

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<vector<int>> mark = matrix;

        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {

                if (matrix[r][c] == 0) {

                    // make entire row zero
                    for (int co = 0; co < col; co++) {
                        mark[r][co] = 0;
                    }

                    // make entire column zero
                    for (int ro = 0; ro < row; ro++) {
                        mark[ro][c] = 0;
                    }
                }
            }
        }

        // copy mark back to matrix
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < col; c++) {
                matrix[r][c] = mark[r][c];
            }
        }
    }

};

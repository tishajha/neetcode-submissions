class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> row , col, square ;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                char val= board[i][j];
                if(val=='.'){
                    continue;
                }
                int  box= (i/3)*3+j/3;
                if(row[i].count(val)||col[j].count(val)||square[box].count(val)){
                    return false;
                }
                row[i].insert(val);
                col[j].insert(val);
                square[box].insert(val);

            }
        }
        

        return true;

    }
};

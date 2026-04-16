class Solution {
    public boolean isValidSudoku(char[][] board) {
        boolean ans =true ;
        HashSet <Character>[] Row = new HashSet[9];
        HashSet  <Character>[] Col = new HashSet[9];
        HashSet  <Character>[] square = new HashSet[9];

        for (int i=0;i<9;i++){
            Row[i]=new HashSet<>();
            Col[i]=new HashSet<>();
            square[i]=new HashSet<>();
        }
    
        for (int i=0; i<9;i++){
            for (int j=0; j<9;j++){
                char val=board[i][j];
                if(val!= '.' ){
                    if(Row[i].contains(val))
                        return false;
                    Row[i].add(val);
                    if (Col[j].contains(val))
                        return false;
                    Col[j].add(val);

                    int boxno= (i/3)*3+j/3;

                    if(square[boxno].contains(val))
                        return false;
                    square[boxno].add(val);
                }
                
            }
        }
        return true;
    }
}

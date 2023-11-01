class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int loc = (i / 3) * 3 + (j/ 3);
                if(board[i][j]!='.'){
                    if(row[i].count(board[i][j])==0){
                        row[i].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }
                    if(box[loc].count(board[i][j])==0){
                        box[loc].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }
                    if(col[j].count(board[i][j])==0){
                        col[j].insert(board[i][j]);
                    }
                    else{
                        return false;
                    }
                }
                
            }
        }
        return true;
    }
};
class Solution {
public:
    bool helper(vector<vector<char>>& board, string word,int i,int j,int k,vector<vector<int>>& visited,int n,int m){
        int x[]={-1,0,0,1};
        int y[]={0,1,-1,0};
        if(k>=word.size()){
            return true;
        }
        for(int a=0;a<4;a++){
            int index1=i+x[a];
            int index2=j+y[a];
            if(index1>=0 && index1<n && index2>=0 && index2<m && board[index1][index2]==word[k] && visited[index1][index2]==0){
                visited[index1][index2]=1;
                if(!helper(board,word,index1,index2,k+1,visited,n,m)){
                    visited[index1][index2]=0;
                }
                else{
                    return true;
                }
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    vector<vector<int>> visited(n,vector<int>(m,0));
                    visited[i][j]=1;
                    if(helper(board,word,i,j,1,visited,n,m)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
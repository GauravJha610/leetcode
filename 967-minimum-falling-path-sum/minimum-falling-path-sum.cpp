// GAURAV JHA
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==1){
            return matrix[0][0];
        }
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                if(i==n-1){
                    dp[i][j]=matrix[i][j];
                }
                else{
                    if(j==0){
                        dp[i][j]=matrix[i][j]+ min(dp[i+1][j],dp[i+1][j+1]);
                    }
                    else if(j==n-1){
                        dp[i][j]=matrix[i][j]+ min(dp[i+1][j],dp[i+1][j-1]);
                    }
                    else{
                        dp[i][j]=matrix[i][j]+ min(min(dp[i+1][j-1],dp[i+1][j]),dp[i+1][j+1]);
                    }
                }
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans=min(ans,dp[0][i]);
        }
        return ans;

    }
};
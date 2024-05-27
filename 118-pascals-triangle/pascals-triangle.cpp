class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        int count=1;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<count;j++){
                if(j==0 || j==count-1){
                    ans[i].push_back(1);
                    continue;
                }
                ans[i].push_back( ans[i-1][j-1]+ans[i-1][j] );
            }
            count++;
        }
        return ans;

    }
};
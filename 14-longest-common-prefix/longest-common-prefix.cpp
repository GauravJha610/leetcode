class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        string ans;
        if(n==1){
            return strs[0];
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n-1;j++){
                if(strs[j][i]==strs[j+1][i] && strs[j].size()>i && strs[j+1].size()>i){
                    if(j==n-2){
                        ans+=strs[j][i];
                    }
                    continue;
                }
                else{
                    return ans;
                }
            }
        }
        return ans;
    }
};
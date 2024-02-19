class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        
        for(int i=0;i<n+1;i++){
            int t=i;
            while(t){
                ans[i]+=t&1;
                t>>=1;
            }
        }
        return ans;
    }
};
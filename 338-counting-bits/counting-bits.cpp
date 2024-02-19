class Solution {
public:
    vector<int> countBits(int n) {
        if(n==0){
            return {0};
        }
        if(n==1){
            return {0,1};
        }
        if(n==2){
            return {0,1,1};
        }
        vector<int> ans(n+1);
        ans[0]=0;
        ans[1]=1;
        ans[2]=1;
        for(int i=3;i<=n;i++){
            int rem=i%2;
            int quo=i/2;
            ans[i]=ans[quo]+rem;
        }
        return ans;
        
    }
};
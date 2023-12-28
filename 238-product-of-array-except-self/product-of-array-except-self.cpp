class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        ans[0]=nums[0];

        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i];
        }

        int p=1;

        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                ans[i]=ans[i-1];
            }
            else if(i==0){
                ans[i]=p;
            }
            else{
                ans[i]=ans[i-1]*p;
            }
            p=p*nums[i];
        }

        return ans;
    }
};
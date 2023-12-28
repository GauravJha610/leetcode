class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n),right(n),ans(n);

        left[0]=nums[0];
        right[n-1]=nums[n-1];

        for(int i=1,j=n-2;i<n;i++,j--){
            left[i]=left[i-1]*nums[i];
            right[j]=right[j+1]*nums[j];
        }

        ans[0]=right[1];
        ans[n-1]=left[n-2];

        for(int k=1;k<n-1;k++){
            ans[k]=left[k-1]*right[k+1];
        }

        return ans;
    }
};
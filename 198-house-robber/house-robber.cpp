class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
       
        if(n==1) {return nums[0];}
        if(n==2){
            return max(nums[0],nums[1]);
        }
        if(n==3){
            return max(nums[0]+nums[2],nums[1]);
        }
        vector<int> v(n);
        v[n-1]=nums[n-1];
        v[n-2]=nums[n-2];
        v[n-3]=nums[n-3]+nums[n-1];
        for(int i=n-4;i>=0;i--){
            v[i]=nums[i]+max(v[i+2],v[i+3]);
        }
        return max(v[0],v[1]);
    }
};
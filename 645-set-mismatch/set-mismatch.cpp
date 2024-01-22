class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mis=-1,dup=-1;
        for(int i=0;i<n-1;i++){
            int diff=nums[i+1]-nums[i];
            if(diff==0 && dup==-1){
                dup=nums[i];
            }
            else if(diff==2 && mis==-1){
                mis=nums[i]+1;
            }
        }
        if(nums[n-1]!=n && mis==-1){
            mis=n;
        }
        if(mis==-1){
            mis=1;
        }
        return {dup,mis};
    }
};
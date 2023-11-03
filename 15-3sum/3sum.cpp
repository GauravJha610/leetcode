class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        for(int i=0;i<=n-3;i++){
            int lo=i+1;
            int hi=n-1;
            while(lo<hi){
                long sum=nums[i]+nums[lo]+nums[hi];
                if(sum==0){
                    s.insert({nums[i],nums[lo],nums[hi]});
                    lo++;
                    hi--;
                }
                else if(sum<0){
                    lo++;
                }
                else{
                    hi--;
                }
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;
    }
};
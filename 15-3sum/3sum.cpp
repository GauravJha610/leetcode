class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());

        int sum=0,j=0,k=0;
        for(int i=0;i<nums.size()-2;i++){
            sum=nums[i]*-1;
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]==sum){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++;k--;
                }
                else if(nums[j]+nums[k]< sum){
                    j++;
                }
                else{
                    k--;
                }
            }
        }

        for(auto x: st){
            ans.push_back(x);
        }
        return ans;
    }
};
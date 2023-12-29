class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int second_ele=target-nums[i];
            if(umap.find(second_ele)!=umap.end()){
                return {umap[second_ele],i};
            }
            umap.insert({nums[i],i});
        }
        return {};
    }
};
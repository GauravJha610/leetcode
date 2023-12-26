class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> umap;

        for (auto x : nums) {
            umap[x]++;
        }

        multimap<int, int, greater<int>> mymap;
        for (auto x : umap) {
            mymap.insert(make_pair(x.second, x.first));
        }

        for (auto x : mymap) {
            ans.push_back(x.second);
            k--;
            if(k==0){
                break;
            }

                
            
        }

        return ans;
    }
};
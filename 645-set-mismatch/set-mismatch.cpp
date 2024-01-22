class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dup = -1, missing = -1;
        
        for (int i = 1; i <= nums.size(); i++) {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == i) {
                    count++;
                }
            }
            if (count == 2) {
                dup = i;
            } else if (count == 0) {
                missing = i;
            }
        }
        
        return {dup, missing};
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int mis=-1,dup=-1;
        // for(int i=0;i<n-1;i++){
        //     int diff=nums[i+1]-nums[i];
        //     if(diff==0 && dup==-1){
        //         dup=nums[i];
        //     }
        //     else if(diff==2 && mis==-1){
        //         mis=nums[i]+1;
        //     }
        // }
        // if(nums[n-1]!=n && mis==-1){
        //     mis=n;
        // }
        // if(mis==-1){
        //     mis=1;
        // }
        // return {dup,mis};
    }
};
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        for(int i=0,j=n-1;i<=j;i++){
            if(nums[i]==val){
                count++;
                nums[i]=nums[j];
                nums[j]=(int)'_';
                i--;j--;
            }
        }
        return n-count;
    }
};
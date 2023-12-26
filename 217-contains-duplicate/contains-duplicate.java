class Solution {
    public boolean containsDuplicate(int[] nums) {
        Map < Integer,Integer> hash = new HashMap<>();
        for(int x:nums){
            if(hash.containsKey(x)){
                return true;
            }
            hash.put(x,1);
            // else{
            //     hash.put(x,1);
            // }
        }
        return false;
    }
}
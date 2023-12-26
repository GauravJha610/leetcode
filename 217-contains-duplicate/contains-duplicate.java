class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap < Integer,Integer> hash = new HashMap<>();
        for(int x:nums){
            if(hash.containsKey(x)){
                hash.put(x,hash.get(x)+1);
            }
            else{
                hash.put(x,1);
            }
        }
        for(int x:nums){
            if( hash.get(x) >1 ){
                return true;
            }
        }
        return false;
    }
}
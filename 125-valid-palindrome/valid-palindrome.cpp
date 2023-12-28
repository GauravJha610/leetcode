class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(char i:s){
            if(isalnum(i)){
                if(isalpha(i)){
                    ans+=tolower(i);
                }
                else{
                    ans+=i;
                }
            }
        }

        int i=0,j=ans.size()-1;
        while(i<j){
            if(ans[i]!=ans[j]){
                return false;
            }
            i++;j--;
        }

        return true;
    }
};
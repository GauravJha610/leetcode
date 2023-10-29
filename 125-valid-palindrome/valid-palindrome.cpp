class Solution {
public:
    bool isPalindrome(string s) {
      string str="";
      int n=s.size();
      for(int i=0;i<n;i++){
          if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57)){
              str+=s[i];
          }
          else if(s[i]>=65 && s[i]<=90){
              str+=(s[i]+32);
          }
      }
      n=str.size();
      if(n<=1) return true;
      int i=0,j=n-1;
      while(i<j){
          if(str[i]!=str[j]){
              return false;
          }
          i++;j--;
      }
        return true;
    } 
};
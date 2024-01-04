class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n=s.size();

        if(n%2!=0){
            return false;
        }

        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stk.push(s[i]);
            }
            else if(!stk.empty()){
                char temp=stk.top();
                if(  (temp=='(' && s[i]==')')  || (temp=='{' && s[i]=='}')  ||  (temp=='[' && s[i]==']')  ){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }

        return (stk.empty())?true:false;
    }
};
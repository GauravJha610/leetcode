class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int pSize=pattern.size();
        int sSize=s.size();
        vector<string> words;
        string word="";
        for(int i=0;i<sSize;i++){
            if(s[i]!=' '){
                word+=s[i];
            }
            else{
                words.push_back(word);
                word="";
            }
            if(i==sSize-1){
                words.push_back(word);
            }
        }
        if(pSize!=words.size()) {
            return false;
        }
        map<char,string> mp;
        set<string> value;
        for(int i=0;i<pSize;i++){
            if(mp.count(pattern[i])==0){
                if(value.count(words[i])==0){
                    mp[pattern[i]]=words[i];
                    value.insert(words[i]);
                }
                else{
                    return false;
                }
            }
            else{
                if(mp[pattern[i]]!=words[i]){
                    return false;
                }
            }
        }
        return true;    
    }
};
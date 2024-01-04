class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;

        int n=g.size();
        int m=s.size();

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        // int i=max(0,(n-m));
        // int j=min(m,n);

        for(int i=n-1,j=m-1;i>=0 && j>=0; i--,j--){
            if(g[i]<=s[j]){
                ans++;
            }
            else{
                j++;
            }
        }

        return ans;
    }
};
class Solution {
public:
    int max_len = 0;
    void solve(vector<string>& arr, int& n, int i, 
               string s) {
        if (i == n)
            return;

        // not including current ele
        solve(arr, n, i + 1, s);

        // including current ele
        s += arr[i];
        // ans.push_back(s);
        string temp = s;
        vector<int> freq(26,0);
        // sort(temp.begin(), temp.end());
        int m = temp.size();
        bool flag = true;
        for (int j = 0; j < m; j++) {
            if(freq[temp[j]-'a']!=0){
                flag=false;
                break;
            }
            freq[temp[j]-'a']++;
        }
        if (flag == true) {
            if (m > max_len) {
                max_len = m;
            }
        }

        solve(arr, n, i + 1, s);
    }

    int maxLength(vector<string>& arr) {
        int n = arr.size();
        // vector<string> ans;
        solve(arr, n, 0,  "");
        // n = ans.size();
        // int max_len = 0;
        // for (int i = 0; i < n; i++) {
        // }

        return max_len;
    }
};
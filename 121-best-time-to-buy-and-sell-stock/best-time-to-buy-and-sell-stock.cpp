class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2) return 0;
        vector<int> left(n);
        // vector<int> maxArr(n);

        left[0]=prices[0];
        // maxArr[n-1]=prices[n-1];

        for(int i=1;i<n;i++){
            if(prices[i]<left[i-1]){
                left[i]=prices[i];
            }
            else{
                left[i]=left[i-1];
            }
            // maxArr[j]=max(maxArr[j],maxArr[j+1]);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            // cout<<prices[i]-left[i]<<endl;
            if((prices[i]-left[i])>ans){
                ans=prices[i]-left[i];
            }
        }

        return ans;
    }
};
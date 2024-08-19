class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX,maxpr=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxpr=max(maxpr,prices[i]-mini);
        }
        return maxpr;
    }
};

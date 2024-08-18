class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX, maxpro = 0;
        for(int i = 0; i < prices.size(); i++) {
            mini = min(mini, prices[i]);
            maxpro = max(maxpro, prices[i] - mini);
        }
        return maxpro;
    }
};

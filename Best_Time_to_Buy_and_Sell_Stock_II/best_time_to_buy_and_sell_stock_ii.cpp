class Solution {
    public:
        int maxProfit(vector<int> &prices) {
            int total = 0;
            for (int i = 1; i < prices.size(); i++)
                total += prices[i] > prices[i - 1] ? prices[i] - prices[i - 1] : 0;
            return total;
        }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int hold = -prices[0];
        int sold = 0;
        int reset = 0;
        for(int i = 1; i < prices.size(); i++){
            int prev_h = hold;
            int prev_s = sold;
            int prev_r = reset;
            hold = std::max(prev_h,prev_r - prices[i]);
            sold = prev_h + prices[i];
            reset = std::max(prev_r,prev_s);

        }
        return std::max(sold,reset);
    }
};

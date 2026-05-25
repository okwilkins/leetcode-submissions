class Solution {
public:
    int maxProfit(const vector<int>& prices) {
        if (prices.size() <= 1) {
            return 0;
        }
        int profit{}; 
        int minPrice{prices[0]};
    
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
                continue;
            }
            if (price - minPrice > profit) profit = price - minPrice;
        }

        return profit;
    }
};

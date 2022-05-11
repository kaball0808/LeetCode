class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int price = INT_MAX;
        for(int i = 0; i <prices.size();i++){
            price = min(prices[i],price);
            maxpro = max(maxpro, prices[i]-price);
        }
        return maxpro;
    }
};

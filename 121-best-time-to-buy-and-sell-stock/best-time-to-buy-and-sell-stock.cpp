class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int leftMini=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
            int presentCost=prices[i]-leftMini;
            profit=max(profit,presentCost);
            leftMini=min(leftMini,prices[i]);
        }
        return profit;
    }
};
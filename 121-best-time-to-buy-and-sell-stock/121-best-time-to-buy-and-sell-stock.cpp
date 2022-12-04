class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int low = prices[0];
       int highest = prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<low){
                low = prices[i];
                highest = prices[i];
            }
            if(prices[i]>highest){
                highest = prices[i];
            }
            profit= max(profit,abs(highest-low));
        }
        return profit;
    }
};
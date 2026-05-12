class Solution {
public:
    int maxProfit(vector<int>& prices) {
       long n=prices.size();
       int maxprices=0,  bestbuy= prices[0];
        for(int i=0; i<n ; i++){
            if(prices[i]>bestbuy){
                maxprices= max(maxprices , prices[i]-bestbuy);
            }
            bestbuy= min(prices[i], bestbuy);
        }
        return maxprices;
        
    }
};

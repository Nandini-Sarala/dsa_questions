class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int profit=0;
        for(int price:prices){
            profit=max(profit,price-minprice);
            minprice=min(price,minprice);
        }
        
        return profit;
        }
        
    
};
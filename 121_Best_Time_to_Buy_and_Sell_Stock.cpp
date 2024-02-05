class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], sell =prices[0] , maxProfit=0;
        
        for(int i=0; i<prices.size(); i++)
        {
         if(prices[i]<buy)
         {
             buy=prices[i];
             sell=prices[i];
         }
         else
         {
             sell=prices[i];
         }  

         if((sell-buy) > maxProfit)
         {
             maxProfit=sell-buy;
         } 
        }        
        return maxProfit;
    }
};

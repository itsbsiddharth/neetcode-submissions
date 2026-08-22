class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0,r=1;// left = buy and right = sell;

        int mxprofit=0;

        while(r<prices.size()){
            if(prices[l]<prices[r]){
                int profit=prices[r]-prices[l];
                mxprofit= max(mxprofit,profit);
            }else{
                l=r;
            }
            r++;
        }

        return mxprofit;

    }
};
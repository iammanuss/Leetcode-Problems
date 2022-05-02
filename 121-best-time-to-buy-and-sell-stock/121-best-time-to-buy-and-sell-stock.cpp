class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            mini=min(prices[i],mini);
            p=max(p,(prices[i]-mini));
        }
        return p;   
    }
};
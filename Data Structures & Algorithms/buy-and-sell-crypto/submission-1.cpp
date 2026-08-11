class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,cur=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]-cur<0){
                cur=prices[i];
            }
             int rev=prices[i]-cur;
             maxi=max(rev,maxi);
            }
            return maxi;
    }
};

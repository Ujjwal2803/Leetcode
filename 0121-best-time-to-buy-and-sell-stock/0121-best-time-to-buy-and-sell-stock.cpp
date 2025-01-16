class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit=0,mina=a[0];
        int cost=0;
        for(int i=0;i<a.size();i++){
            cost =a[i]-mina;
            profit=max(profit,cost);
            mina=min(mina,a[i]);
        }
        return profit;
    }
};
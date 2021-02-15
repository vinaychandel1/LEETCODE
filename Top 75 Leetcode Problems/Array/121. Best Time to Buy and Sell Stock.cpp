class Solution {
public:
    int maxProfit(vector<int>& p) {
       int minimum=INT_MAX;
        int profit=0;
        for(int i=0;i<p.size();i++)
        {
            minimum=min(minimum,p[i]);
            profit=max(profit,p[i]-minimum);
        }
        return profit;
    }
};

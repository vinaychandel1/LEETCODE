class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int dp[amount+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        for(int c = 0 ; c<coins.size() ; c++){
            for(int i=coins[c] ; i <=amount ; i++)
                dp[i] += dp[i-coins[c]];
        }
        coins.clear();
        return dp[amount];
        
    }
};

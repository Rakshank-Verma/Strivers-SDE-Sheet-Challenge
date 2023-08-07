#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int coinchange(int amt, vector<int> &arr, vector<int> &dp)
    {
        if (amt == 0)
            return 0;

        if (amt < 0)
            return INT_MAX;

        if(dp[amt])
            return dp[amt];

        int mini = INT_MAX;

        for (auto i : arr)
        {
            int ans = coinchange(amt - i, arr, dp);

            if(ans != INT_MAX){
                mini = min(mini, ans+1);
            }
        }

        return dp[amt] = mini;
    }

    int coinChange(vector<int>& coins, int amount) {

        if(amount == 0) return 0;

        vector<int> dp(amount+1, 0);

        if(coinchange(amount, coins, dp) == INT_MAX)
            return -1;

        else
            return coinchange(amount, coins, dp);
    }
};
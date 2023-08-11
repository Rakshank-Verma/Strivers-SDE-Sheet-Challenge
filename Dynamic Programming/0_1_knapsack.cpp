#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:    
    int solve(int w, int wt[], int val[], int ind, vector<vector<int>> &dp){
        
        if(ind == 0) {
            if(wt[0] <= w) return val[0];
            return 0;
        }
        
        if(dp[ind][w] != -1) return dp[ind][w];
        
        int exclude = solve(w, wt, val, ind-1, dp);
        int include = INT_MIN;
        
        if(wt[ind] <= w){
            include = val[ind] + solve(w-wt[ind], wt, val, ind-1, dp);
        }
        
        return dp[ind][w] = max(exclude, include);
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(n, vector<int>(W+1, -1));
        return solve(W, wt, val, n-1, dp);
    }
};
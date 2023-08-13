#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
void combSum(int ind, vector<int> candidates, vector<int> &ds, int target, vector<vector<int>> &ans)
{
    if (ind == candidates.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    if (candidates[ind] <= target)
    {
        ds.push_back(candidates[ind]);
        combSum(ind, candidates, ds, target - candidates[ind], ans);
        ds.pop_back();
    }

    combSum(ind + 1, candidates, ds, target, ans);
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target){

    vector<vector<int>> ans;
    vector<int> ds;

    combSum(0, candidates, ds, target, ans);

    return ans;
    }
};
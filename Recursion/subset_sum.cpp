#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> helper(vector<int> arr, vector<int> &sums, int N, int i, int sum)
    {
        if (i == N)
        {
            sums.push_back(sum);
            return sums;
        }

        sum = sum + arr[i];
        helper(arr, sums, N, i + 1, sum);

        sum = sum - arr[i];
        helper(arr, sums, N, i + 1, sum);

        return sums;
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sums;

        return helper(arr, sums, N, 0, 0);
    }
};
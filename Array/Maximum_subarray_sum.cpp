#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = nums[0], currSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        currSum = max(currSum + nums[i], nums[i]);
        sum = max(currSum, sum);
    }

    return sum;
}

int main()
{
    vector<int> v = {5, 4, -1, 7, 8};

    cout << maxSubArray(v) << endl;
}
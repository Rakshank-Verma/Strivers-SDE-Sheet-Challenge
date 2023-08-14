#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums2;

        int prev = nums[0];
        nums2.push_back(prev);

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == prev){
                n--;
            }
            else{
                prev = nums[i];
                nums2.push_back(prev);
            }
        }

        nums = nums2;

        return n;
    }
};
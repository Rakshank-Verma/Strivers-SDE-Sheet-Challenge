class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        stack<int> s1, s2;
        map<int, int> m;

        s2.push(nums2[0]);

        for (int i = nums2.size() - 1; i >= 1; i--)
        {
            s1.push(nums2[i]);
        }

        while (!s1.empty())
        {
            if (s2.empty() || s1.top() < s2.top())
            {
                s2.push(s1.top());
                s1.pop();
            }

            else if (s1.top() > s2.top())
            {
                m[s2.top()] = s1.top();
                s2.pop();
            }
        }

        while (!s2.empty())
        {
            m[s2.top()] = -1;
            s2.pop();
        }

        for (int i = 0; i < nums1.size(); i++)
        {
            nums1[i] = m[nums1[i]];
        }

        return nums1;
    }
};
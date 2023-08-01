#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> m;
        m = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

        int ans = m[s[0]];

        for (int i = 1; i < s.size(); i++)
        {

            if (m[s[i]] <= m[s[i - 1]])
            {
                ans += m[s[i]];
            }
            else
            {
                ans += m[s[i]] - (2 * m[s[i - 1]]);
            }
        }

        return ans;
    }
};
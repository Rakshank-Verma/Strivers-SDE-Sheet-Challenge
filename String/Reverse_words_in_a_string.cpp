#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        int ptr = 0;
        words[ptr] = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                words[ptr] += s[i];
            }

            else
            {
                if (s[i] != ' ')
                {
                    ptr++;
                    words[ptr] = "";
                }
            }
        }
    }
};
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    void fillZeros(int n, int m, int rows, int cols, vector<vector<int>> &matrix)
    {
        // for upward
        for (int i = n - 1; i >= 0; i--)
            matrix[i][m] = 0;

        // for bottom
        for (int i = n + 1; i < rows; i++)
            matrix[i][m] = 0;

        // for left
        for (int i = m - 1; i >= 0; i--)
            matrix[n][i] = 0;

        // for right
        for (int i = m + 1; i < cols; i++)
            matrix[n][i] = 0;
    }

    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size(), cols = matrix[0].size();
        stack<vector<int>> st;

        for (int row = 0; row < rows; row++)
        {
            for (int col = 0; col < cols; col++)
            {
                if (matrix[row][col] == 0)
                {
                    st.push({row, col});
                }
            }
        }

        while (!st.empty())
        {
            int n = st.top()[0], m = st.top()[1];
            st.pop();

            fillZeros(n, m, rows, cols, matrix);
        }
    }
};
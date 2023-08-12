#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(root == NULL) return {};
        vector<vector<int>> ans;

        queue<TreeNode*> q1, q2;
        q1.push(root);

        while(!q1.empty() || !q2.empty()){
            if(!q1.empty()){
                vector<int> currLevel;
                while(!q1.empty()){
                    TreeNode* node = q1.front();
                    currLevel.push_back(node->val);
                    if(node->left != NULL) q2.push(node-> left);
                    if(node->right != NULL) q2.push(node-> right);
                    q1.pop();
                }
                ans.push_back(currLevel);
            }

            if(!q2.empty()){
                vector<int> currLevel;
                while(!q2.empty()){
                    TreeNode* node = q2.front();
                    currLevel.push_back(node->val);
                    if(node->left != NULL) q1.push(node-> left);
                    if(node->right != NULL) q1.push(node-> right);
                    q2.pop();
                }
                ans.push_back(currLevel);
            }
        }
        return ans;
    }
};
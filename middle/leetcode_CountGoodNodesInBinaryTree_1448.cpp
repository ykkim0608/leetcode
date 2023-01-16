#include <iostream>


 //Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:

    int dfs(TreeNode* root, int x)
    {
        if (!root)
            return 0;
        int res = 0;
        if (root->val >= x)
        {
            res++;
            x = root->val;
        }
        return (res + dfs(root->left, x) + dfs(root->right, x));
    }
    int goodNodes(TreeNode* root) {

        return dfs(root, INT_MIN);

    }
};

int main()
{
    return 0;
}
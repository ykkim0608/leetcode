#include <iostream>

using namespace std;

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
    int maxHeight = INT_MIN;
    int height = 0, maxSum = 0;
    void inorderDFS(TreeNode* root, int height)
    {
        if (root == NULL)
            return;
        height += 1;
        inorderDFS(root->left, height);
        if (root->left == NULL && root->right == NULL)
        {
            if (maxHeight < height)
            {
                maxHeight = height;
                maxSum = root->val;
            }
            else if (maxHeight == height)
                maxSum = maxSum + root->val;

        }
        inorderDFS(root->right, height);
    }

    int deepestLeavesSum(TreeNode* root) {

        inorderDFS(root, height);
        return maxSum;
    }

};

int main()
{

    return 0;
}
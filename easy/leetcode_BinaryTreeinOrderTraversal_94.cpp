#include <iostream>
#include<vector>
#include <stack>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> vec;
        stack<TreeNode*> todo;

        while (root || !todo.empty())
        {
            while (root)
            {
                todo.push(root);
                root = root->left;
            }
            root = todo.top();
            todo.pop();
            vec.push_back(root->val);
            root = root->right;

        }

      return vec;

    }
};

int main()
{
    return 0;
}
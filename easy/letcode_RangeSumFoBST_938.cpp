#include <iostream>
#include <vector>
#include <stack>

using namespace std;

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
    int rangeSumBST(TreeNode* root, int low, int high) {

        int result = 0;
        stack<TreeNode*> stack;
        stack.push(root);

        while (!stack.empty())
        {
            TreeNode* cur = stack.top();
            stack.pop();

            if (!cur) continue;

            if (low <= cur->val && cur->val <= high)
            {
                result += cur->val;
                stack.push(cur->right);
                stack.push(cur->left);
            }
           
        }
        return result;




    }
};


int main()
{
    return 0;
}
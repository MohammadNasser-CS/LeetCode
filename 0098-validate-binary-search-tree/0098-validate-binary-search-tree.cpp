/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool validate(TreeNode* node, long long lower, long long upper) {
        if (node == nullptr) {
            return true;
        }
        if (node->val <= lower || node->val >= upper) {
            return false;
        }
        return validate(node->left, lower, node->val) && validate(node->right, node->val, upper);
    }
    bool isValidBST(TreeNode* root) {
        
        return validate(root,LLONG_MIN, LLONG_MAX);
    }
};
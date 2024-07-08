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
bool symmetric(TreeNode * left,TreeNode*right)
{
    if(left==NULL&& right==NULL)
    {
        return true;
    }
    if(left!=NULL && right!=NULL)
    {
        if(left->val == right-> val && symmetric(left->left,right->right) && symmetric(left->right,right->left))
        {
            return true;
        }
        
    }
    return false;
}
    bool isSymmetric(TreeNode* root) {
        TreeNode *left = root->left;
        TreeNode *right = root->right;
        bool ans = symmetric(left,right);
        return ans;

    }
};

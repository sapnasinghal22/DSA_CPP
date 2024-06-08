class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;

        }
        int leftheight = maxDepth(root->left);
        int rightheight = maxDepth(root->right);
        int height=max(leftheight,rightheight)+1;
        return height;        
    }
};

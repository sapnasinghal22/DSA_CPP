
class Solution {
public:
    void inorder(TreeNode * root,vector<int> &arr)
    {
        if(root==NULL)
        {
            return;

        }
        // lnp
        // l
        inorder(root->left,arr);
        // n
        arr.push_back(root->val);
        // r
        inorder(root->right,arr);
    }
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int > arr;
        inorder (root,arr);
        return arr;
        
    }
};

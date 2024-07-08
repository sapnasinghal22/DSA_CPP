class Solution {
public:
bool solve(TreeNode *root,int targetsum,int sum)
{
    if(root==NULL)
    {
        return false;
    }
    sum += root->val;
    if(root->left==NULL && root->right==NULL)
    {
        if(sum==targetsum)
        {
            return true;
        }
        else{
            return false;
        }
    }
        bool leftans = solve(root->left,targetsum,sum);
        bool rightans=solve(root->right,targetsum,sum);
        return leftans || rightans;
    
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum =0;
        bool ans = solve(root,targetSum,sum);
        return ans;
        
    }
};

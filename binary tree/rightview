void leftview(BinaryTreeNode<int>*root,int level,vector<int> &ans)
{
    if(root==NULL)
    {
        return;
    }
    if(level == ans.size())
    {
        ans.push_back(root->data);
    }
    leftview(root->left,level+1,ans);
    leftview(root->right,level+1,ans);
}


vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans ;
    int level=0;
    leftview(root,level,ans);
    return ans;
}

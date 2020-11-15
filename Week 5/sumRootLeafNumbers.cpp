class Solution {
    int ans =0;
    void dfs(TreeNode *root,int val)
    {
        if(!root)
            return;
        val *=10;
        val += root->val;
        if(!root->left && !root->right)
        {
            ans+=val;
            return;
        }
        dfs(root->left,val);
        dfs(root->right,val);
    }
public:
    int sumNumbers(TreeNode* root) {
        if(!root)
            return 0;
        dfs(root,0);
        return ans;
    }
};
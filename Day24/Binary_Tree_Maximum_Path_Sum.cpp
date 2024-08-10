    // int ans=INT_MIN;
    // int fn(TreeNode* root){
    //     if(root==NULL)return 0;
    //     int left=max(0,fn(root->left));
    //     int right=max(0,fn(root->right));

    //     ans=max(ans,root->val+left+right);
        
    //     return root->val+max(left,right);
    // }
    // int maxPathSum(TreeNode* root) {
    //     fn(root);
    //     return ans;
    // }
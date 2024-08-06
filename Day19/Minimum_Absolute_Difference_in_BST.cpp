    // TreeNode*prev=NULL;
    // int mini=INT_MAX;
    // void fn(TreeNode*root){
    //     if(root==NULL)return;
    //     if(root->left)fn(root->left);
    //     if(prev)mini=min(mini,root->val-prev->val);
    //     prev=root;
    //     if(root->right)fn(root->right);
    //     return;
    // }
    // int getMinimumDifference(TreeNode* root) {
    //     fn(root);
    //     return mini;
    // }
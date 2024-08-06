    // int fn(TreeNode*root,bool flag){
    //     if(root->left==NULL && root->right==NULL){
    //         if(flag)return root->val;
    //         return 0;
    //     }

    //     int left=0;
    //     if(root->left)left=fn(root->left,true);
    //     int right=0;
    //     if(root->right)right=fn(root->right,false);

    //     return left+right;
    // }
    // int sumOfLeftLeaves(TreeNode* root) {
    //     return fn(root,false);
    // }
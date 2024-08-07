    // TreeNode*prev=NULL;
    // TreeNode*start=NULL;
    // TreeNode*end=NULL;
    // void fn(TreeNode* root){
    //     if(root==NULL)return;
    //     fn(root->left);
    //     if(prev!=NULL){
    //         if(root->val<prev->val){
    //             if(!start)start=prev;
    //             end=root;
    //         }
    //     }

    //     prev=root;
    //     fn(root->right);
    // }
    // void recoverTree(TreeNode* root) {
    //     fn(root);
    //     swap(start->val,end->val);
    //     return;
    // }
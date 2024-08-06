    // int cnt=1;
    // void inorder(TreeNode* root, int k,int &ans){
    //     if(root==NULL){
    //       return;
    //     }
    //     inorder(root->left,k,ans);
    //     if(cnt++==k){
    //         ans=root->val;
    //     }
    //     if(ans!=-1)return;
    //     inorder(root->right,k,ans);
    // }
    // int kthSmallest(TreeNode* root, int k) {
    //    int ans=-1;
    //    inorder(root,k,ans);
    //    return ans;
    // }
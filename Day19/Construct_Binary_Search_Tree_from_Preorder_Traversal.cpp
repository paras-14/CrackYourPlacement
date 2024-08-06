    // int cnt=0;
    
    // TreeNode* solve(vector<int>& preorder,int bound){
    //    if(cnt==preorder.size() || preorder[cnt]>bound){
    //       return NULL;
    //    }
    //    TreeNode*temp=new TreeNode(preorder[cnt++]);
    //    temp->left=solve(preorder,temp->val);
    //    temp->right=solve(preorder,bound);
        
    //    return temp;
    // }
    
    
    // TreeNode* bstFromPreorder(vector<int>& preorder) {
    //     return solve(preorder,INT_MAX);
    // }
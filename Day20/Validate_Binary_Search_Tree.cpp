    // bool fn(TreeNode*root,long long lb,long long ub){
    //     if(root==NULL)return true;
    //     bool left=fn(root->left,lb,root->val);
    //     bool right=fn(root->right,root->val,ub);

    //     if(left && right){
    //         if(root->val>lb && root->val<ub)return true;
    //         else return false;
    //     }

    //     return false;
    // }
    // bool isValidBST(TreeNode* root) {
    //     return fn(root,-1e18,1e18);
    // }
    // bool isLeaf(TreeNode* root){
    //     if(root->left==NULL && root->right==NULL)return true;
    //     return false;
    // }
    // bool fn(TreeNode*root,int tsum,int sum){
    //     if(root==NULL)return false;
    //     int sumz=root->val+sum;
    //     if(sumz==tsum && isLeaf(root))return true;
    //     bool left=fn(root->left,tsum,sumz);
    //     bool right=fn(root->right,tsum,sumz);
    //     if(left || right)return true;
    //     return false;
    // }
    // bool hasPathSum(TreeNode* root, int targetSum) {
    //     if(root==NULL)return false;
    //     return fn(root,targetSum,0);
    // }
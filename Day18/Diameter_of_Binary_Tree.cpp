    // pair<int,int>fn(TreeNode* root){

    //     if(root==NULL)return {0,0};

    //     pair<int,int>left=fn(root->left);
    //     pair<int,int>right=fn(root->right);

    //     pair<int,int>newz={1+max(left.first,right.first),max(left.second,max(right.second,left.first+right.first+1))};

    //     return newz;
    // }
    // int diameterOfBinaryTree(TreeNode* root) {
    //     return fn(root).second-1;
    // }
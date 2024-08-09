    // vector<string>ans;
    // bool isLeaf(TreeNode* root){
    //     if(root->right==NULL && root->left==NULL)return true;
    //     return false;
    // }
    // void fn(TreeNode* root,string curr){
    //     if(root==NULL)return;
    //     if(isLeaf(root)){
    //         curr+=to_string(root->val);
    //         ans.push_back(curr);
    //         return;
    //     }
    //     curr+=to_string(root->val);
    //     curr.push_back('-');
    //     curr.push_back('>');
    //     fn(root->left,curr);
    //     fn(root->right,curr);

    //     return;
    // }
    // vector<string> binaryTreePaths(TreeNode* root) {
    //     fn(root,"");
    //     return ans;
    // }
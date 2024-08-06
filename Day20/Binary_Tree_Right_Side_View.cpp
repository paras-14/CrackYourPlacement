    // void fn(TreeNode*root,vector<int>&ans,int level){
    //     if(root==NULL)return;
    //     if(ans.size()>=level)ans[level-1]=root->val;
    //     else ans.push_back(root->val);
    //     fn(root->left,ans,level+1);
    //     fn(root->right,ans,level+1);
    //     return;
    // }
    // vector<int> rightSideView(TreeNode* root) {
    //     vector<int>ans;
    //     fn(root,ans,1);
    //     return ans;
    // }
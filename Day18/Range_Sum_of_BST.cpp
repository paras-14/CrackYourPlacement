    // void helpr(TreeNode* root, int low, int high,vector<int>&ans,int &sum){
    //     if(root==NULL)return ;

    //     if(root->val<=high && root->val>=low){
    //         sum+=root->val;
    //     }

    //     if(root->val<low)helpr(root->right,low,high,ans,sum);
    //     else if(root->val>high)helpr(root->left,low,high,ans,sum);
    //     else{
    //         helpr(root->right,low,high,ans,sum);
    //         helpr(root->left,low,high,ans,sum);
    //     }
         
    //     return ;
    // }
    
    // int rangeSumBST(TreeNode* root, int low, int high) {
    //     vector<int>ans;
    //     int sum=0;
    //     helpr(root,low,high,ans,sum);

    //     return sum;
    // }
    // TreeNode*fn(TreeNode*root1,TreeNode*root2){
    //     if(root1==NULL && root2==NULL)return NULL;
    //     TreeNode*temp=NULL;
    //     if(root1!=NULL && root2!=NULL){
    //         temp=new TreeNode(root1->val+root2->val);
    //     }else if(root1==NULL && root2!=NULL){
    //         temp=new TreeNode(root2->val);
    //     }else if(root1!=NULL && root2==NULL){
    //         temp=new TreeNode(root1->val);
    //     }

    //     temp->left=fn(root1!=NULL?root1->left:NULL,root2!=NULL?root2->left:NULL);
    //     temp->right=fn(root1!=NULL?root1->right:NULL,root2!=NULL?root2->right:NULL);

    //     return temp;
    // }
    // TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    //     return fn(root1,root2);
    // }
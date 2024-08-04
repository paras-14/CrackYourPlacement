    // bool isIdentical(TreeNode*node1,TreeNode*node2){
    //     if(node1==NULL && node2==NULL)return true;
    //     if(node1==NULL || node2==NULL)return false;
    //     if(node1==NULL || node2==NULL)return false;

    //     if(node1->val!=node2->val)return false;

    //     return isIdentical(node1->left,node2->left) && isIdentical(node1->right,node2->right);
    // }

    // void fn(TreeNode* root,queue<TreeNode*>&q,int valz){
    //     if(root==NULL)return;
    //     if(root->val==valz)q.push(root);
    //     fn(root->left,q,valz);
    //     fn(root->right,q,valz);

    //     return;
    // }
    // bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    //     queue<TreeNode*>q;
    //     fn(root,q,subRoot->val);
    //     while(!q.empty()){
    //         if(isIdentical(q.front(),subRoot))return true;
    //         q.pop();
    //     }

    //     return false;
    // }
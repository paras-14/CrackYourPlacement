//    bool fn(TreeNode*Node1,TreeNode*Node2){
//         if(Node1==NULL && Node2==NULL)return true;
//         if(Node1==NULL && Node2!=NULL)return false;
//         if(Node1!=NULL && Node2==NULL)return false;

//         if(Node1->val!=Node2->val)return false;

//         return fn(Node1->left,Node2->right) && fn(Node1->right,Node2->left);
//     }
//     bool isSymmetric(TreeNode* root) {
//         return fn(root,root);
//     }
    // bool isLeaf(Node*root){
    //     if(root->left==NULL && root->right==NULL)return true;
    //     return false;
    // }
    // bool fn(Node*root,int lb,int ub){
    //     if(root==NULL)return false;
    //     if(root->data==lb+1 && root->data==ub-1 && isLeaf(root))return true;
    //     bool left=fn(root->left,lb,root->data);
    //     bool right=fn(root->right,root->data,ub);
        
    //     return left || right;
    // }
    // bool isDeadEnd(Node *root)
    // {
    //     //Your code here
    //     return fn(root,0,10002);
    // }
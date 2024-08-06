    // void pred(Node*root,Node*&pre,int key){
    //     while(root!=NULL){
    //         if(root->key<key){
    //             pre=root;
    //             root=root->right;
    //         }else{
    //             root=root->left;
    //         }
    //     }
    // }
    // void succ(Node*root,Node*&suc,int key){
    //     while(root!=NULL){
    //         if(root->key>key){
    //             suc=root;
    //             root=root->left;
    //         }else{
    //             root=root->right;
    //         }
    //     }
    // }
    // void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    // {
    //     // Your code goes here
    //     pred(root,pre,key);
    //     succ(root,suc,key);
    // }
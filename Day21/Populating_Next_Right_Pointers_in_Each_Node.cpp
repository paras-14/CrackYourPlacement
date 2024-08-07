    // Node* connect(Node* root) {
    //     if(root==NULL)return NULL;
    //     queue<Node*>q;
    //     q.push(root);
    //     while(!q.empty()){
    //         int n=q.size();
    //         for(int i=0;i<n;i++){
    //             Node* a=q.front();
    //             q.pop();

    //             if(i==n-1){
    //                 a->next=NULL;
    //             }else{
    //                 Node*b=q.front();
    //                 a->next=b;
    //             }

    //             if(a->left)q.push(a->left);
    //             if(a->right)q.push(a->right);
    //         }
    //     }

    //     return root;
    // }
    // TreeNode* fn(vector<int>& pre, vector<int>& post,int &i,int &j){
    //     TreeNode* temp=new TreeNode(pre[i++]);
    //     if(temp->val!=post[j]){
    //         temp->left=fn(pre,post,i,j);
    //     }
    //     if(temp->val!=post[j]){
    //         temp->right=fn(pre,post,i,j);
    //     }

    //     j++;
    //     return temp;
    // }
    // TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
    //     int i=0;
    //     int j=0;
    //     return fn(pre,post,i,j);
    // }
    // vector<vector<int>> levelOrder(TreeNode* root) {
    //     vector<vector<int>>ans;
    //     if(root==NULL){
    //       return ans ;
    //     }   
    //     queue<TreeNode*>q;
    //     q.push(root);   
    //     while(!q.empty()){
    //        int size=q.size();  
    //        vector<int>temp;        
    //        for(int i=0;i<size;i++){
    //            TreeNode* top=q.front();         
    //            q.pop();          
    //            if(top->left!=NULL) q.push(top->left);
    //            if(top->right!=NULL) q.push(top->right);
               
    //            temp.push_back(top->val);
    //        }       
    //         ans.push_back(temp);
    //     }     
    //     return ans;
    // }
// vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>>ans;
        
//         if(root==NULL) return ans;
//         queue<TreeNode*>q;
//         q.push(root);
        
//         int flag=0;
        
//         while(!q.empty()){
            
//             int size=q.size();
            
//             vector<int>temp;
            
//             for(int i=0;i<size;i++){
//                TreeNode* top=q.front();
//                q.pop();
//                temp.push_back(top->val);
                
//                 if(top->left){
//                     q.push(top->left);
//                 }
                
//                 if(top->right){
//                     q.push(top->right);
//                 }
//             }
            
//             if(flag){
//                  reverse(temp.begin(),temp.end());
//             }
            
//             ans.push_back(temp);
            
//             flag=!flag;
//         }
        
        
//         return ans;
//     }
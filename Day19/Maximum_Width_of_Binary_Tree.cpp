// int widthOfBinaryTree(TreeNode* root) {
//         if(root==NULL) return 0;
        
//         long long ans=1;
        
//         queue<pair<TreeNode*,long long>>q;
        
//         q.push({root,0});
        
//         while(!q.empty()){
//             long long start=q.front().second;
//             long long end=q.back().second;
            
//             ans=max(ans,end-start+1);
            
//             int size=q.size();
            
//             for(int i=0;i<size;i++){
//                 pair<TreeNode*,long long>p=q.front();
//                 q.pop();
                
//                 long long idx=p.second-start;
                
//                 if(p.first->left){
//                     q.push({p.first->left,2*idx+1});
//                 }
                
//                 if(p.first->right){
//                     q.push({p.first->right,2*idx+2});
//                 }
                
//             }
            
//         }
        
//         return (int)ans;
//     }
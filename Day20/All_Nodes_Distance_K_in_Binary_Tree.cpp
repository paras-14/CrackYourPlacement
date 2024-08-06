    // void markParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&mp){
    //     queue<TreeNode*>q;
    //     q.push(root);
    //     while(!q.empty()){
    //       TreeNode* top=q.front();
    //       q.pop();
    //       if(top->left){
    //          mp[top->left]=top;
    //          q.push(top->left);
    //       }
    //       if(top->right){
    //          mp[top->right]=top;
    //          q.push(top->right);
    //       }
    //     }
    // }
    
    
    // vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    //     unordered_map<TreeNode*,TreeNode*>mp;
    //     markParents(root,mp);
        
    //     queue<TreeNode*>q;
        
    //     q.push(target);
        
    //     int level=0;
        
    //     unordered_map<TreeNode*,bool>visited;
        
    //     visited[target]=true;
        
    //     while(!q.empty()){
    //        int n=q.size();
            
    //        if(level++==k) break;
            
    //        for(int i=0;i<n;i++){
    //            TreeNode* top=q.front();
    //            q.pop();
               
    //            if(top->left && !visited[top->left]){
    //               visited[top->left]=true;
    //               q.push(top->left);
    //            }
               
    //            if(top->right && !visited[top->right]){
    //               visited[top->right]=true;
    //               q.push(top->right);
    //            }
               
    //            if(mp[top] && !visited[mp[top]]){
    //               visited[mp[top]]=true;
    //               q.push(mp[top]);
    //            }
    //        }
    //     }
        
    //     vector<int>ans;
        
    //     while(!q.empty()){
    //       ans.push_back(q.front()->val);
    //       q.pop();
    //     }
        
    //     return ans;
    // }
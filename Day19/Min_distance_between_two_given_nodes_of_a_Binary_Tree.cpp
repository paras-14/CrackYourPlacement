    // Node*start=NULL;
    // void make_parent(Node*root,unordered_map<Node*,Node*>&mp,int a){
    //     if(root->data==a)start=root;
    //     if(root->left){
    //         mp[root->left]=root;
    //         make_parent(root->left,mp,a);
    //     }
    //     if(root->right){
    //         mp[root->right]=root;
    //         make_parent(root->right,mp,a);
    //     }
        
    //     return ;
    // }
    // int findDist(Node* root, int a, int b) {
    //     // Your code here
    //     unordered_map<Node*,Node*>mp;
    //     make_parent(root,mp,a);
    //     queue<pair<Node*,int>>q;
    //     q.push({start,0});
    //     unordered_map<Node*,bool>vis;
    //     vis[start]=true;
    //     while(!q.empty()){
    //         Node* node=q.front().first;
    //         int dis=q.front().second;
            
    //         if(node->data==b)return dis;
            
    //         q.pop();
            
    //         if(node->left && vis.find(node->left)==vis.end()){
    //             vis[node->left]=true;
    //             q.push({node->left,dis+1});
    //         }
            
    //         if(node->right && vis.find(node->right)==vis.end()){
    //             vis[node->right]=true;
    //             q.push({node->right,dis+1});
    //         }
            
    //         if(mp.find(node)!=mp.end() && vis.find(mp[node])==vis.end()){
    //             vis[mp[node]]=true;
    //             q.push({mp[node],dis+1});
    //         }
    //     }
        
        
    //     return -1;
    // }
    // vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    //     queue<int>q;
    //     q.push(0);
    //     vector<int>v;
    //     vector<int>vis(V+1,0);
    //     vis[0]=1;
    //     while(!q.empty()){
    //         int node=q.front();
    //         q.pop();
    //         v.push_back(node);
    //         for(auto it:adj[node]){
    //             if(vis[it]==0){
    //                 vis[it]=1;
    //                 q.push(it);
    //             }
    //         }
    //     }
        
    //     return v;
    // }
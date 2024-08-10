    // bool fn(int i,vector<int>adj[],vector<int>&vis,int p){
    //     vis[i]=1;
    //     for(auto it:adj[i]){
    //         if(vis[it]==0){
    //             if(fn(it,adj,vis,i)==true)return true;
    //         }else{
    //             if(it!=p)return true;
    //         }
    //     }
        
    //     return false;
    // }
    // bool isCycle(int V, vector<int> adj[]) {
    //     // Code here
    //     vector<int>vis(V+1,0);
    //     for(int i=0;i<V;i++){
    //         if(vis[i]==0){
    //             if(fn(i,adj,vis,-1)==true)return true;
    //         }
    //     }
    //     return false;
    // }
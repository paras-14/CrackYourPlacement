	// void dfs(int i,vector<int>&vis,vector<vector<int>>& adj,stack<int>&st){
	//     vis[i]=1;
	//     for(auto it:adj[i]){
	//         if(!vis[it])dfs(it,vis,adj,st);
	//     }
	//     st.push(i);
	//     return;
	// }
	// void dfs2(int node,vector<int>Radj[],vector<int>&vis){
	//     vis[node]=1;
	//     for(auto it:Radj[node]){
	//         if(!vis[it])dfs2(it,Radj,vis);
	//     }
	//     return;
	// }
    // int kosaraju(int V, vector<vector<int>>& adj)
    // {
    //     //code here
    //     vector<int>vis(V+1,0);
    //     stack<int>st;
    //     for(int i=0;i<V;i++){
    //         if(!vis[i]){
    //             dfs(i,vis,adj,st);
    //         }
    //     }
    //     vector<int>Radj[V+1];
    //     for(int i=0;i<V;i++){
    //         vis[i]=0;
    //         for(auto it:adj[i]){
    //             Radj[it].push_back(i);
    //         }
    //     }
    //     int cnt=0;
    //     while(!st.empty()){
    //         int node=st.top();
    //         st.pop();
    //         if(!vis[node]){
    //             cnt++;
    //             dfs2(node,Radj,vis);
    //         }
    //     }
        
    //     return cnt;
    // }
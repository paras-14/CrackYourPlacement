    // vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    //     int n=graph.size();
    //     vector<int>ind(n,0);
    //     vector<int>adj[n];
    //     for(int i=0;i<n;i++){
    //         int u=i;
    //         for(int j=0;j<graph[i].size();j++){
    //             adj[graph[i][j]].push_back(i);
    //             ind[i]++;
    //         }
    //     }



    //     queue<int>q;

    //     for(int i=0;i<n;i++){
    //         if(ind[i]==0){
    //             q.push(i);
    //         }
    //     }

    //     vector<int>ans;

    //     while(!q.empty()){
    //         int node=q.front();
    //         ans.push_back(node);
    //         q.pop();
    //         for(auto it:adj[node]){
    //             ind[it]--;
    //             if(ind[it]==0)q.push(it);
    //         }
    //     }

    //     sort(ans.begin(),ans.end());

    //     return ans;
    // }
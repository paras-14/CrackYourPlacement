    // int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
    //     vector<pair<int,int>>adj[n];
    //     for(int i=0;i<n;i++){
    //         int mang=manager[i];
    //         int subordinate=i;

    //         if(mang!=-1)adj[mang].push_back({i,informTime[mang]});
    //     }

    //     queue<pair<int,int>>q;

    //     q.push({headID,0});

    //     int ans=INT_MIN;

    //     while(!q.empty()){
    //         int mang=q.front().first;
    //         int time=q.front().second;
    //         ans=max(ans,time);
    //         q.pop();
    //         for(auto it:adj[mang]){
    //             q.push({it.first,time+it.second});
    //         }
    //     }

    //     return ans;
    // }
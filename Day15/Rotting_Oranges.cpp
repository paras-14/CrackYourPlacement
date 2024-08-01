    // int orangesRotting(vector<vector<int>>& grid) {
    //     int n=grid.size();
    //     int m=grid[0].size();

    //     queue<pair<int,pair<int,int>>>q;
    //     vector<vector<int>>visited(n,vector<int>(m,0));

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(grid[i][j]==2){
    //                 q.push({0,{i,j}});
    //                 visited[i][j]=1;
    //             }
    //         }
    //     }

    //     int rowz[]={-1,0,1,0};
    //     int colz[]={0,-1,0,1};

    //     int ans=0;

    //     while(!q.empty()){
    //         int r=q.front().second.first;
    //         int c=q.front().second.second;
    //         int t=q.front().first;

    //         q.pop();

    //         ans=max(ans,t);

    //         for(int i=0;i<4;i++){
    //             int tr=r+rowz[i];
    //             int tc=c+colz[i];

    //             if(tr>=0 && tc<m && tr<n && tc>=0 && !visited[tr][tc] && grid[tr][tc]==1){
    //                 visited[tr][tc]=1;
    //                 q.push({t+1,{tr,tc}});
    //             }
    //         }
    //     }

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if((grid[i][j]==12 || grid[i][j]==1) && visited[i][j]==0)return -1;
    //         }
    //     }

    //     return ans;
    // }
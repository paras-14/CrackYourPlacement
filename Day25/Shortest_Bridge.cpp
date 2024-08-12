    // int rowz[4]={-1,0,1,0};
    // int colz[4]={0,-1,0,1};
    // int n;
    // void dfs(int r,int c,vector<vector<int>>&vis,queue<pair<int,pair<int,int>>>&q,vector<vector<int>>& grid){
    //     vis[r][c]=1;
    //     q.push({0,{r,c}});
    //     for(int i=0;i<4;i++){
    //         int newR=r+rowz[i];
    //         int newC=c+colz[i];

    //         if(newR<n && newC<n && newR>=0 && newC>=0 && grid[newR][newC]==1 && !vis[newR][newC]){
    //             dfs(newR,newC,vis,q,grid);
    //         }
    //     }
    // }
    // int shortestBridge(vector<vector<int>>& grid) {
    //     queue<pair<int,pair<int,int>>>q;
    //     n=grid.size();
    //     vector<vector<int>>vis(n,vector<int>(n,0));
    //     bool flag=false;
    //     int cnt=0;
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             if(grid[i][j]==1 && q.size()==0){
    //                 dfs(i,j,vis,q,grid);
    //             }
    //         }
    //     }

    //     while(!q.empty()){
    //         int r=q.front().second.first;
    //         int c=q.front().second.second;

    //         int dist=q.front().first;
    //         q.pop();

    //         for(int i=0;i<4;i++){
    //             int newR=r+rowz[i];
    //             int newC=c+colz[i];

    //             if(newR<n && newC<n && newR>=0 && newC>=0 && grid[newR][newC]==0 && !vis[newR][newC]){
    //                 vis[newR][newC]=1;
    //                 q.push({dist+1,{newR,newC}});
    //             }

    //             if(newR<n && newC<n && newR>=0 && newC>=0 && grid[newR][newC]==1 && !vis[newR][newC]){
    //                 return dist;
    //             }
    //         }

    //     }

    //     return -1;
    // }
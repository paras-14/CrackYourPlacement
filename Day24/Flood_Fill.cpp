    // vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    //     int n=image.size();
    //     int m=image[0].size();
    //     vector<vector<int>>visited(n,vector<int>(m,0));
    //     queue<pair<int,int>>q;
    //     q.push({sr,sc});
    //     int start=image[sr][sc];
    //     visited[sr][sc]=1;
    //     int rowz[]={-1,0,1,0};
    //     int colz[]={0,1,0,-1};
    //     while(!q.empty()){
    //         int r=q.front().first;
    //         int c=q.front().second;
    //         image[r][c]=color;
    //         q.pop();
    //         for(int i=0;i<4;i++){
    //             int tr=r+rowz[i];
    //             int tc=c+colz[i];
    //             if(tr>=0 && tc>=0 && tr<n && tc<m && !visited[tr][tc] && image[tr][tc]==start){
    //                 visited[tr][tc]=1;
    //                 q.push({tr,tc});
    //             }
    //         }
    //     }

    //     return image;
    // }
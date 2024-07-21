    // int n,m;
    // bool flag=false;
    // void dfs(vector<vector<char>>& board,vector<vector<int>>&vis,string temp,int r,int c,string word,int ind){
    //     int rowz[4]={-1,0,1,0};
    //     int colz[4]={0,-1,0,1};

    //     vis[r][c]=1;

    //     if(temp==word){
    //         flag=true;
    //         return ;
    //     }

    //     if(ind==word.size())return ;

    //     for(int i=0;i<4;i++){
    //         int tr=r+rowz[i];
    //         int tc=c+colz[i];

    //         if(tr>=0 && tr<n && tc>=0 && tc<m && !vis[tr][tc] && board[tr][tc]==word[ind]){
    //             dfs(board,vis,temp+board[tr][tc],tr,tc,word,ind+1);
    //         }
    //     }

    //     vis[r][c]=0;

    //     return ;
    // }
    // bool exist(vector<vector<char>>& board, string word) {
    //     n=board.size();
    //     m=board[0].size();

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(board[i][j]==word[0]){
    //                 string temp(1,word[0]);
    //                 vector<vector<int>>vis(n,vector<int>(m,0));
    //                 dfs(board,vis,temp,i,j,word,1);
    //             }
    //         }
    //     }


    //     return flag;
    // }
    // int n,m;
    // int fn(vector<vector<int>>& board,int num,int r,int c){
    //     int rowz[8]={-1,-1,-1,1,1,1,0,0};
    //     int colz[8]={-1,0,1,-1,0,1,-1,1};

    //     int cnt=0;

    //     for(int i=0;i<8;i++){
    //             int tr=r+rowz[i];
    //             int tc=c+colz[i];

    //             if(tr<n && tr>=0 && tc<m && tc>=0 && (board[tr][tc]==num || board[tr][tc]==2)){
    //                 cnt++;
    //             }
    //     }

    //     return cnt;
    // }
    // void gameOfLife(vector<vector<int>>& board) {
    //     n=board.size();
    //     m=board[0].size();
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if((board[i][j]==1 || board[i][j]==2) && (fn(board,1,i,j)<2 || fn(board,1,i,j)>3) )board[i][j]=2;
    //             else if((board[i][j]==0 || board[i][j]==3) && fn(board,1,i,j)==3)board[i][j]=3;
    //         }
    //     }

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(board[i][j]==2)board[i][j]=0;
    //             if(board[i][j]==3)board[i][j]=1;
    //         }
    //     }
    // }


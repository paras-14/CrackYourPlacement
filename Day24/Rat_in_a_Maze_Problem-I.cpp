    // int n;
    
    // int rowz[4]={-1,0,1,0};
    // int colz[4]={0,-1,0,1};
    // vector<char>dir={'U','L','D','R'};
    
    // void fn(int r,int c,vector<vector<int>>&vis,vector<vector<int>> &mat,vector<string>&ans,string curr){
    //     vis[r][c]=1;
        
    //     if(r==n-1 && c==n-1){
    //         ans.push_back(curr);
    //     }else{
    //         for(int k=0;k<4;k++){
    //             int newR=r+rowz[k];
    //             int newC=c+colz[k];
                
    //             if(newR>=0 && newR<n && newC>=0 && newC<n && !vis[newR][newC] && mat[newR][newC]!=0){
    //                 fn(newR,newC,vis,mat,ans,curr+dir[k]);
    //             }
    //         }
    //     }
    //     vis[r][c]=0;
        
    // }
    // vector<string> findPath(vector<vector<int>> &mat) {
    //     // Your code goes here
    //     n=mat.size();
    //     if(mat[0][0]==0)return {"-1"};
    //     vector<vector<int>>vis(n,vector<int>(n,0));
    //     vector<string>ans;
    //     fn(0,0,vis,mat,ans,"");
    //     return ans;
    // }
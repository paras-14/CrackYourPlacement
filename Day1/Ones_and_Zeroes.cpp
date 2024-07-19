    // int fn(int i,int len,vector<string>& strs,int m,int n,vector<vector<vector<int>>>&dp){
    //     if(m<0 || n<0)return -1e9;
    //     if(i>=len){
    //         return 0;
    //     }

    //     if(dp[m][n][i]!=-1)return dp[m][n][i];

    //     int cnt1=0;
    //     int cnt0=0;

    //     for(int k=0;k<strs[i].length();k++){
    //         if(strs[i][k]=='1')cnt1++;
    //         if(strs[i][k]=='0')cnt0++;
    //     }

    //     int take=1+fn(i+1,len,strs,m-cnt0,n-cnt1,dp);
    //     int notTake=fn(i+1,len,strs,m,n,dp);

    //     return dp[m][n][i]=max(take,notTake);
    // }
    // int findMaxForm(vector<string>& strs, int m, int n) {
    //     int len=strs.size();
    //     vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(len+1,-1)));
    //     return fn(0,len,strs,m,n,dp);
    // }
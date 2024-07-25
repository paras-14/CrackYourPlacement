    // int fn(int i,int j,string s, string t,vector<vector<int>>&dp){
    //     if(i<0 && j>=0)return 0;
    //     if(j<0)return 1;

    //     if(dp[i][j]!=-1)return dp[i][j];

    //     int e=0;
    //     int ne=0;

    //     if(s[i]==t[j])e=(fn(i-1,j-1,s,t,dp) + fn(i-1,j,s,t,dp));
    //     else{
    //         ne=fn(i-1,j,s,t,dp);
    //     }

    //     return dp[i][j]=e+ne;
    // }
    // int numDistinct(string s, string t) {
    //     int n=s.length();
    //     int m=t.length();
    //     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    //     return fn(n-1,m-1,s,t,dp);
    // }
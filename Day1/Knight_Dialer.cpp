    // int mod=1e9+7;
    // unordered_map<int,vector<int>>mp; 
    // int fn(int i,int n,vector<vector<int>>&dp){
    //     if(n==1)return 1;

    //     if(dp[i][n]!=-1)return dp[i][n]%mod;

    //     long long ans=0;
    //     for(auto it:mp[i]){
    //         ans=(ans+fn(it,n-1,dp))%mod;
    //     }

    //     return dp[i][n]=ans%mod;
    // }
    // int knightDialer(int n) {
    //     mp[0]={4,6};
    //     mp[1]={6,8};
    //     mp[2]={7,9};
    //     mp[3]={4,8};
    //     mp[4]={3,9,0};
    //     mp[5]={};
    //     mp[6]={1,7,0};
    //     mp[7]={2,6};
    //     mp[8]={1,3};
    //     mp[9]={4,2};

    //     vector<vector<int>>dp(10,vector<int>(5001,-1));

    //     int ans=0;
    //     for(int i=0;i<10;i++){
    //         ans=(ans+fn(i,n,dp))%mod;
    //     }
    //     return ans%mod;
    // }
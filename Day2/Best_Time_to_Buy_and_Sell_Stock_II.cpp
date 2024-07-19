    // int n;
    // int fn(vector<int>& prices,int i,int flag,vector<vector<int>>&dp){
    //     if(i==n)return 0;
    //     int buy=0;
    //     int sell=0;
    //     if(dp[i][flag]!=-1)return dp[i][flag];
    //     if(flag==0){
    //         buy=max(-prices[i]+fn(prices,i+1,!flag,dp),fn(prices,i+1,flag,dp));
    //     }else{
    //         sell=max(prices[i]+fn(prices,i+1,!flag,dp),fn(prices,i+1,flag,dp));
    //     }

    //     return dp[i][flag]=max(buy,sell);
    // }
    // int maxProfit(vector<int>& prices) {
    //     n=prices.size();
    //     vector<vector<int>>dp(n+1,vector<int>(3,-1));
    //     return fn(prices,0,0,dp);
    // }
    // int subarraySum(vector<int>& nums, int k) {
    //     // if(k==0)return 0;
    //     int n=nums.size();
    //     int sum=0;
    //     unordered_map<int,int>mp;
    //     int res=0;
    //     mp[0]=1;
    //     for(int i=0;i<n;i++){
    //         sum+=nums[i];
    //         int req=sum-k;
    //         cout<<sum<<" "<<req<<" ";
    //         if(mp.find(req)!=mp.end())res+=mp[req];
    //         mp[sum]++;
    //     }
    //     return res;
    // }
    // int subarraysDivByK(vector<int>& nums, int k) {
    //     int n=nums.size();
    //     int res=0;
    //     int pref=0;
    //     unordered_map<int,int>mp;
    //     mp[0]=1;
    //     for(int i=0;i<n;i++){
    //         pref=pref+nums[i];
    //         int rem=((pref%k)+k)%k;
    //         // int rem=(pref%k);
    //         res+=mp[rem];
    //         mp[rem]++;
    //     }

    //     // cout<<((-9%k)+k)%k<<endl;
    //     // cout<<(-9%k)<<endl;

    //     return res;
    // }
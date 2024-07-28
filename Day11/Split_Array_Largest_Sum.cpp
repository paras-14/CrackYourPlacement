    // int cntGrp(vector<int>& nums,int mid){
    //     int n=nums.size();
    //     int sum=0;
    //     int cnt=1;
    //     for(int i=0;i<n;i++){
    //         if(sum+nums[i]<=mid){
    //             sum+=nums[i];
    //         }else{
    //             cnt++;
    //             sum=nums[i];
    //         }
    //     }

    //     return cnt;
    // }
    // int splitArray(vector<int>& nums, int k) {
    //     int n=nums.size();
    //     int lo=*max_element(nums.begin(),nums.end());
    //     int hi=accumulate(nums.begin(),nums.end(),0);
    //     int ans=INT_MAX;
    //     while(lo<=hi){
    //         int mid=(lo+hi)/2;
    //         int temp=cntGrp(nums,mid);
    //         cout<<mid<<" "<<temp<<endl;
    //         if(temp<=k){
    //             ans=min(ans,mid);
    //             hi=mid-1;
    //         }else{  
    //             lo=mid+1;
    //         }
    //     }

    //     return lo;
    // }
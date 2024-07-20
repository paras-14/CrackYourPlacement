    // vector<vector<int>> fourSum(vector<int>& nums, int target) {
    //     sort(nums.begin(),nums.end());
    //     int n=nums.size();
    //     vector<vector<int>>ans;
    //     for(int i=0;i<n-1;i++){
    //         if(i>0 && nums[i]==nums[i-1])continue;
    //         for(int j=i+1;j<n;j++){
    //             if(j-1!=i && nums[j]==nums[j-1])continue;
    //             int lo=j+1;
    //             int hi=n-1;

    //             while(lo<hi && lo<n){
    //                 long long req=(long long)nums[i]+(long long)nums[j]+(long long)nums[lo]+(long long)nums[hi];
    //                 if(req>target){
    //                     hi--;
    //                 }else if(req<target){
    //                     lo++;
    //                 }else{
    //                     // cout<<nums[i]<<" "<<nums[j]<<" "<<nums[lo]<<" "<<nums[hi]<<endl;
    //                     ans.push_back({nums[i],nums[j],nums[lo],nums[hi]});
    //                     int lastL=nums[lo];
    //                     int lastH=nums[hi];

    //                     while(lo<hi && lastL==nums[lo]){
    //                         lo++;
    //                     }
    //                     while(lo<hi && lastH==nums[hi]){
    //                         hi--;
    //                     }
    //                 }
    //             }
    //         }
    //     }


    //     return ans;
    // }
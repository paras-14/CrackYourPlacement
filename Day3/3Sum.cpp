    // vector<vector<int>> threeSum(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
    //     int n=nums.size();
    //     vector<vector<int>>v;
    //     for(int i=0;i<n;i++){
    //         if(i>0 && nums[i]==nums[i-1])continue;
    //         int j=i+1;
    //         int k=n-1;
    //         while(j<k){
    //             int sum=nums[i]+nums[j]+nums[k];
    //             if(sum>0)k--;
    //             else if(sum<0)j++;
    //             else{
    //                 v.push_back({nums[i],nums[j],nums[k]});
    //                 int temp1=nums[j];
    //                 int temp2=nums[k];
    //                 while(j<k && nums[j]==temp1)j++;
    //                 while(k>j && nums[k]==temp2)k--;
    //             }
    //         }
    //     }     
    //     return v;
    // }
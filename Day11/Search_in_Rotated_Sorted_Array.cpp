    // int search(vector<int>& nums, int target) {
    //     int s=0;
    //     int e=nums.size()-1;
    //     int ans=-1;
    //     while(s<=e){
    //       int m=s+(e-s)/2;
    //       if(nums[m]==target){
    //          ans=m;
    //          break;
    //       }
    //         //left is Sorted
    //       else if(nums[s]<=nums[m]){
    //          if(nums[s]<=target && target<=nums[m]){
    //             e=m-1;
    //          }else{
    //             s=m+1;
    //          }
    //       }
            
    //         //right is sorted
    //       else{
    //          if(nums[m]<=target && target<=nums[e]){
    //             s=m+1;
    //          }else{
    //             e=m-1;
    //          }
    //       }
    //     }
        
        
    //     return ans;
    // }
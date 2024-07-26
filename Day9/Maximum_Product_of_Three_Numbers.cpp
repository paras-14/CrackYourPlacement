    // int maxThree(vector<int>nums){
    //     int n=nums.size();
    //     long long one=INT_MIN;
    //     int ind1=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]>one){
    //             one=nums[i];
    //             ind1=i;
    //         }
    //     }
    //     nums[ind1]+=3000;
    //     long long two=INT_MIN;
    //     int ind2=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]>two && nums[i]<=one){
    //             two=nums[i];
    //             ind2=i;
    //         }
    //     }
    //     nums[ind2]+=3000;
    //     long long three=INT_MIN;
    //     int ind3=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]>three && nums[i]<=two){
    //             three=nums[i];
    //             ind3=i;
    //         }
    //     }
    //     return one*two*three;
    // }

    // int minThree(vector<int>nums){
    //     int n=nums.size();
    //     long long one=INT_MIN;
    //     int ind1=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]>one){
    //             one=nums[i];
    //             ind1=i;
    //         }
    //     }
    //     nums[ind1]+=3000;
    //     long long two=one;
    //     int ind2=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]<two){
    //             two=nums[i];
    //             ind2=i;
    //         }
    //     }
    //     nums[ind2]-=3000;
    //     long long three=INT_MAX;
    //     int ind3=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]<=three && nums[i]>=two){
    //             three=nums[i];
    //             ind3=i;
    //         }
    //     }

    //     return one*two*three;
    // }


    // int maximumProduct(vector<int>& nums) {
    //     return max(maxThree(nums),minThree(nums));
    // }
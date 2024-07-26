    // vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
    //     //code here  
    //     long long tp=1;
    //     long long cnt=0;
    //     long long ind=0;
    //     for(int i=0;i<n;i++){
    //         if(nums[i]==0){
    //             cnt++;
    //             ind=i;
    //         }
    //         if(nums[i]==0)continue;
    //         if(cnt>1)break;
    //         tp*=nums[i];
    //     }
    //     vector<long long>ans(n,0);
    //     if(cnt>1)return ans;
    //     if(cnt==1){
    //         ans[ind]=tp;
    //         return ans;
    //     }
    //     for(int i=0;i<n;i++){
    //         ans[i]=(tp/nums[i]);
    //     }
        
    //     return ans;
    // }
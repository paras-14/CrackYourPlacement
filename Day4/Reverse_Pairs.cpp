    // int cnt=0;
    // void merge(vector<int>& nums,int lo,int mid,int hi){
    //     int left=lo;
    //     int right=mid+1;
    //     vector<int>temp;
    //     int x=lo;
    //     int y=mid+1;
    //     for(int m=x;m<=mid;m++){
    //         while(y<=hi && nums[m]>2*(long long)nums[y])y++;
    //         cnt+=(y-(mid+1));
    //     }
    //     while(left<=mid && right<=hi){
    //         if(nums[left]<=nums[right])temp.push_back(nums[left++]);
    //         else{   
    //             temp.push_back(nums[right++]);
    //         }
    //     }

    //     while(left<=mid)temp.push_back(nums[left++]);
    //     while(right<=hi)temp.push_back(nums[right++]);

    //     for(int k=lo;k<=hi;k++){
    //         nums[k]=temp[k-lo];
    //     }
    // }
    // void mergeSort(vector<int>& nums,int lo,int hi){
    //     if(lo>=hi)return;
    //     int mid=(lo+hi)/2;
    //     mergeSort(nums,lo,mid);
    //     mergeSort(nums,mid+1,hi);
    //     merge(nums,lo,mid,hi);
    // }
    // int reversePairs(vector<int>& nums) {
    //     int n=nums.size();
    //     mergeSort(nums,0,n-1);

    //     for(int i=0;i<n;i++){
    //         cout<<nums[i]<<" ";
    //     }

    //     return cnt;
    // }
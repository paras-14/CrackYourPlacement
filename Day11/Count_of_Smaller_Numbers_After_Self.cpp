    // int n;
    // int cnt=0;
    // void merge(vector<pair<int,int>>&p,int lo,int mid,int hi,vector<int>&v){
    //     int left=lo;
    //     int right=mid+1;

    //     vector<pair<int,int>>temp;
    //     while(left<=mid && right<=hi){
    //         if(p[left].first<=p[right].first){
    //             temp.push_back(p[right]);
    //             right++;
    //         }else{
    //             v[p[left].second]+=hi-right+1;
    //             temp.push_back(p[left]);
    //             left++;
    //         }
    //     }

    //     while(left<=mid)temp.push_back(p[left++]);
    //     while(right<=hi)temp.push_back(p[right++]);

    //     for(int z=lo;z<=hi;z++){
    //         p[z]=temp[z-lo];
    //     }
        
    // }
    // void mergeSort(vector<pair<int,int>>&p,int lo,int hi,vector<int>&v){
    //     if(lo>=hi)return ;
    //     int mid=(lo+hi)/2;
    //     mergeSort(p,lo,mid,v);
    //     mergeSort(p,mid+1,hi,v);
    //     merge(p,lo,mid,hi,v);
    // }
    // vector<int> countSmaller(vector<int>& nums) {
    //     n=nums.size();
    //     int lo=0;
    //     int hi=n-1;
    //     vector<int>v(n,0);
    //     vector<pair<int,int>>p(n);
    //     for(int i=0;i<n;i++){
    //         p[i]=make_pair(nums[i],i);
    //     }
    //     mergeSort(p,lo,hi,v);


    //     return v;
    // }
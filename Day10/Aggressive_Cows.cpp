    // bool helpr(int mid,vector<int> &stalls,int k){
    //     int cnt=1;
    //     int lastCow=stalls[0];
    //     for(int i=1;i<stalls.size();i++){
    //         if(stalls[i]-lastCow>=mid){
    //             cnt++;
    //             lastCow=stalls[i];
    //         }
    //     }
        
    //     if(cnt>=k){
    //         return true;
    //     }
        
    //     return false;
    // }

    // int solve(int n, int k, vector<int> &stalls) {
    //     sort(stalls.begin(),stalls.end());
    //     int s=1;
    //     int e=stalls[n-1];
    //     int ans=INT_MIN;
    //     while(s<=e){
    //         int mid=s+(e-s)/2;
    //         if(helpr(mid,stalls,k)){
    //             ans=max(ans,mid);
    //             s=mid+1;
    //         }else{
    //             e=mid-1;
    //         }
    //     }
        
        
    //     return ans;
    // }
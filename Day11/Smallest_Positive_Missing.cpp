    // int missingNumber(int arr[], int n) 
    // { 
    //     // Your code here
    //     int maxi=INT_MIN;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]<=0)arr[i]=0;
    //         maxi=max(maxi,arr[i]);
    //     }
    //     maxi=maxi+1;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]>0){
    //             int ind=arr[i]-1;
    //             if(ind<n && ind>=0)arr[ind]+=maxi;
    //         }
    //     }
        
    //     for(int i=0;i<n;i++){
    //         if(arr[i]<maxi)return i+1;
    //     }
        
    //     return n+1;
    // } 



// we need to write int ind=arr[i]%maxi-1;

// because this test case will fail 

// 4
// 3 4 -1 1
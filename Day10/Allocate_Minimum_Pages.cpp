// int maxi(int A[],int n){
//         int ans=INT_MIN;
//         for(int i=0;i<n;i++){
//             if(ans<A[i]){
//                 ans=A[i];
//             }
//         }
        
//         return ans;
//     }
    
//     int sum(int A[],int n){
//         int ans=0;
//         for(int i=0;i<n;i++){
//             ans+=A[i];
//         }
        
//         return ans;
//     }
    
//     int helpr(int mid,int A[],int n){
//         int studs=1;
//         int pages=0;
//         for(int i=0;i<n;i++){
//             if(pages+A[i]<=mid){
//                 pages+=A[i];
//             }else{
//                 studs++;
//                 pages=A[i];
//             }
//         }
        
//         return studs;
//     }
    
//     int findPages(int A[], int N, int M) 
//     {
//         if(M>N) return -1;
//         int s=maxi(A,N);
//         int e=sum(A,N);
        
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             int students=helpr(mid,A,N);
            
//             if(students>M){
//                 s=mid+1;
//             }else{
//                 e=mid-1;
//             }
//         }
        
//         return s;
//     }
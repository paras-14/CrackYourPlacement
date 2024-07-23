    // void fn(vector<int> &arr,int i,int n,set<vector<int>>&st){
    //     if(i==n){
    //         st.insert(arr);
    //         return;
    //     }
    //     for(int j=i;j<n;j++){
    //         swap(arr[i],arr[j]);
    //         fn(arr,i+1,n,st);
    //         swap(arr[i],arr[j]);
    //     }
    // }
    // vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
    //     // code here
    //     set<vector<int>>st;
    //     fn(arr,0,n,st);
    //     vector<vector<int>>ans;
    //     for(auto it:st){
    //         ans.push_back(it);
    //     }
    //     return ans;
    // }



    // another stl way is 

    

    //  vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
    //    sort(arr.begin(),arr.end());
    //    vector<vector<int>>ans;
    //    ans.push_back(arr);
    //    while(next_permutation(arr.begin(),arr.end())){
    //        ans.push_back(arr);
    //    }
    //    return ans;
    // }
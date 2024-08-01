    // int sumSubarrayMins(vector<int>& arr) {
    //     int n=arr.size();
    //     vector<int>left(n);
    //     vector<int>right(n);
    //     int MOD=1e9+7;
    //     stack<int>st1;
    //     stack<int>st2;
    //     for(int i=0;i<n;i++){
    //         while(!st1.empty() && arr[st1.top()]>arr[i]){
    //             st1.pop();
    //         }

    //         if(st1.empty())left[i]=i;
    //         else left[i]=i-st1.top()-1;

    //         st1.push(i);
    //     }


    //     for(int i=n-1;i>=0;i--){
    //         while(!st2.empty() && arr[st2.top()]>=arr[i]){
    //             st2.pop();
    //         }

    //         if(st2.empty())right[i]=n-i-1;
    //         else right[i]=st2.top()-i-1;

    //         st2.push(i);
    //     }

    //     long long res=0;
    //     for(int i=0;i<left.size();i++){
    //         long long prod = ((left[i]+1)*(right[i]+1))%MOD;
    //         prod = (prod*arr[i])%MOD;
    //         res = (res + prod)%MOD;
    //     }

    //     return res%MOD;
    // }
    // string removeDuplicates(string s, int k) {
    //     int n=s.length();
    //     if(n<k)return s;
    //     stack<pair<char,int>>st;
    //     int cnt=0;
    //     for(int i=0;i<n;i++){
    //         if(st.empty() || st.top().first!=s[i]){
    //             st.push({s[i],1});
    //         }else{
    //             auto it=st.top();
    //             st.pop();
    //             if(it.second+1!=k)st.push({s[i],it.second+1});
    //         }
    //     }

    //     string ans="";

    //     while(!st.empty()){
    //         auto it=st.top();
    //         st.pop();
    //         for(int i=0;i<it.second;i++){
    //             ans.push_back(it.first);
    //         }
    //     }
    //     reverse(ans.begin(),ans.end());
    //     return ans;
    // }
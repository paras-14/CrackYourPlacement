    // vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    //     int n=nums2.size();
    //     vector<int>nge(n,-1);
    //     stack<int>st;
    //     unordered_map<int,int>mp;
    //     for(int i=n-1;i>=0;i--){
    //         mp[nums2[i]]=i;
    //         while(!st.empty() && nums2[i]>=nums2[st.top()]){
    //             st.pop();
    //         }

    //         if(st.empty())nge[i]=-1;
    //         else nge[i]=st.top();

    //         st.push(i);
    //     }

    //     vector<int>ans;

    //     for(auto it:nums1){
    //         int ok=nge[mp[it]];
    //         if(ok==-1)ans.push_back(-1);
    //         else ans.push_back(nums2[ok]);
    //     }

    //     return ans;
    // }
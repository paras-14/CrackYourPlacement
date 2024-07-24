    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     vector<string>temp=strs;
    //     vector<vector<string>>ans;
    //     map<string,vector<int>>mp;
    //     int n=strs.size();
    //     for(int i=0;i<n;i++){
    //         sort(strs[i].begin(),strs[i].end());
    //         mp[strs[i]].push_back(i);
    //     }
    //     for(auto it:mp){
    //         cout<<it.first<<" ";
    //         vector<string>ok;
    //         for(int i=0;i<it.second.size();i++){
    //             ok.push_back(temp[it.second[i]]);
    //         }
    //         ans.push_back(ok);
    //     }

    //     return ans;
    // }
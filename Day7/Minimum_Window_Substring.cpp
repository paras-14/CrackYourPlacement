    // string minWindow(string s, string t) {
    //     int n=s.length();
    //     int m=t.length();
    //     if(n<m)return "";
    //     unordered_map<char,int>mp;
    //     int i=0;
    //     int j=0;
    //     for(int i=0;i<m;i++){
    //         mp[t[i]]++;
    //     }
    //     int cnt=mp.size();
    //     int ans=INT_MAX;
    //     int start=0;
    //     while(j<n){
    //         mp[s[j]]--;
    //         if(mp[s[j]]==0)cnt--;
    //         if(cnt==0){
    //             while(cnt==0){
    //                 if(ans>j-i+1){
    //                     ans=j-i+1;
    //                     start=i;
    //                 }
    //                 mp[s[i]]++;
    //                 if(mp[s[i]]>0)cnt++;
    //                 i++;
    //             }
    //         }
    //         j++;
    //     }

    //     if(ans!=INT_MAX)return s.substr(start,ans);
    //     return "";
    // }
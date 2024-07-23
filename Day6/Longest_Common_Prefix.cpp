    // string longestCommonPrefix(vector<string>& strs) {
    //     int n=strs.size();
    //     int MC=INT_MAX;
    //     for(int k=0;k<n-1;k++){
    //         string s1=strs[k];
    //         string s2=strs[k+1];

    //         int i=0;
    //         int j=0;

    //         int cnt=0;

    //         while(i<s1.length() && j<s2.length() && s1[i]==s2[j] && cnt<MC){
    //             i++;
    //             j++;
    //             cnt++;
    //         }

    //         if(cnt==0){
    //             MC=0;
    //             break;
    //         }else{
    //             MC=cnt;
    //         }
    //     }


    //     return strs[0].substr(0,MC);
    // }
    // string reverseWords(string s) {
    //     int n=s.length();
    //     int i=0;
    //     int j=0;
    //     string ans="";
    //     while(i<n){
    //         while(i<n && s[i]==' ')i++;
    //         if(i>=n)break;
    //         j=i+1;
    //         while(j<n && s[j]!=' ')j++;
    //         string temp=s.substr(i,j-i);
    //         if(ans.length()==0)ans=temp;
    //         else ans=temp+" "+ans;
    //         i=j+1;
    //     }

    //     return ans;
    // }
    // bool isNumber(string s) {
    //     int n=s.length();
    //     int dotseen=0;
    //     int eseen=0;
    //     int digseen=0;
    //     int plusminusseen=0;
    //     for(int i=0;i<n;i++){
    //         if(isdigit(s[i])){
    //             digseen++;
    //         }else if(s[i]=='+' || s[i]=='-'){
    //             if(i==n-1)return false;
    //             plusminusseen++;
    //             if(plusminusseen>2)return false;
    //             if(i>0 && (s[i-1]!='e' && s[i-1]!='E')){
    //                 return false;
    //             }
    //         }else if(s[i]=='.'){
    //             if(eseen>0 || dotseen>0)return false;
    //             if(digseen==0 && i==n-1)return false;
    //             dotseen++;
    //         }else if(s[i]=='e' || s[i]=='E'){
    //             if(i==n-1 || i==0 || eseen>0 || digseen==0)return false;
    //             eseen++;
    //         }else{
    //             return false;
    //         }
    //     }

    //     return true;
    // }
    // bool backspaceCompare(string s, string t) {
    //     int n=s.length();
    //     int m=t.length();

    //     stack<char>st1;
    //     stack<char>st2;

    //     for(int i=0;i<n;i++){
    //         if(s[i]!='#')st1.push(s[i]);
    //         else if(!st1.empty() && s[i]=='#')st1.pop();
    //     }

    //     for(int i=0;i<m;i++){
    //         if(t[i]!='#')st2.push(t[i]);
    //         else if(!st2.empty() && t[i]=='#')st2.pop();
    //     }

    //     if(st1.size()!=st2.size())return false;

    //     while(!st1.empty()){
    //         if(st1.top()==st2.top()){
    //             st1.pop();
    //             st2.pop();
    //         }else{
    //             return false;
    //         }
    //     }

    //     return true;
    // }
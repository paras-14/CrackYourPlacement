    // bool isValid(string s) {
    //     stack<char>st;
    //     int n=s.length();
    //     for(int i=0;i<n;i++){
    //         if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
    //         else{
    //             if(!st.empty() && s[i]==')'){
    //                 if(st.top()=='(')st.pop();
    //                 else return false;
    //             }
    //             else if(!st.empty() && s[i]=='}'){
    //                 if(st.top()=='{')st.pop();
    //                 else return false;
    //             }
    //             else if(!st.empty() && s[i]==']'){
    //                 if(st.top()=='[')st.pop();
    //                 else return false;
    //             }
    //             else{
    //                 return false;
    //             }
    //         }
    //     }
    //     return st.size()==0;
    // }
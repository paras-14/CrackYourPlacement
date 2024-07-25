    // int calculate(string s) {
    //     int n=s.length();
    //     char sign='+';
    //     stack<int>st;
    //     int temp=0;
    //     int res=0;
    //     for(int i=0;i<n;i++){
    //         if(isdigit(s[i])){
    //             temp=temp*10+(s[i]-'0');
    //         }
    //         if((!isdigit(s[i]) && !isspace(s[i])) || i==s.size()-1){
    //             if(sign=='+'){
    //                 st.push(temp);
    //             }else if(sign=='-'){
    //                 st.push(-temp);
    //             }else{
    //                 int num;
    //                 if(sign=='*')num=temp*st.top();
    //                 else num=st.top()/temp;
    //                 st.pop();
    //                 st.push(num);
    //             }

    //             temp=0;
    //             sign=s[i];
    //         }
    //     }

    //     while(!st.empty()){
    //         res+=st.top();
    //         st.pop();
    //     }

    //     return res;
    // }
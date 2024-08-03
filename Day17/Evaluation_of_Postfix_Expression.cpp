    // int evaluatePostfix(string S)
    // {
    //     // Your code here
    //     int n=S.length();
    //     stack<int>st;
    //     for(int i=0;i<n;i++){
    //         if(S[i]>='0' && S[i]<='9'){
    //             st.push(S[i]-'0');
    //         }else{
    //             int a,b;
    //             if(!st.empty()){
    //                 b=st.top();
    //                 st.pop();
    //             }
    //             if(!st.empty()){
    //                 a=st.top();
    //                 st.pop();
    //             }
                
    //             // cout<<a<<" "<<b<<S[i]<<endl;
                
    //             if(S[i]=='+'){
    //                 st.push(a+b);
    //             }
                
    //             if(S[i]=='-'){
    //                 st.push(a-b);
    //             }
                
    //             if(S[i]=='*'){
    //                 st.push(a*b);
    //             }
                
    //             if(S[i]=='/'){
    //                 st.push(a/b);
    //             }
    //         }
    //     }
        
    //     if(!st.empty() && st.size()==1)return st.top();
        
    //     return -1;
    // }
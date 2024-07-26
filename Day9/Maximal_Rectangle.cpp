    // int fn(vector<int>&rows){
    //     int n=rows.size();
    //     stack<int>st;
    //     int ans=INT_MIN;
    //     for(int i=0;i<=rows.size();i++){
    //         while(!st.empty() && (i==n || rows[i]<=rows[st.top()])){
    //             int height=rows[st.top()];
    //             st.pop();
    //             int width=0;
    //             if(st.empty())width=i;
    //             else width=i-st.top()-1;
    //             ans=max(ans,height*width);
    //         }
    //         st.push(i);
    //     }

    //     return ans;
    // }
    // int maximalRectangle(vector<vector<char>>& matrix) {
    //     int n=matrix.size();
    //     int m=matrix[0].size();

    //     vector<int>newRow(m,0);

    //     int ans=INT_MIN;

    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
    //             if(matrix[i][j]=='0')newRow[j]=0;
    //             else newRow[j]+=(matrix[i][j]-'0');
    //         }

    //         ans=max(ans,fn(newRow));
    //     }

        

    //     return ans;
    // }
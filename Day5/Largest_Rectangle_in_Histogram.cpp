    // int n;
    // vector<int>nextSmallerElem(vector<int>& heights){
    //     stack<int>st;
    //     st.push(-1);
    //     n=heights.size();
    //     vector<int>temp1(n,0);
    //     for(int i=n-1;i>=0;i--){
    //         while(st.top()!=-1 && heights[i]<=heights[st.top()]){
    //             st.pop();
    //         }
    //         temp1[i]=st.top();
    //         st.push(i);
    //     }
    //     return temp1;
    // }
    // vector<int>prevSmallerElem(vector<int>& heights){
    //     stack<int>st;
    //     st.push(-1);
    //     vector<int>temp1(n,0);
    //     for(int i=0;i<n;i++){
    //         while(st.top()!=-1 && heights[i]<=heights[st.top()]){
    //             st.pop();
    //         }
    //         temp1[i]=st.top();
    //         st.push(i);
    //     }
    //     return temp1;
    // }
    // int largestRectangleArea(vector<int>& heights) {

    //     heights.push_back(0);
    //     heights.insert(heights.begin(),0);

    //     vector<int>nextSmall=nextSmallerElem(heights);
    //     vector<int>prevSmall=prevSmallerElem(heights);

    //     int maxi=INT_MIN;

    //     for(int i=1;i<n;i++){
    //         maxi=max(maxi,(nextSmall[i]-prevSmall[i]-1)*heights[i]);
    //     }

    //     return maxi;
    // }





    // optimised


    //     int n=nums.size();
    //     stack<int>st;
    //     st.push(-1);
    //     int maxi=INT_MIN;
    //     for(int i=0;i<=n;i++){
    //         while(st.top()!=-1 && (i==n || nums[i]<nums[st.top()])){
    //             int height=nums[st.top()];
    //             st.pop();
    //             int width=i-st.top()-1;
    //             maxi=max(maxi,height*width);
    //         }

    //         st.push(i);
    //     }

    //     return maxi;
    
    // int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
    //     int n=points.size();
    //     priority_queue<pair<int,int>>pq;
    //     pq.push({points[0][1]-points[0][0],points[0][0]});
    //     int ans=INT_MIN;
    //     for(int i=1;i<n;i++){
    //         int xj=points[i][0];
    //         int yj=points[i][1];

    //         while(!pq.empty() && xj-pq.top().second>k)pq.pop();
    //         if(!pq.empty())ans=max(ans,xj+yj+pq.top().first);
    //         pq.push({yj-xj,xj});
    //     }
    //     return ans;
    // }
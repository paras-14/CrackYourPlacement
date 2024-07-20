    // int maxScore(vector<int>& cardPoints, int k) {
    //     int n=cardPoints.size();
    //     int ts=accumulate(cardPoints.begin(),cardPoints.end(),0);
    //     int sum=0;
    //     int mini=INT_MAX;
    //     int j=0;
    //     for(int i=0;i<n;i++){
    //         if(i<n-k)sum+=cardPoints[i];
    //         else{
    //             mini=min(mini,sum);
    //             sum-=cardPoints[j];
    //             j++;
    //             sum+=cardPoints[i];
    //         }
    //     }

    //     mini=min(mini,sum);


    //     return ts-mini;
    // }
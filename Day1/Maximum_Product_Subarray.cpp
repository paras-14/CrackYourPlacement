// Intuition
// The Brute force method says we can simply apply 2 loops for calculaing all sub-arrays and finding the max product.

// But, the Optizimed way to solve this problem is using Kadane's Algorithm.

// Approach
// The Approach to this question is exactly same as Kadane's Algo the only differece is, we will be traversing the array from both sides i.e left to right ( lets say the max prod is maxi1 ) and from right to left ( say max prod is maxi2 ), now the final answer will we max of maxi1 and maxi2.

// Ques : Why do we have a need to traverse from right to left ??
// Ans : lets take an example
// arr {-8,5,3,1,6}

// // By traversing left to right we have an answer maxi1.
// maxi1 = -720 , which is clearly not the max prod value.
// -> The whole concept lies in this statement - As we can see that there is only 1 negative no. ( if we consider that no. then the final answer can never be positive ), therefore to avoid this situation we also traverse from right to left to get the final maximum prod.

// Complexity
// Time complexity:
// O(N) + O(N) = O(N), where N is size of array.

// Space complexity:
// O(1)


    // int maxProduct(vector<int>& nums) {
    //     double maxi=INT_MIN;
    //     int n=nums.size();
    //     double prod=1;
    //     for(int i=0;i<n;i++){
    //         prod*=nums[i];
    //         maxi=max(maxi,prod);
    //         if(prod==0)prod=1;
    //     }
    //     prod=1;
    //     for(int i=n-1;i>=0;i--){
    //         prod*=nums[i];
    //         maxi=max(maxi,prod);
    //         if(prod==0)prod=1;
    //     }
    //     return maxi;
    // }
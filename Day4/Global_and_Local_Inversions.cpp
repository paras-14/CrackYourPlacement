// All local inversions are global inversions.
// If the number of global inversions is equal to the number of local inversions,
// it means that all global inversions in permutations are local inversions.
// It also means that we can not find A[i] > A[j] with i+2<=j.
// In other words, max(A[i]) < A[i+2]

// In this first solution, I traverse A and keep the current biggest number cmax.
// Then I check the condition cmax < A[i+2]


// Intuitive approach
// class Solution {
//     public boolean isIdealPermutation(int[] A) {
//         for (int i = 0; i < A.length; i++) {
//             for (int j = i + 2; j < A.length; j++) {
//                 if (A[j] < A[i]) {
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// }


    
    // Optimization
    
    // bool isIdealPermutation(vector<int>& nums) {
    //     int n=nums.size();
    //     int maxi=INT_MIN;
    //     for(int i=0;i<n-2;i++){
    //         maxi=max(maxi,nums[i]);
    //         if(maxi>nums[i+2])return false;
    //     }
    //     return true;
    // }
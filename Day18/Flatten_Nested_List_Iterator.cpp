/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

// class NestedIterator {
// public:
//     vector<int>v;
//     int curr=0;
//     void helpr(NestedInteger it){
//         if(it.isInteger()){
//             v.push_back(it.getInteger());
//         }else{
//             for(auto it2:it.getList())helpr(it2);
//         }
//     }
//     NestedIterator(vector<NestedInteger> &nestedList) {
//         for(auto it:nestedList){
//             helpr(it);
//         }
//     }
    
//     int next() {
//         return v[curr++];
//     }
    
//     bool hasNext() {
//         if(curr<v.size())return true;
//         return false;
//     }
// };
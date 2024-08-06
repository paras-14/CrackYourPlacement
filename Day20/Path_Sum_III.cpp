    // long long cnt=0;
    // void fn(TreeNode* root, int targetSum,unordered_map<long long,long long>&mp,long long currSum){
    //     if(root==NULL)return ;
    //     currSum+=root->val;
    //     if(mp.find(currSum-targetSum)!=mp.end())cnt+=mp[currSum-targetSum];
    //     mp[currSum]++;
    //     fn(root->left,targetSum,mp,currSum);
    //     fn(root->right,targetSum,mp,currSum);
    //     mp[currSum]--;
    //     if(mp[currSum]==0){
    //         mp.erase(currSum);
    //     }
    //     return;
        
    // }
    // int pathSum(TreeNode* root, int targetSum) {
    //     unordered_map<long long,long long>mp;
    //     mp[0]++;
    //     fn(root,targetSum,mp,0);
    //     return cnt;
    // }
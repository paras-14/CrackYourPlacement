    // void fn(TreeNode*root,int h,int l,map<int,map<int,vector<int>>>&mp){
    //     if(root==NULL)return;
    //     mp[l][h].push_back(root->val);
    //     fn(root->left,h+1,l-1,mp);
    //     fn(root->right,h+1,l+1,mp);
    //     return;
    // }
    // vector<vector<int>> verticalTraversal(TreeNode* root) {
    //     map<int,map<int,vector<int>>>mp;
    //     vector<vector<int>>ans;
    //     int z=0;
    //     fn(root,0,0,mp);
    //     for(auto it:mp){
    //         vector<int>temp;
    //         for(auto it2:it.second){
    //             vector<int>temp2;
    //             for(auto it3:it2.second)temp2.push_back(it3);
    //             sort(temp2.begin(),temp2.end());
    //             for(int i=0;i<temp2.size();i++)temp.push_back(temp2[i]);
    //         }
    //         ans.push_back(temp);
    //     }

    //     return ans;
    // }
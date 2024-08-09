// void inorder(Node* root,vector<int>&v){
//     if(root==NULL)return;
//     inorder(root->left,v);
//     v.push_back(root->data);
//     inorder(root->right,v);
// }
// float findMedian(struct Node *root)
// {
//       //Code here
//       vector<int>v;
//       inorder(root,v);
//       int n=v.size();
//       if(n%2==1)return v[n/2];
//       else return (v[n/2-1]+v[n/2])/(2*1.0);
// }
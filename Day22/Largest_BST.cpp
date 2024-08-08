// int findSize(Node* root){
//         if(!root) return 0;
//         return findSize(root->left)+findSize(root->right)+1;
//     }
//     bool isBST(Node* root,int min,int max){
//         if(root==NULL)return true;
//         bool left=isBST(root->left,root->data,max);
//         bool right=isBST(root->right,min,root->data);
        
//         if(left && right && root->data<min && root->data>max)return true;
//         return false;
//     }
//     int largestBst(Node *root){
//     	//Your code here
//     	if(!root) return 0;
//     	if (isBST(root,INT_MAX,INT_MIN)) return findSize(root);
//     	return max(largestBst(root->left),largestBst(root->right));
//     }
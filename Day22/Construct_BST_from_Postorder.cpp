// int i;
// Node* fn(int post[],int min,int max){
//     Node*temp=NULL;
//     if(post[i]<max && post[i]>min){
//         int k=i;
//         i--;
//         if(k>=0){
//             temp=new Node(post[k]);
//             temp->right=fn(post,temp->data,max);
//             temp->left=fn(post,min,temp->data);
//         }
//     }
    
//     return temp;
// }
// Node *constructTree (int post[], int size)
// {
// //code here
//     i=size-1;
//     return fn(post,INT_MIN,INT_MAX);
// }
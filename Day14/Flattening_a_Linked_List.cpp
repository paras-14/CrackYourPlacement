    // Node* sortList(Node* head) {
    //     priority_queue<int,vector<int>,greater<int>>pq;
    //     Node*temp=head;
    //     while(temp!=NULL){
    //         pq.push(temp->data);
    //         temp=temp->bottom;
    //     }

    //     temp=head;

    //     while(!pq.empty()){
    //         temp->data=pq.top();
    //         pq.pop();
    //         temp=temp->bottom;
    //     }

    //     return head;
    // }
    // Node *flatten(Node *root) {
    //     // Your code here
    //     Node*curr=root;
    //     while(curr!=NULL){
    //         Node*temp=curr;
    //         Node*down=curr;
    //         Node*front=curr->next;
            
    //         while(temp!=NULL){
    //             down=temp;
    //             temp=temp->bottom;
    //         }
            
    //         down->bottom=front;
    //         curr->next=curr->bottom;
    //         curr=front;
    //     }
        
    //     return sortList(root);
    // }
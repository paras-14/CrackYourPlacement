    // Node* divide(Node* head) {
    //     // code here
    //     Node* evenHead=new Node(-1);
    //     Node* oddHead=new Node(-1);
    //     Node*even=evenHead;
    //     Node*odd=oddHead;
    //     Node*temp=head;
    //     while(temp!=NULL){
    //         if((temp->data)%2==0){
    //             even->next=temp;
    //             even=temp;
    //         }else{
    //             odd->next=temp;
    //             odd=temp;
    //         }
            
    //         temp=temp->next;
    //     }
        
    //     even->next=oddHead->next;
    //     odd->next=NULL;
        
    //     return evenHead->next;
    // }
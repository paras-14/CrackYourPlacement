    // Node* segregate(Node *head) {
    //     // Add code here
    //     if(!head || !head->next)return head;
    //     Node*zeroHead=new Node(-1);
    //     Node* zero=zeroHead;
    //     Node*oneHead=new Node(-1);
    //     Node* one=oneHead;
    //     Node*twoHead=new Node(-1);
    //     Node* two=twoHead;
        
    //     Node *temp=head;
        
    //     while(temp!=NULL){
    //         if(temp->data==0){
    //             zero->next=temp;
    //             zero=zero->next;
    //         }else if(temp->data==1){
    //             one->next=temp;
    //             one=one->next;
    //         }else if(temp->data==2){
    //             two->next=temp;
    //             two=two->next;
    //         }
            
    //         temp=temp->next;
    //     }
        
    //     zero->next=oneHead->next==NULL?twoHead->next:oneHead->next;
    //     one->next=twoHead->next;
    //     two->next=NULL;
        
    //     Node*ans=zeroHead->next;
        
    //     delete(zeroHead);
    //     delete(oneHead);
    //     delete(twoHead);
        
    //     return ans;
        
    // }
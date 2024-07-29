    // ListNode* removeElements(ListNode* head, int val) {
    //     ListNode* temp=head;
    //     ListNode*prev=NULL;
    //     while(temp!=NULL){
    //         if(temp->val==val){
    //             ListNode* toDel=NULL;
    //             while(temp!=NULL && temp->val==val){
    //                 toDel=temp;
    //                 temp=temp->next;
    //                 delete(toDel);
    //             }
    //             if(prev!=NULL)prev->next=temp;
    //             else head=temp;
    //         }
    //         prev=temp;
    //         if(temp!=NULL)temp=temp->next;
    //     }

    //     return head;
    // }
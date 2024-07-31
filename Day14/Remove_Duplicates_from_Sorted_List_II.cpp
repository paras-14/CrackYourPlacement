    // ListNode* deleteDuplicates(ListNode* head) {
    //     if(head==NULL)return NULL;
    //     ListNode*piche=NULL;
    //     ListNode*abhi=head;
    //     ListNode*aage=head->next;
    //     while(aage!=NULL){
    //         if(abhi->val==aage->val){
    //             while(aage && abhi->val==aage->val){
    //                 abhi=aage;
    //                 aage=aage->next;
    //             }
    //             if(piche==NULL){
    //                 head=aage;
    //                 piche=NULL;
    //                 abhi=head;
    //                 if(head)aage=head->next;
    //             }else{
    //                 piche->next=aage;
    //                 abhi=aage;
    //                 if(aage)aage=aage->next;
    //             }
    //         }else{
    //             piche=abhi;
    //             abhi=aage;
    //             aage=aage->next;
    //         }
    //     }

    //     return head;
    // }
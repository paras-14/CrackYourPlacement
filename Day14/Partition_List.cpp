    // ListNode* partition(ListNode* head, int x) {
    //     ListNode* temp1=head;

    //     ListNode*small=new ListNode(-1);
    //     ListNode*big=new ListNode(-1);

    //     ListNode* temp2=small;

    //     while(temp1!=NULL){
    //         if(temp1->val<x){
    //             temp2->next=new ListNode(temp1->val);
    //             temp2=temp2->next;
    //         }
    //         temp1=temp1->next;
    //     }

    //     ListNode*end=temp2;

    //     temp1=head;
    //     temp2=big;

    //     while(temp1!=NULL){
    //         if(temp1->val>=x){
    //             temp2->next=new ListNode(temp1->val);
    //             temp2=temp2->next;
    //         }
    //         temp1=temp1->next;
    //     }

    //     end->next=big->next;

    //     return small->next;
    // }
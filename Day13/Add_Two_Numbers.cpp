    // ListNode* reverse(ListNode* head) {
    //     ListNode *nextNode, *prevNode = NULL;
    //     while (head) {
    //         nextNode = head->next;
    //         head->next = prevNode;
    //         prevNode = head;
    //         head = nextNode;
    //     }
    //     return prevNode;
    // }
    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //     ListNode*temp1=l1;
    //     ListNode*temp2=l2;

    //     ListNode*ans=NULL;
    //     ListNode*res=NULL;

    //     int carry=0;

    //     while(temp2!=NULL || temp1!=NULL){
    //         int a=temp1!=NULL?temp1->val:0;
    //         int b=temp2!=NULL?temp2->val:0;

    //         int result=a+b+carry;
    //         carry=result/10;
    //         result=result%10;

    //         ListNode*temp=new ListNode(result);

    //         if(ans==NULL){
    //             ans=temp;
    //             res=temp;
    //         }
    //         else{
    //             ans->next=temp;
    //             ans=temp;
    //         }

    //         if(temp2!=NULL)temp2=temp2->next;
    //         if(temp1!=NULL)temp1=temp1->next;
    //     }

    //     if(carry>0){
    //         ans->next=new ListNode(carry);
    //     }

    //     return res;
    // }
    // ListNode* prev(ListNode* head){
    //     if(head==NULL || head->next==NULL)return head;
    //     ListNode*prev=NULL;
    //     ListNode*curr=head;
    //     ListNode*temp=head;
    //     while(temp!=NULL){
    //         temp=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=temp;
    //     }

    //     return prev;
    // }
    // bool isPalindrome(ListNode* head) {
    //     ListNode*slow=head;
    //     ListNode*fast=head;

    //     while(fast!=NULL && fast->next!=NULL){
    //         fast=fast->next->next;
    //         slow=slow->next;
    //     }

    //     ListNode*prevz=prev(slow);

    //     ListNode*temp1=head;
    //     ListNode*temp2=prevz;


    //     while(temp1->next!=NULL){
    //         if(temp1->val!=temp2->val)return false;
    //         temp1=temp1->next;
    //         temp2=temp2->next;
    //     }

    //     return true;
    // }
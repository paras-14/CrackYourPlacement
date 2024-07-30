    // ListNode* reverse(ListNode*head,int cnt,ListNode*&nextz){
    //     if(head==NULL || head->next==NULL)return head;
    //     ListNode* prev=NULL;
    //     ListNode* curr=head;
    //     ListNode* temp=head;
    //     while(temp!=NULL && cnt--){
    //         temp=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=temp;
    //     }
    //     nextz=temp;
    //     return prev;

    // }
    // ListNode* reverseBetween(ListNode* head, int left, int right) {
    //     if(left==right)return head;
    //     int cnt=1;
    //     ListNode*temp=head;
    //     ListNode*prev=NULL;
    //     ListNode*curr=NULL;
    //     while(temp!=NULL){
    //         if(cnt==left)break;
    //         curr=temp;
    //         temp=temp->next;
    //         cnt++;
    //     }
    //     ListNode*nextz=NULL;
    //     if(curr!=NULL){
    //         curr->next=reverse(temp,right-left+1,nextz);
    //         temp->next=nextz;
    //     }
    //     else{
    //         ListNode*tempp=head;
    //         head=reverse(temp,right-left+1,nextz);
    //         tempp->next=nextz;
    //     }
        

    //     return head;
    // }
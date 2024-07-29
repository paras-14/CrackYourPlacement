    // Approach1
    
    
    // ListNode* reverse(ListNode*head){
    //     if(head==NULL || head->next==NULL)return head;
    //     ListNode* prev=NULL;
    //     ListNode* curr=head;
    //     ListNode* temp=head;
    //     while(temp!=NULL){
    //         temp=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=temp;
    //     }
        

    //     return prev;

    // }
    // void reorderList(ListNode* head) {
    //     ListNode* slow=head;
    //     ListNode* fast=head;

    //     while(fast!=NULL && fast->next!=NULL){
    //         slow=slow->next;
    //         fast=fast->next->next;
    //     }
        
    //     ListNode*head2=reverse(slow);
        
    //     ListNode*temp1=head;
    //     ListNode*temp2=head2;

    //     while(temp2->next!=NULL){
    //         ListNode* temp3=temp1->next;
    //         ListNode* temp4=temp2->next;

    //         temp1->next=temp2;
    //         temp2->next=temp3;

    //         temp1=temp3;
    //         temp2=temp4;
    //     }
    // }







    //Approach 2

    // void reorderList(ListNode* head) {
    //     stack<ListNode*>st;
    //     ListNode*temp=head;
    //     while(temp!=NULL){
    //         st.push(temp);
    //         temp=temp->next;
    //     }

    //     int n=st.size();
    //     n/=2;

    //     ListNode*temp1=head;

    //     while(n--){
    //         ListNode*temp2=temp1->next;
    //         ListNode*temp3=st.top();
    //         st.pop();
    //         temp1->next=temp3;
    //         temp3->next=temp2;

    //         temp1=temp2;
    //     }

    //     temp1->next=NULL;
    // }






    // Approach 3

    // ListNode*curr;
    // void fn(ListNode* head){
    //     if(head==NULL)return;
    //     fn(head->next);
    //     ListNode*temp=curr->next;
    //     if(curr->next==NULL)return;
    //     else if(curr==head){
    //         curr->next=NULL;
    //         return;
    //     }

    //     curr->next=head;
    //     head->next=temp==head?NULL:temp;
    //     curr=temp;    

    //     return;
    // }
    // void reorderList(ListNode* head) {
    //     curr=head;
    //     fn(head);
    // }
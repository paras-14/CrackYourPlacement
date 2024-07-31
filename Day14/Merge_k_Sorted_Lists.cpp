    // ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //     ListNode*temp1=list1;
    //     ListNode*temp2=list2;

    //     if(temp1==NULL && temp2!=NULL)return list2;
    //     if(temp2==NULL && temp1!=NULL)return list1;
    //     if(temp1==NULL && temp2==NULL)return NULL;

    //     ListNode*ans=NULL;

    //     while(temp1!=NULL && temp2!=NULL){
    //         if(temp1->val<temp2->val){
    //             if(ans==NULL){
    //                 ans=list1;
    //             }
    //             ListNode*prev=NULL;
    //             while(temp1!=NULL && temp1->val<temp2->val){
    //                 prev=temp1;
    //                 temp1=temp1->next;
    //             }
    //             prev->next=temp2;
    //         }else{
    //             if(ans==NULL){
    //                 ans=list2;
    //             }
    //             ListNode*prev=NULL;
    //             while(temp2!=NULL && temp2->val<=temp1->val){
    //                 prev=temp2;
    //                 temp2=temp2->next;
    //             }
    //             prev->next=temp1;
    //         }
    //     }


    //     return ans;
    // }
    // ListNode* middleNode(ListNode* head) {
    //     ListNode* slow=head;
    //     ListNode* fast=head->next;
    //     while(fast!=NULL && fast->next!=NULL){
    //         fast=fast->next->next;
    //         slow=slow->next;
    //     }
    //     return slow;
    // }
    // ListNode* mergeSort(ListNode* head){
    //     if(head==NULL || head->next==NULL)return head;
    //     ListNode*middle=middleNode(head);
    //     ListNode*leftHead=head;
    //     ListNode*rightHead=middle->next;

    //     middle->next=NULL;

    //     ListNode*left=mergeSort(leftHead);
    //     ListNode*right=mergeSort(rightHead);

    //     return mergeTwoLists(left,right);


    // }
    // ListNode* sortList(ListNode* head) {
    //     return mergeSort(head);
    // }
    // ListNode* mergeKLists(vector<ListNode*>& lists) {
    //     int n=lists.size();
    //     ListNode*prev=NULL;
    //     ListNode*mainHead=NULL;
    //     for(auto it:lists){
    //         if(it){
    //             if(!mainHead)mainHead=it;
    //             ListNode*temp=it;
    //             if(prev)prev->next=it;
    //             while(temp!=NULL){
    //                 prev=temp;
    //                 temp=temp->next;
    //             }
    //         }
    //     }
    //     if(prev)prev->next=NULL;
    //     return sortList(mainHead);
    // }
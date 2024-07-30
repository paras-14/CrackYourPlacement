// Node* fn(Node *head){
//         if(head==NULL)return NULL;
//         head->next=fn(head->next);
//         if(head->next){
//             if(head->next->data>head->data)return head->next;
//             else return head;
//         }
        
//         return head;
//     }
//     Node *compute(Node *head)
//     {
//         // your code goes here
//         return fn(head);
//     }
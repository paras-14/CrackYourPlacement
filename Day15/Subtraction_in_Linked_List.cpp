//   int    length( Node * n)
//    {
//        int ret = 0;
       
//        while(n)
//        {
//            ret++;
//            n = n->next;
//        }
//        return ret;
//    }
   
//       Node *   reverse(Node * head)
//       {
//           Node*  prev = NULL;
//           Node*  current = head;
//           Node*  next;
          
//           while(current != NULL)
//           {
//               next = current->next;
//               current->next = prev;
//               prev = current;
//               current = next;
//           }
          
//             return prev;
//       }
//     Node* subLinkedList(Node* head1, Node* head2) {
//         // Your implementation of subLinkedList goes here
//         // Make sure to return the head of the resulting linked list
    
//         while(head1 && head1->data == 0)
//               head1 = head1->next;
            
//         while(head2 && head2->data == 0)
//                head2 = head2->next;
              
              
//               if(!head1 && !head2)
//               {
//                   Node * head = new Node(0);
//                   return head;
//               }
            
//             int n1 = length(head1);
//             int n2 = length(head2);
            
//             if(n2 > n1)
//               swap(head1,head2);
              
//               if(n1 == n2)
//               {
//                   Node* t1 = head1 , *t2 = head2;
//                   while(t1->data == t2->data)
//                   {
//                       t1 = t1->next;
//                        t2 = t2->next;
                       
//                        if(!t1)
//                        return new Node(0);
                      
//                   }
//                   if(t2->data > t1->data)
//                     swap(head1 , head2);
                  
//               }
              
//               head1 = reverse(head1);
//               head2 = reverse(head2);
              
//                 Node * res = NULL, * last =NULL;
//                 Node * t1  = head1 , *t2 = head2;
                
//                 while(t1)
//                 {
//                     int small = 0;
//                     if(t2)
//                     small = t2->data;
                    
//                     if(t1->data < small)
//                     {
//                         t1->next->data = t1->next->data-1;
//                         t1->data = t1->data+10;
//                     }
                    
//                     Node * n = new Node(t1->data - small);
//                     if(res==NULL){
//                         res=n;
//                         last=n;
//                     }else{
//                      last->next = n;
//                      last=last->next;
//                     }
                     
//                      t1 = t1->next;
//                      if(t2)
//                      t2 = t2->next;
//                 }
                
//                 res=reverse(res);
//                 while(res && res->data==0){
//                     res=res->next;
//                 }
                    
//                 return res;
//     }
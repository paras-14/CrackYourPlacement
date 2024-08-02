    // struct ListNode{
    //     int keyz;
    //     int val;
    //     ListNode*next;
    //     ListNode*prev;
    //     ListNode():keyz(0),val(0),next(nullptr),prev(nullptr){}
    //     ListNode(int x,int y):keyz(x),val(y),next(nullptr),prev(nullptr){}
    // };
    // unordered_map<int,ListNode*>mp;
    // int n;
    // ListNode*head=new ListNode(-1,-1);
    // ListNode*tail=new ListNode(-1,-1);
    // LRUCache(int capacity) {
    //     mp.clear();
    //     n=capacity;
    //     head->next=tail;
    //     tail->prev=head;
    // }

    // void deleteFromDLL(ListNode*req){
    //     ListNode* prevNode=req->prev;
    //     ListNode* nextNode=req->next;

    //     prevNode->next=nextNode;
    //     nextNode->prev=prevNode;

    // }

    // void insertAfterHead(ListNode*req){
    //     ListNode*temp2=head->next;
    //     req->prev=head;
    //     req->next=temp2;
    //     head->next=req;
    //     temp2->prev=req;

    //     return ;
    // }
    
    // int get(int key) {
    //     if(mp.find(key)!=mp.end()){
    //         ListNode*temp=mp[key];
    //         int result=temp->val;
    //         mp.erase(key);
    //         deleteFromDLL(temp);
    //         insertAfterHead(temp);
    //         mp[key]=head->next;
    //         return result;
    //     }

    //     return -1;
    // }
    
    // void put(int key, int value) {
    //     if(mp.find(key)!=mp.end()){
    //         ListNode*temp=mp[key];
    //         mp.erase(key);
    //         deleteFromDLL(temp);
    //     }
    
    //     if(mp.size()==n){
    //         ListNode*temp=tail->prev;
    //         mp.erase(temp->keyz);
    //         deleteFromDLL(temp);
    //     }

    //     insertAfterHead(new ListNode(key,value));
    //     mp[key]=head->next;

    //     return ;
    // }
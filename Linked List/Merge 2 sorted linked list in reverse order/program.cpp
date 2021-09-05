struct Node*reverse(Node*head){
    Node*curr=NULL,*prev=NULL,*next=head;
    while(next){
        prev=curr;
        curr=next;
        next=next->next;
        curr->next=prev;
    }
    return curr;
}
struct Node * mergeResult(Node *node1,Node *node2){
  
   Node*head=(Node*)malloc(sizeof(Node));
   Node*tail=(Node*)malloc(sizeof(Node));
   tail->data=-1;
   tail->next=NULL;
   head=tail;
   while(node1 && node2){
       if(node1->data<node2->data){
           tail->next=node1;
           node1=node1->next;
       }
       else{
           tail->next=node2;
           node2=node2->next;
       }
       tail=tail->next;
   }
   
   while(node1){
        tail->next=node1;
        node1=node1->next;
        tail=tail->next;
   }
   while(node2){
        tail->next=node2;
        node2=node2->next;
        tail=tail->next;
   }
   tail->next=NULL;
   head=head->next;
   head=reverse(head);
   return head;
}
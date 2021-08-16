struct Node* arrange(Node *head){
    if(!head)return head;
   Node*vowTail=new Node('a'),*conTail=new Node('a');
   Node*vow=vowTail,*con=conTail;
   while(head){
       if(head->data=='a' || head->data=='e' || head->data=='i' || head->data=='o' || head->data=='u'){
           vowTail->next=head;
           vowTail=head;
       }
       else{
           conTail->next=head;
           conTail=head;
       }
       head=head->next;
   }
   vowTail->next=NULL;
   conTail->next=NULL;
   if(vow->next==NULL)
        return con->next;
    if(con->next==NULL)
        return vow->next;
    vow=vow->next;
    con=con->next;
    vowTail->next=con;
    
    return vow;
}
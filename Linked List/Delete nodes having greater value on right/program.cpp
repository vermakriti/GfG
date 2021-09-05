Node* reverse(Node*head){
    
    Node*prev=NULL,*curr=NULL;
    while(head){
        
        prev=curr;
        curr=head;
        head=head->next;
        curr->next=prev;
    }
    return curr;
}
Node *compute(Node *head)
{
    head=reverse(head);
    int mx=head->data;
    Node*curr=head->next,*prev=head;
    
    while(curr){
        
        if(curr->data<mx){
            prev->next=curr->next;
            curr=curr->next;
        }else{
            mx=max(mx,curr->data);
            prev=curr;
            curr=curr->next;
        }
            
            
    }
    head=reverse(head);
    return head;
}
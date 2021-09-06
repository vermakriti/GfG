Node* reverseDLL(Node * head){

    Node*curr=head,*temp=NULL;
    while(curr){
       
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp)
        head=temp->prev;
    return head;
}

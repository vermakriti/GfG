Node *removeDuplicates(Node *head){
    
    if(!head)
        return head;
    if(!head->next)
        return head;
    
    Node*curr=head;
    while(curr && curr->next){
        
        if(curr->data==curr->next->data)
            curr->next=curr->next->next;
        else curr=curr->next;    
    }
    return head;
}
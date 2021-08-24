Node* deleteMid(Node* head){
    
    if(!head)return NULL;
    Node*prev=NULL,*slow=head,*fast=head;
    while(fast && fast->next){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(prev==NULL)
        head=slow->next;
    else{
        prev->next=slow->next;
    }    
    return head;    
    
}
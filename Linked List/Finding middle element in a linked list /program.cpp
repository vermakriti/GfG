int getMiddle(Node *head){
    // using two pointer 
    Node*slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
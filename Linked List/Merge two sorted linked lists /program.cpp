Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node*head,*tail=new Node(-1);
    head=tail;
    
    while(head1 && head2){
        if(head1->data<head2->data){
            tail->next=head1;
            head1=head1->next;
        }
        else{
            tail->next=head2;
            head2=head2->next;
        }
        tail=tail->next;
    }
    
    while(head1){
        tail->next=head1;
        head1=head1->next;
        tail=tail->next;
    }
    
    while(head2){
        tail->next=head2;
        head2=head2->next;
        tail=tail->next;
    }
    
    head=head->next;
    return head;
}  
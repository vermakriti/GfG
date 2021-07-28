Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node*head=NULL,*tail;
    while(head1 && head2){
        if(head1->data<head2->data){
            if(!head){
                head=head1;
                tail=head1;
            }
            else{
                tail->next=head1;
                tail=head1;
            }
            head1=head1->next;
        }
        else{
            if(!head){
                head=head2;
                tail=head2;
            }
            else{
                tail->next=head2;
                tail=head2;
            }
            head2=head2->next;
        }
    }
    if(head1)
        tail->next=head1;
    else tail->next=head2;
    return head;
}  
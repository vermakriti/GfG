Node* findIntersection(Node* head1, Node* head2){
    
    Node*curr1=head1,*curr2=head2;
    Node*new_head=NULL,*tail;
    while(curr1 && curr2){
        
        if(curr1->data==curr2->data){
            
            Node*node=new Node(curr1->data);
            if(new_head==NULL){
               
                new_head=node;
                tail=node;
            }
            else{
                tail->next=node;
                tail=node;
            }
            curr1=curr1->next;
            curr2=curr2->next;
            
        }
        else if(curr1->data<curr2->data){
            curr1=curr1->next;
        }
        else{
            curr2=curr2->next;
        }
    }
    tail->next=NULL;
    return new_head;
    
}
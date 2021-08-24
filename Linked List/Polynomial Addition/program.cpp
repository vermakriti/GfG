Node* addPolynomial(Node *p1, Node *p2)
{
    Node*head=NULL,*tail=NULL,*nxt;
    while(p1 && p2){
        
        if(p1->pow==p2->pow){
           Node* node=new Node(p1->coeff+p2->coeff,p1->pow);
            if(!head){
                head=node;
                tail=head;
            }
            else{
                tail->next=node;
                tail=node;
            }
            p1=p1->next;
            p2=p2->next;
        }
        else if(p1->pow>p2->pow){
            if(!head){
                head=p1;
                tail=p1;
                p1=p1->next;
            }
            else {
                tail->next=p1;
                tail=p1;
                nxt=p1->next;
                p1->next=NULL;
                p1=nxt;
            }    
            
        }
        else{
            if(!head){
                head=p2;
                tail=p2;
                p2=p2->next;
            }
            else {
                tail->next=p2;
                tail=p2;
                nxt=p2->next;
                p2->next=NULL;
                p2=nxt;
            }    
        }
    }
    while(p1){
        tail->next=p1;
        tail=p1;
        nxt=p1->next;
        p1->next=NULL;
        p1=nxt;
    }
    while(p2){
        tail->next=p2;
        nxt=p2->next;
        tail=p2;
        p2->next=NULL;
        p2=nxt;
    }
    return head;
}
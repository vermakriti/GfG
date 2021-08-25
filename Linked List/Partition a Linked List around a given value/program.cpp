struct Node* partition(struct Node* head, int x) {
    if(!head)return NULL;
    Node*smaller,*equal,*greater,*smallerTail=new Node(-1),*equalTail=new Node(-1),*greaterTail=new Node(-1);
    smaller=smallerTail;
    equal=equalTail;
    greater=greaterTail;
    
    while(head){
        if(head->data<x){
          smallerTail->next=head;
          smallerTail=smallerTail->next;
        }
        else if(head->data==x){
            equalTail->next=head;
            equalTail=equalTail->next;
        }
        else{
            greaterTail->next=head;
            greaterTail=greaterTail->next;
        }
        head=head->next;
    }
    smaller=smaller->next;
    equal=equal->next;
    greater=greater->next;
    
    smallerTail->next=NULL;
    equalTail->next=NULL;
    greaterTail->next=NULL;
    
    if(!smaller && !equal)
        return greater;
    if(!smaller && !greater)
        return equal;
    if(!equal && !greater)
        return smaller;
    if(!smaller){
        equalTail->next=greater;
        return equal;
    }    
    if(!equal){
        smallerTail->next=greater;
        return smaller;
    }
    if(!greater){
        smallerTail->next=equal;
        return smaller;
    }
    smallerTail->next=equal;
    equalTail->next=greater;
    return smaller;
}
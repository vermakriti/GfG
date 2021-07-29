int length(Node*head){
    int len=0;
    while(head){
        len++;
        head=head->next;
    }
    return len;
}
int intersectPoint(Node* head1, Node* head2){
    int l1=length(head1);
    int l2=length(head2);
    int len;
    Node*curr1=head1,*curr2=head2;
    if(l1<l2){
        curr2=head2;
        len=0;
        while(curr2){
            len++;
            if(len==l2-l1+1)
                break;
            curr2=curr2->next;    
        }  
    }
    else if(l1>l2){
        curr1=head1;
        len=0;
        while(curr1){
            len++;
            if(len==l1-l2+1)
                break;
            curr1=curr1->next;    
        }
    }
    bool flag=false;
    int ans;
    while(curr1 && curr2){
        if(curr1==curr2){
            flag=true;
            ans=curr1->data;
            break;
        }
        curr1=curr1->next;
        curr2=curr2->next;
    }
    if(flag)
        return ans;
    return -1;    
}


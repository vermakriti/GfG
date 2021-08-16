class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        if(!head)return head;
        Node*zero,*one,*two,*zeroTail=new Node(-1),*oneTail=new Node(-1),*twoTail=new Node(-1);
        zero=zeroTail;
        one=oneTail;
        two=twoTail;
        
        while(head){
            if(head->data==0){
                zeroTail->next=head;
                zeroTail=head;
            }
            else if(head->data==1){
                oneTail->next=head;
                oneTail=head;
            }
            else{
                twoTail->next=head;
                twoTail=head;
            }
            head=head->next;
        }
        
        zero=zero->next;
        one=one->next;
        two=two->next;
        zeroTail->next=NULL;
        oneTail->next=NULL;
        twoTail->next=NULL;
        if(!zero){
            if(!one){
                head=two;
            }
            else{
                head=one;
                oneTail->next=two;
            }
        }
        else if(!one){
            if(!zero){
                head=two;
            }
            else{
                head=zero;
                zeroTail->next=two;
            }
        }
        else if(!two){
            if(!one){
                head=zero;
            }
            else{
                head=zero;
                zeroTail->next=one;
            }
        }
        else{
            
            head=zero;
            zeroTail->next=one;
            oneTail->next=two;
        }
       
        return head;
        
    }
};
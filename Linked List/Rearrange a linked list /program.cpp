class Solution{
    public:
    void rearrangeEvenOdd(Node *head){
        
        if(!head || !head->next)return;
        Node*odd=head,*oddTail=head,*even=head->next,*evenTail=head->next;
        int len=2;
        head=head->next->next;
        while(head){
            len++;
            if(len&1){
                oddTail->next=head;
                oddTail=head;
            }
            else{
                evenTail->next=head;
                evenTail=head;
            }
            head=head->next;
        }
        oddTail->next=even;
        evenTail->next=NULL;
    }
};
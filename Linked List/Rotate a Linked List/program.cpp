class Solution{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k){
        // Your code here
        Node *start=head;
        Node*curr=head;
        int len=0;
        while(curr){
            len++;
            if(len==k)break;
            curr=curr->next;
        }
        if(curr->next){
            head=curr->next;
            curr->next=NULL;
            curr=head;
            while(curr->next){
                curr=curr->next;
            }
            curr->next=start;
        }
        return head;
    }
};
    
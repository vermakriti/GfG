//iterative
class Solution{
    public:
    struct Node* reverseList(struct Node *head){
        Node*curr=NULL,*prev=NULL,*next=head;
        while(next){
            prev=curr;
            curr=next;
            next=next->next;
            curr->next=prev;
        }
        head=curr;
        return head;
    }
};

//recursive

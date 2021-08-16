class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(!head || !head->next)
            return head;
        Node*curr=head,*prev=NULL,*next;
        while(curr && curr->next){
            
            next=curr->next->next;
            if(prev==NULL){
                prev=curr;
                head=curr->next;
                curr->next->next=curr;
            }
            else{
                curr->next->next=curr;
                prev->next=curr->next;
                prev=curr;
            }
            curr->next=next;
            curr=next;
            
        }
        return head;
    }
};
class Solution{
  public:
    Node*reverse(Node*head){
        Node*prev=NULL,*curr=NULL,*next=head;
        while(next){
            prev=curr;
            curr=next;
            next=next->next;
        }
        head=curr;
        return head;
    }
    bool isPalindrome(Node *head)
    {   
        if(!head || !head->next)
            return true;
        Node*slow=head,*fast=head,*prev=NULL;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        slow=reverse(slow);
        while(head && slow){
            if(head->data!=slow->data)
                return false;
            head=head->next;
            slow=slow->next;
        }
        if(slow && !slow->next)
            return true;
        if(!head && !slow)
            return true;
        return false;    
        
    }
};
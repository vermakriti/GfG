class Solution
{
    public:
    Node*reverse(Node*head){
        Node*curr=nullptr,*prev=nullptr,*next=head;
        while(next){
            prev=curr;
            curr=next;
            next=next->next;
            curr->next=prev;
        }
        return curr;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        Node*prev=nullptr,*next=nullptr,*curr=head,*mNode,*nNode,*tail,*newHead;
        int len=0;
        while(curr){
            len++;
            if(len==m-1){
               prev=curr;
            }
            if(len==m){
                mNode=curr; 
            }
            if(len==n){
                nNode=curr;
            }
            curr=curr->next;
        }
        next=nNode->next;
        tail=mNode;
        nNode->next=NULL;
        newHead=reverse(mNode);
        
        if(prev==nullptr){
            head=newHead;
            tail->next=next;
        }
        else{
            prev->next=newHead;
            tail->next=next;
        }
        return head;
    }
};
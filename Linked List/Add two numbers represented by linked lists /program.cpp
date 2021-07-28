class Solution{
    public:
    Node*reverse(Node*head){
        Node*prev=NULL,*curr=NULL,*next=head;
        while(next){
            prev=curr;
            curr=next;
            next=next->next;
            curr->next=prev;
        }
        head=curr;
        return head;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first=reverse(first);
        second=reverse(second);
        Node*tail=new Node(-1),*head=tail;
        int c;
        
        while(first && second){
            Node*node=new Node((first->data+second->data+c)%10);
            c=(first->data+second->data+c)/10;
            tail->next=node;
            tail=node;
            first=first->next;
            second=second->next;
        }
        
        while(first){
            Node*node=new Node((first->data+c)%10);
            c=(first->data+c)/10;
            tail->next=node;
            tail=node;
            first=first->next;
            
        }
        while(second){
            Node*node=new Node((second->data+c)%10);
            c=(second->data+c)/10;
            tail->next=node;
            tail=node;
            second=second->next;
        }
        if(c){
            Node*node=new Node(c);
            tail->next=node;
            tail=node;
        }
        tail->next=NULL;
        head=reverse(head->next);
        return head;
    }
};

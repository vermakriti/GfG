class Solution
{
    public:
    Node*reverse(Node*head){
        Node*curr=NULL,*prev=NULL,*next=head;
        while(next){
            prev=curr;
            curr=next;
            next=next->next;
            curr->next=prev;
        }
        return curr;
    }
    Node* addOne(Node *head) 
    {
        if(!head)return head;
        head=reverse(head);
        Node*curr=head,*prev=NULL;
        int c=0;
        while(curr){
            
            if(curr==head){
                c=(curr->data+1)/10;
                curr->data= (curr->data+1)%10;
            }
            else{
                int temp=(curr->data+c)/10;
                curr->data= (curr->data+c)%10;
                c=temp;
            }
            prev=curr;
            curr=curr->next;
        }
        if(c){
            Node*node=new Node(c);
            prev->next=node;
        }    
        head=reverse(head);
        return head;
    }
};

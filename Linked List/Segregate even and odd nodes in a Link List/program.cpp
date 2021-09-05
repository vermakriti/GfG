class Solution{
public:
    Node* divide(int N, Node *head){
        if(!head)return nullptr;
        Node*even,*odd,*even_tail=new Node(-1),*odd_tail=new Node(-1);
        even=even_tail;
        odd=odd_tail;
        while(head){
            if(head->data%2){
                odd_tail->next=head;
                odd_tail=odd_tail->next;
            }
            else{
                even_tail->next=head;
                even_tail=even_tail->next;
            }
            head=head->next;
        }
        even=even->next;
        odd=odd->next;
        even_tail->next=nullptr;
        odd_tail->next=nullptr;
        if(!even)
            return odd;
        if(!odd)
            return even;
        even_tail->next=odd;
        return even;
    }
};
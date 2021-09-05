int getNthFromLast(Node *head, int n){
       
        Node*slow=head,*fast=head;
        int len=0;
        while(fast){
            len++;
            if(len==n)
                break;
            fast=fast->next;    
        }
        if(!fast)return -1;
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
}
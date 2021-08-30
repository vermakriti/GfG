class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head){
       
       if(!head || !head->next)
            return head;
       Node*prev=NULL,*curr=head;
       bool flag=false;
       
       while(curr && curr->next){
           
            if(curr->data==curr->next->data){
               curr->next=curr->next->next;
               flag=true;
            }
            else{
                if(flag){
                    if(prev==NULL){
                        curr=curr->next;
                        head=curr;
                    }
                    else{
                        prev->next=curr->next;
                        curr=prev->next;
                    }
                    flag=false;
                }
                else{
                    prev=curr;
                    curr=curr->next;
                }
               
            }
       }
       if(flag){
           if(prev==NULL){
                head=NULL;
            }
            else{
                prev->next=NULL;
            }
       }
       return head;
    }
};
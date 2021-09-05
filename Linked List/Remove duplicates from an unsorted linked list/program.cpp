class Solution
{
    public:
    Node * removeDuplicates( Node *head) 
    {
        unordered_map<int,int>mp;
        Node*curr=head,*prev=NULL;
        
        while(curr){
            
            mp[curr->data]++;
            if(mp[curr->data]>1){
                if(curr==head){
                    mp[curr->data]--;
                    head=head->next;
                    curr=head;
                }
                else{
                    
                    mp[curr->data]--;
                    prev->next=curr->next;
                    curr=curr->next;
                    
                    
                }
            }
            else{
                prev=curr;
                curr=curr->next;
            }
           
        }
        return head;
        
    }
};

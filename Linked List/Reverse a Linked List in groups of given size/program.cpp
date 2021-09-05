// TC - O(N) SC - O(N)
struct node *reverse (struct node *head, int k){ 
    
    node*curr=head,*temp=NULL;
    stack<node*> st;
    while(curr){
        
        int cnt=0;
        while(curr && cnt<k){
            cnt++;
            st.push(curr);
            curr=curr->next;
        }
        while(!st.empty()){
            
            if(temp==NULL){
                head=st.top();
                temp=head;
                st.pop();
            }
            else{
                temp->next=st.top();
                temp=temp->next;
                st.pop();
            }
        }
    }
    temp->next=NULL;
    return head;
}


// TC=O(N) SC=(1)

class Solution
{
    public:
    node*reverse(node*head){
        node*curr=nullptr,*prev=nullptr,*next=head;
        while(next){
            prev=curr;
            curr=next;
            next=next->next;
            curr->next=prev;
        }
        return curr;
    }
    struct node *reverse (struct node *head, int k)
    { 
        if(k==1)return head;
        if(!head)return head;
        
        node*prev=nullptr,*next=nullptr,*curr=head,*newHead=nullptr,*start,*end;
        int len;
        while(curr){
            
            end=curr;
            len=0;
            while(curr->next && len<k-1){
                len++;
                curr=curr->next;
            }
            next=curr->next;
            curr->next=nullptr;
            start=reverse(end);
            if(newHead==nullptr){
                newHead=start;
            }
            else{
                prev->next=start;
            }
            end->next=next;
            prev=end;
            curr=next;
        }
        
        return newHead;
    }
};

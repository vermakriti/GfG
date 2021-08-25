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

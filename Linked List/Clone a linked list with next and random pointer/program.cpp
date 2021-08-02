// TC= O(N) SC=O(N)
Node *copyList(Node *head) {
    
    map<Node*,Node*> mp;
    Node*curr,*clone_head=NULL,*tail;
    curr=head;
    while(curr){
        
        mp[curr]=curr->next;
        Node*node=new Node(curr->data);
        
        if(!clone_head)
            clone_head=node;

        else tail->next=node;
           
        tail=node;
        node->arb=curr;
        curr->next=node;
        curr=mp[curr];
    }
    tail->next=NULL;
    curr=clone_head;
    while(curr){
        
        if(curr->arb->arb){
            curr->arb=curr->arb->arb->next;
        }else{
            curr->arb=NULL;
        }
        curr=curr->next;
    }
    for(auto i:mp){
        
        Node*node=i.first,*nxt=i.second;
        node->next=nxt;
    }
    return clone_head;
    
    
}

// TC=(N) SC=O(1)


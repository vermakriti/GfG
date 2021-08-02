Node*merge(Node*a,Node*b){
    
    Node*tail=new Node(0),*head=tail;
    while(a && b){
        if(a->data<b->data){
            tail->bottom=a;
            tail=a;
            a=a->bottom;
        }
        else{
            tail->bottom=b;
            tail=b;
            b=b->bottom;
        }
    }
    
    while(a){
        tail->bottom=a;
        tail=a;
        a=a->bottom;
    }
    while(b){
        tail->bottom=b;
        tail=b;
        b=b->bottom;
    }
    tail->bottom=NULL;
    head=head->bottom;
    return head;
    
}    
Node *flatten(Node *root)
{
    if(root==NULL || root->next==NULL)
        return root;
    root->next=flatten(root->next);  
    return merge(root,root->next);
}

Node *sortedInsert(Node* head, int data)
{
   //Your code here
   Node*curr=head,*prev=NULL,*last=head;
   bool flag=false;
   Node*node= new Node(data);
   do{
        if(data<=curr->data){
            flag=true;
            break;
        }
            
        prev=curr;    
        curr=curr->next;    
            
   }while(curr!=head);
   
    if(prev==NULL){
       
       while(last->next!=head){
           last=last->next;
       }
       node->next=head;
       head=node;
       last->next=head;
       
    }
    else if(flag==false && curr==head){
        
        while(last->next!=head){
           last=last->next;
        }
        last->next=node;
        node->next=head;
        
    }
    else{
        
        prev->next=node;
        node->next=curr;
    }
    return head;
   
}
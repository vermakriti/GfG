bool isCircular(Node *head){

   Node*curr=head;
   while( curr->next!=NULL && curr->next!=head){
       curr=curr->next;
   }
   if(curr->next==NULL)
        return 0;
    return 1;    
}
/*

Given Pointer/Reference to the head of the linked list, the task is to Sort the given linked list using Merge Sort.
Note: If the length of linked list is odd, then the extra node should go in the first list while splitting.

Example 1:

Input:
N = 5
value[]  = {3,5,2,4,1}
Output: 1 2 3 4 5
Explanation: After sorting the given
linked list, the resultant matrix
will be 1->2->3->4->5.

Example 2:

Input:
N = 3
value[]  = {9,15,0}
Output: 0 9 15
Explanation: After sorting the given
linked list , resultant will be
0->9->15.

*/


class Solution{
  public:
    Node*findMid(Node*head){
        
        Node*slow=head,*fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    Node*merge(Node*head1,Node*head2){
        
        Node*head,*tail=new Node(0);
        head=tail;
        
        while(head1 && head2){
            
            if(head1->data<head2->data){
                tail->next=head1;
                tail=head1;
                head1=head1->next;
            } 
            else{
                tail->next=head2;
                tail=head2;
                head2=head2->next;
            }
        }
        
        while(head1){
            tail->next=head1;
            tail=head1;
            head1=head1->next;
        }
        while(head2){
            tail->next=head2;
            tail=head2;
            head2=head2->next;
        }
        head=head->next;
        return head;
        
    } 
    Node* mergeSort(Node* head) {
        
        if(head->next==NULL)
            return head;
        
        Node*mid=findMid(head);
        Node*head2=mid->next;
        mid->next=NULL;
        Node*newHead1=mergeSort(head);
        Node*newHead2=mergeSort(head2);
        
        Node*mergeHead=merge(newHead1,newHead2);
        return mergeHead;
        
    }
};
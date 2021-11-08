/*
Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Example 1:
Input:
LinkedList: 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the 
linked list is 5, which is its length.

*/

// TC-O(N) SC-O(1) where N is number of nodes in linked list
class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        Node*curr=head;
        int count=0;
        while(curr){
            count++;
            curr=curr->next;
        }
        return count;
    
    }
};
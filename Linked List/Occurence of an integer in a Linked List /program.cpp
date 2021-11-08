/*

Given a singly linked list and a key, count the number of occurrences of given key in the linked list.

Example 1:

Input:
N = 7
Link List = 1->2->1->2->1->3->1
search_for = 1
Output: 4
Explanation:1 appears 4 times.

Example 2:

Input:
N = 5
Link List = 1->2->1->2->1
search_for = 3
Output: 0
Explanation:3 appears 0 times.

*/

// TC-O(N) SC-O(1)
class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
        int count=0;
        while(head){
            if(head->data==search_for)
                count++;
            head=head->next;    
        }
        return count;
    }
};
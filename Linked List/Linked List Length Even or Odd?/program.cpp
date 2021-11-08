/*

Given a linked list of size N, your task is to complete the function isLengthEvenOrOdd() which contains head of the linked list and check whether the length of linked list is even or odd.

Input:
The input line contains T, denoting the number of testcases. Each testcase contains two lines. the first line contains N(size of the linked list). the second line contains N elements of the linked list separated by space.

Output:
For each testcase in new line, print "even"(without quotes) if the length is even else "odd"(without quotes) if the length is odd.

Example:
Input:
2
3
9 4 3
6
12 52 10 47 95 0

*/
// TC-O(N) SC-O(1)
int isLengthEvenOrOdd(struct Node* head){
    int length=0;
    while(head){
        length++;
        head=head->next;
    }
    return length%2;
}
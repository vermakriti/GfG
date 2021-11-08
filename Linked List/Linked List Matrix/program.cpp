/*
Given a Matrix mat of N*N size, the task is to complete the function constructLinkedMatrix(), that constructs a 2D linked list representation of the given matrix.

Input : 2D matrix 
1 2 3
4 5 6
7 8 9

Output :
1 -> 2 -> 3 -> NULL
|    |    |
v    v    v
4 -> 5 -> 6 -> NULL
|    |    |
v    v    v
7 -> 8 -> 9 -> NULL
|    |    |
v    v    v
NULL NULL NULL

*/

// TC-O(N*N) SC-O(1)
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    Node*head,*tail=new Node(-1),*curr;
    head=tail;
    for(int i=0;i<n;i++){
        Node*node = new Node(mat[0][i]);
        tail->right=node;
        tail=node;
    }
    head=head->right;
    curr=head;
    for(int i=1;i<n;i++){
        Node*newHead,*tail=new Node(-1);
        newHead=tail;
        for(int j=0;j<n;j++){
            Node*node = new Node(mat[i][j]);
            curr->down=node;
            curr=curr->right;
            tail->right=node;
            tail=node;
        }
        newHead=newHead->right;
        curr=newHead;
    }
    return head;
}

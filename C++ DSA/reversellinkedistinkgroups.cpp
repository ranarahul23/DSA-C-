#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    Node* next=NULL;
    Node* prev=NULL;
    int cnt=0;
    while(curr!=NULL && cnt<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        cnt++;
    }
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
    return prev;
}

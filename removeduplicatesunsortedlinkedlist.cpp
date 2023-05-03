#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
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


Node* removeDuplicates(Node* head){
    Node* curr = head;
    while(curr!=NULL && curr->next != NULL){
        Node* temp = curr;
        while(temp->next!=NULL){
            if(temp->next->data == curr->data){
                Node* next = temp->next;
                temp -> next = temp->next->next;
                delete(next);
            }
            else{
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

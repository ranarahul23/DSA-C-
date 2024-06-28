Node *removeDuplicates(Node *head)
{
    if(head == NULL)
        return NULL;
    
    unordered_map<int , bool> visited;
    Node* current = head;
    Node* prev = NULL;
    Node* temp = NULL;


    while(current != NULL){
        if(visited[current->data] == true){
            temp = current;
            prev -> next = current -> next;
            current = current -> next;
            delete temp;
        }
        else{
            visited[current->data] = true;
            prev = current;
            current = current -> next;
        }
    }


    return head;
}

bool detectloop(Node* head){
        if(head==NULL){
            return false;
        }
        map<Node*,bool> visited;
        Node* temp=head;
        while(temp!=NULL){
            if(visited[temp]==true){
                cout<<"cycle is presnt on "<<temp->d<<endl;
                return 1;
            }
            visited[temp]=true;
            temp=temp->next;
        } 
        return false;

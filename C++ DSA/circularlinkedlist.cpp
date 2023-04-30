#include<iostream>
using namespace std;
class Node{
    public:
    int d;
    Node*next;
    Node*prev;
    Node(int d){
        this->d=d;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value= this->d;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insert(Node* &tail, int element, int d) {
    

    
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
       

        Node* curr = tail;

        while(curr->d != element) {
            curr = curr -> next;
        }
        
        
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;

    }

}    
void print(Node* tail) {


    Node* temp = tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }

    
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }

    do {
        cout << tail -> d << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 
void del(Node* &tail, int value) {

  
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
       
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> d != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

    
        if(curr == prev) {
            tail = NULL;
        }

        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}
int main(){
    Node* tail=NULL;
    insert(tail,1,3);
    insert(tail,3,5);
    print(tail);
    del(tail,3);
    return 0;
}
#include<iostream>
using namespace std;
class Node{
    public:
    int d;
    Node*next;
    Node(int d){
        this->d=d;
        this->next=NULL;
    }
};    
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;

}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;

}
void insertatpositon(Node* &head,Node* &tail,int position,int d){
    Node* temp=head;
    if(position==1){
        insertathead(head,d);
        return;
    }
    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;

    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}
void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->d;
        temp=temp->next;

    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    

  
    insertathead(head,12);
   
    insertattail(tail,13);
    insertatpositon(head,tail,4,15);
    print(head);
    return 0;


}
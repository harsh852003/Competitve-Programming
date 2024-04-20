#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //parameter constructor
    Node(int data){
        this-> data = data;
        this->next = NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;

        //deleting the node
        if(this->next!=NULL){
            delete next;
            this->next==NULL;
        }
        cout<<"Deleting the node"<<endl;
    }
};
void insertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int data){

    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    Node* temp = head;
    int count = 0;
    //insert at first position
    if(position==1){
        insertAtHead(head,data);
        return;
    }

    while(temp!=NULL){
        //insert at last position
        if(temp->next==NULL){
            insertAtTail(tail, data);
            return;
        }
        else if(count<position){
            temp = temp->next;
            count++;
            continue;
        }
        else if(count==position-1){
            Node* nodeToInsert = new Node(data);
            nodeToInsert->next = temp->next;
            temp->next = nodeToInsert;
            return;
        }
        temp = temp->next;
    }   

}
void deleteNode(int position, Node* head){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else{
        Node* current = head;
        Node* previous = NULL;

        int count = 1;
        while(count<=position){
            current = previous;
            current = current->next;
            count++;
        
        }
        previous->next = current->next;
        delete current;
    }

}
void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->data << " ";
        temp = temp ->next;
    }
    cout<<endl;    
}

int main(){
    Node* node1 = new Node(10);
    //pointing the head in new node
    Node* head = node1;
    Node* tail = node1;


    print(head);
    insertAtHead(head,9);
    insertAtTail(tail ,11);
    print(head);
    insertAtPosition(head,tail,1,13);
    print(head);

    cout<< head->data<<endl;
    cout<< tail->data<<endl;

    deleteNode(2,head);
    print(head);
    return 0;
}
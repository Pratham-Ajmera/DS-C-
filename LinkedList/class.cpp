#include<iostream>
using namespace std;
class Node{
        public:
        int data;
        // Node* prev;
        Node* next;

       Node(int data){
        this->data = data;
        // prev=NULL;
        next=NULL;
    } 

};

void print(Node* &head){

    cout<<"Print function called"<<endl; 

    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;

}

void insertAtHead(Node* &head, int data){
    Node* newNode =  new Node(data);
    newNode ->next = head;
    head = newNode;
}
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data  = data;
        this -> next = NULL;
    }

};
void insertAtPosition(node* &head, int position, int data){
    int i=0;
    node* temp = head;
    node* position = temp;
    while(temp != NULL){
        if(i == (position-1){
            node* position = temp;
            temp = temp -> next;
            break;

        }

        i++;
        
    }
    node* newPostion = new node(data);
    position->next = newPostion;
    newPostion -> next = temp;
}

void insertAtHead(node* &head,int data){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;


}
void insertAtTails(node* &tail, int data){
    node* temp = new node(data);
    tail -> next =temp;
    tail=temp;
}

void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp= temp -> next;
    }
}





int main(){
    
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 13);
    insertAtHead(head, 14);
    insertAtTails(tail, 12);
    insertAtTails(tail, 23);
    print(head); 


    
    // cout<< head -> data<<" ";

    return 0;


}   
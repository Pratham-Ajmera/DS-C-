#include<iostream>
using namespace std;
    class Node{
    public:
        
    int data;
    Node* next;
    Node(int data){
        this-> data=data;
        this->next = NULL;
        // cout<<data<<endl;
    }
    
};
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail=temp;
}
void printLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}

/*void printReverse(Node* head){
    if(head== NULL){
        return;
    }
    printReverse(head->next);
    cout<<head-> data<<" ";
}*/

// void insert(Node* &head,int data,int i){
//     // cout<<"enter the data"<<endl;
//     cin>>data;
    
//     if(data==-1){
//      return head;   
//     }
    
//     //  cout<<pp->data<<" ";
//     Node* temp = new Node(data);

//         head->next = insert(head->next,data,i);
        
   
     

//     // return pp;
     
    
// }

// Node* insertpp(Node* &pp,int data,int i){
//     // cout<<"enter the data"<<endl;
//     cin>>data;
    
//     if(data==-1){
//      return pp;   
//     }
  
//     Node* temp = new Node(data);
//     pp->next=temp;


//     insertpp(pp->next,data,i);
//     // return pp;
     
    
// }

Node* create(Node* head){
    int data;
    cout<<"Enter the Data"<<endl;
    cin>>data;
    Node* temp = new Node(data);
    if(data == -1){
        return NULL;
    }

    head->next=create(temp);
    return head;

}

int main(){
    Node* firstNode = new Node(1);
    Node* head= firstNode;
    Node* tail = firstNode;

    // cout<<"Enter the data for the node"<<endl;
    // int data;
    // cin>>data;
    // while(data != 0){
    //     insertAtTail(tail,data);
    //     cin>>data;
    // }
    // printLL(head);
    // cout<<endl;
    // printReverse(head);
    cout<<head->data<<endl;

    // cout<<"call ke pahle";

    Node* temp = create(head);

    printLL(temp);

    cout<<endl;

    cout<<"call ke bad"<<endl;

    cout<<head->data<<endl;

    

    return 0;


}